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
    string bedfordFilePath = null;
    bool fileCreated;

    double timeLeft;

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
    string[] ReturnRowData(string _id, string _targetShape, string _targetBins, string _selectedShape, string _selectedBin, string _timeTaken, string _timeOfDisplay, string _currentTime)
    {
        string[] row = new string[8];
        row[0] = _id;
        row[1] = _targetShape;
        row[2] = _targetBins;
        row[3] = _selectedShape;
        row[4] = _selectedBin;
        row[5] = _timeTaken;
        row[6] = _timeOfDisplay;
        row[7] = _currentTime;

        return row;
    }

    void SetFilePath(string dir)
    {
        Dictionary<string, string> fields = new Dictionary<string, string>() { { "path", dir } };
        StartCoroutine(PHPCommunicator.Instance().PostRequest("ReturnFileNames.php", fields, returnedText =>
        {
            List<string> files = returnedText.Split('\n').ToList().CustomSort().ToList();

            List<int> indices = new List<int>();
            foreach (string f in files)
            {
                try
                {
                    int fileIndex = int.Parse(f.Remove(f.IndexOf(".", StringComparison.Ordinal)));
                    indices.Add(fileIndex);
                }
                catch { }
            }

            string newFileName;
            if (indices.Count == 0)
                newFileName = "0.csv";
            else
                newFileName = (indices.Max() + 1).ToString() + ".csv";

            filePath = dir + "/" + newFileName;

            MouseLogger.Instance().SetUserId = userId;
            MouseLogger.Instance().SetFilePath = $"Data/UserData/USER_{userId}/MouseMovement/" + newFileName;
            bedfordFilePath = $"Data/UserData/USER_{userId}/bedford.csv";
        }));
    }

    void SaveToCSV(string selectedShape, int selectedBin, double displayTimestamp, double binChosenTimestamp)
    {
        if (!fileCreated)
        {
            string[] header = ReturnRowData("ID", "Target Shape", "Target Bins", "Selected Shape", "Selected Bin", "Time Left", "Shape Display Timestamp", "Bin Chosen Timestamp");
            rowData.Add(header);

            fileCreated = true;
        }

        string[] row = ReturnRowData(userId, targetShape, String.Join(" & ", targetBins), selectedShape, selectedBin.ToString(),
            timeLeft.ToString(), displayTimestamp.ToString(), binChosenTimestamp.ToString());
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
        StartCoroutine(PHPCommunicator.Instance().PostRequest("WriteToFile.php", fields, _ => { }));
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
        SaveToCSV(cleanedShapeName, bin, displayTimestamp, binChosenTimestamp);
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
        SetFilePath($"Data/UserData/USER_{userId}/Gameplay");
    }

    public void HandleElapsedTime(double secondsLeft)
    {
        timeLeft = secondsLeft;
    }
    #endregion


    #region Getters
    public string GetBedfordFilePath { get { return bedfordFilePath; } }
    #endregion
}
