using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System.Linq;
using UnityEngine.Networking;

public class MouseLogger : MonoBehaviour
{
    [SerializeField] float saveDataTimeRate;

    private static MouseLogger instance = null;

    string userId = "NO_ID_PROVIDED";
    List<string[]> rowData = new List<string[]>();
    string filePath;
    bool fileCreated;
    Vector3 currectMousePosition;


    Timer saveDataTimer;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        InitValues();
    }

    private void Start()
    {
        saveDataTimer = gameObject.AddComponent<Timer>();
        saveDataTimer.AddTimerFinishedListener(HandleSaveDataTimerFinished);
        saveDataTimer.Duration = saveDataTimeRate;
        saveDataTimer.Run();
        fileCreated = false;
    }

    public static MouseLogger Instance()
    {
        if (instance == null)
        {
            throw new Exception("MouseLogger is null.");
        }
        return instance;
    }


    #region Helper Functions
    string[] ReturnRowData(string _id, string _mousePosition, string _currentTime)
    {
        string[] row = new string[3];
        row[0] = _id;
        row[1] = _mousePosition;
        row[2] = _currentTime;

        return row;
    }

    void SaveToCSV()
    {
        if (!fileCreated)
        {
            string[] header = ReturnRowData("ID", "Mouse Position (x/y)", "Current Time (s)");
            rowData.Add(header);

            fileCreated = true;
        }

        DateTime epochStart = new DateTime(1970, 1, 1, 8, 0, 0, DateTimeKind.Utc);
        double cuurentTime = (DateTime.UtcNow - epochStart).TotalSeconds;

        currectMousePosition = Input.mousePosition;
        string[] row = ReturnRowData(userId, $"({currectMousePosition.x}/{currectMousePosition.y})", cuurentTime.ToString());
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

    private void HandleSaveDataTimerFinished()
    {
        if (filePath != "")
            SaveToCSV();

        saveDataTimer.Duration = saveDataTimeRate;
        saveDataTimer.Run();
    }
    #endregion


    #region Initializers
    void InitValues()
    {
        userId = "";
        filePath = "";
    }
    #endregion



    #region Setters
    public string SetUserId { set { userId = value; } }
    public string SetFilePath { set { filePath = value; } }
    #endregion
}
