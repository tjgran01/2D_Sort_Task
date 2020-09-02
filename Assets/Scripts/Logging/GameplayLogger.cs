using System;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System.Linq;
using System.Collections;
using UnityEngine.Networking;

public class GameplayLogger : MonoBehaviour
{
    private static GameplayLogger instance = null;

    string userId = "NO_ID_PROVIDED";

    string targetShape;
    List<int> targetBins;

    List<string[]> rowData = new List<string[]>();
    string filePath = null;
    string dir = null;
    string bedfordFilePath = null;
    string bedfordFilePathLast = null;
    string newFileName = null;
    bool fileCreated;

    double timeLeft;

    DateTime epochStart;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }

        InitValues();

        EventManager.AddBinChosenListener(HandleBinChosenEvent);
        EventManager.AddTargetShapeListener(HandleTargetShapeEvent);
        EventManager.AddTargetBinsListener(HandleTargetBinsEvent);
        EventManager.AddUserIdListener(HandleUserIdEvent);        
    }

    void Start()
    {
        fileCreated = false;
        timeLeft = 0;
        DateTime epochStart = new DateTime(1970, 1, 1, 8, 0, 0, DateTimeKind.Utc);
    }

    public static GameplayLogger Instance()
    {
        if (instance == null)
        {
            throw new Exception("GameplayLogger is null.");
        }
        return instance;
    }


    #region Helper Functions
    string[] ReturnRowData(string _id, string _targetShape, string _targetBins, string _selectedShape, string _selectedBin, string _timeTaken, string _timeOfDisplay, string _currentTime, string _blockCondition)
    {
        string[] row = new string[9];
        row[0] = _id;
        row[1] = _targetShape;
        row[2] = _targetBins;
        row[3] = _selectedShape;
        row[4] = _selectedBin;
        row[5] = _timeTaken;
        row[6] = _timeOfDisplay;
        row[7] = _currentTime;
        row[8] = _blockCondition;

        return row;
    }

    void SetFilePath()
    {
        dir = "Data/USER_" + userId;
        string dirBed = dir + @"\bedford\";
        string mouseDir = dir + @"\MouseMovement\";
        Directory.CreateDirectory(dir);
        Directory.CreateDirectory(dirBed);
        Directory.CreateDirectory(mouseDir);


        DirectoryInfo d = new DirectoryInfo(dir);
        FileInfo[] files = d.GetFiles();

        List<int> indices = new List<int>();
        foreach (FileInfo f in files)
        {
            int fileIndex = int.Parse(f.Name.Remove(f.Name.IndexOf(".", StringComparison.Ordinal)));
            indices.Add(fileIndex);
        }

        if (indices.Count == 0)
            newFileName = "0.csv";
        else
            newFileName = (indices.Max() + 1).ToString() + ".csv";

        this.filePath = dir + "/" + newFileName;
    }

    void SaveToCSV(string selectedShape, int selectedBin, double displayTimestamp, double binChosenTimestamp, string blockCondition)
    {
        if (!fileCreated)
        {
            string[] header = ReturnRowData("ID", "Target Shape", "Target Bins", "Selected Shape", "Selected Bin", "Time Left", "Shape Display Timestamp", "Bin Chosen Timestamp", "Block Condition");
            rowData.Add(header);

            fileCreated = true;
        }

        string[] row = ReturnRowData(userId, targetShape, String.Join(" & ", targetBins), selectedShape, selectedBin.ToString(),
            timeLeft.ToString(), displayTimestamp.ToString(), binChosenTimestamp.ToString(), blockCondition);
        rowData.Add(row);

        string[][] output = new string[rowData.Count][];
        for (int i = 0; i < output.Length; i++)
            output[i] = rowData[i];

        int length = output.GetLength(0);
        string delimeter = ",";

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < length; i++)
            sb.AppendLine(string.Join(delimeter, output[i]));


        Dictionary<string, string> fields = new Dictionary<string, string>()
        {
            { "path", filePath },
            { "data", sb.ToString() }
        };

        StreamWriter outStream = File.CreateText(filePath);
        outStream.WriteLine(sb);
        outStream.Close();
    }
    #endregion


    #region Initializers
    void InitValues()
    {
        userId = "";
        targetShape = "";
        targetBins = new List<int>();
    }
    #endregion


    #region Event Handlers
    private void HandleBinChosenEvent(GameObject shape, int bin, double displayTimestamp, double binChosenTimestamp)
    {
        string shapeName = shape.name;
        string cleanedShapeName = shapeName.Remove(shapeName.IndexOf("(", StringComparison.Ordinal));
        string blockCondition = Camera.main.GetComponent<Gameplay>().GetCurrentCondition();
        SaveToCSV(cleanedShapeName, bin, displayTimestamp, binChosenTimestamp, blockCondition);
    }

    public void HandleSecondaryAudioPromptEvent(int bin, bool isTargetAudio)
    {
        if (isTargetAudio)
        {
            string shapeAppend = "TARGET AUDIO PROMPT";
            string shapeName = "Any";
            string blockCondition = Camera.main.GetComponent<Gameplay>().GetCurrentCondition();
            SaveToCSV(shapeName + " -- " + shapeAppend, bin, (DateTime.UtcNow - epochStart).TotalSeconds, 0.0, blockCondition);
        }
        else
        {
            string shapeAppend = "DISTRACTOR AUDIO PROMPT";
            string shapeName = "Any";
            string blockCondition = Camera.main.GetComponent<Gameplay>().GetCurrentCondition();
            SaveToCSV(shapeName + " -- " + shapeAppend, bin, (DateTime.UtcNow - epochStart).TotalSeconds, 0.0, blockCondition);
        }
    }

    private void HandleTargetShapeEvent(string shapeName)
    {
        targetShape = shapeName;

    }

    private void HandleTargetBinsEvent(List<int> bins)
    {
        targetBins = bins;

    }

    private void HandleUserIdEvent(string id)
    {
        userId = id;
        SetFilePath();
        Debug.Log("File Path Set");
    }

    public void HandleElapsedTime(double secondsLeft)
    {
        timeLeft = secondsLeft;
    }
    #endregion


    #region Getters
    public string GetBedfordFilePath { get { return dir + @"\bedford\" + newFileName; } }

    public string GetMouseFilePath { get { return dir + @"\MouseMovement\" + newFileName; } }
    #endregion
}
