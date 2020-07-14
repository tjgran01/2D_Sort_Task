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
    float timeTrialStarted;
    float timeTrialEnded;

    string targetShape;
    List<int> targetBins;

    List<string[]> rowData = new List<string[]>();
    string filePath = null;
    string bedfordFilePath = null;
    bool fileCreated;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }

        InitValues();

        EventManager.AddTaskStartedListener(HandleTaskStartedEvent);
        EventManager.AddBinChosenListener(HandleBinChosenEvent);
        EventManager.AddTargetShapeListener(HandleTargetShapeEvent);
        EventManager.AddTargetBinsListener(HandleTargetBinsEvent);
        EventManager.AddUserIdListener(HandleUserIdEvent);        
    }

    void Start()
    {
        fileCreated = false;
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
    string[] ReturnRowData(string _id, string _targetShape, string _targetBins, string _selectedShape, string _selectedBin, string _timeTaken, string _currentTime)
    {
        string[] row = new string[7];
        row[0] = _id;
        row[1] = _targetShape;
        row[2] = _targetBins;
        row[3] = _selectedShape;
        row[4] = _selectedBin;
        row[5] = _timeTaken;
        row[6] = _currentTime;

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

    //string ReturnFilePath(string dir)
    //{
    //    Directory.CreateDirectory(dir);

    //    DirectoryInfo d = new DirectoryInfo(dir);
    //    FileInfo[] files = d.GetFiles();

    //    List<int> indices = new List<int>();
    //    foreach (FileInfo f in files)
    //    {
    //        int fileIndex = int.Parse(f.Name.Remove(f.Name.IndexOf(".", StringComparison.Ordinal)));
    //        indices.Add(fileIndex);
    //    }

    //    string newFileName;
    //    if (indices.Count == 0)
    //        newFileName = "0.csv";
    //    else
    //        newFileName = (indices.Max() + 1).ToString() + ".csv";

    //    return dir + "/" + newFileName;
    //}


    void SaveToCSV(string selectedShape, int selectedBin, float timeTaken)
    {
        if (!fileCreated)
        {
            string[] header = ReturnRowData("ID", "Target Shape", "Target Bins", "Selected Shape", "Selected Bin", "Time Taken", "Current Time (ms)");
            rowData.Add(header);

            fileCreated = true;
        }

        string[] row = ReturnRowData(userId, targetShape, String.Join(" & ", targetBins), selectedShape, selectedBin.ToString(),
            timeTaken.ToString(), (Time.fixedTime * 1000).ToString());
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
        timeTrialStarted = -1;
        timeTrialEnded = 0;
        targetShape = "";
        targetBins = new List<int>();
    }
    #endregion


    #region Event Handlers
    private void HandleBinChosenEvent(GameObject shape, int bin)
    {
        if(timeTrialStarted > 0)
        {
            timeTrialEnded = Time.fixedTime;

            string shapeName = shape.name;
            string cleanedShapeName = shapeName.Remove(shapeName.IndexOf("(", StringComparison.Ordinal));
            SaveToCSV(cleanedShapeName, bin, timeTrialEnded - timeTrialStarted);

            timeTrialStarted = -1;
        }
        
    }

    private void HandleTaskStartedEvent()
    {
        timeTrialStarted = Time.fixedTime;
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
    #endregion


    #region Getters
    public string GetBedfordFilePath { get { return bedfordFilePath; } }
    #endregion
}
