using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System.Linq;

public class Logger : MonoBehaviour
{
    string user_id = "NO_ID_PROVIDED";
    float timeTrialStarted;
    float timeTrialEnded;

    string targetShape;
    List<int> targetBins;

    List<string[]> rowData = new List<string[]>();
    string filePath;
    bool fileCreated;

    private void Awake()
    {
        InitValues();
        DontDestroyOnLoad(this.gameObject);

        EventManager.AddTrialStartedListener(HandleTrialStartedEvent);
        EventManager.AddBinChosenListener(HandleBinChosenEvent);
        EventManager.AddTargetShapeListener(HandleTargetShapeEvent);
        EventManager.AddTargetBinsListener(HandleTargetBinsEvent);
        EventManager.AddUserIdListener(HandleUserIdEvent);
        
    }
    void Start()
    {
        fileCreated = false;
    }


    #region Helper Functions
    string[] ReturnRowData(string _id, string _targetShape, string _targetBins, string _selectedShape, string _selectedBin, string _timeTaken)
    {
        string[] row = new string[6];
        row[0] = _id;
        row[1] = _targetShape;
        row[2] = _targetBins;
        row[3] = _selectedShape;
        row[4] = _selectedBin;
        row[5] = _timeTaken;

        return row;
    }


    string ReturnFilePath()
    {
        string dir = "Data/USER_" + user_id;
        Directory.CreateDirectory(dir);

        DirectoryInfo d = new DirectoryInfo(dir);
        FileInfo[] files = d.GetFiles();

        List<int> indices = new List<int>();
        foreach (FileInfo f in files)
        {
            int fileIndex = int.Parse(f.Name.Remove(f.Name.IndexOf(".", StringComparison.Ordinal)));
            indices.Add(fileIndex);
        }

        string newFileName;
        if (indices.Count == 0)
            newFileName = "0.csv";
        else
            newFileName = (indices.Max() + 1).ToString() + ".csv";

        return dir + "/" + newFileName;
    }


    void SaveToCSV(string selectedShape, int selectedBin, float timeTaken)
    {
        if(!fileCreated)
        {
            string[] header = ReturnRowData("ID", "Target Shape", "Target Bins", "Selected Shape", "Selected Bin", "Time Taken");
            rowData.Add(header);

            fileCreated = true;
        }

        string[] row = ReturnRowData(user_id, targetShape, String.Join(" & ", targetBins), selectedShape, selectedBin.ToString(), timeTaken.ToString());
        rowData.Add(row);

        string[][] output = new string[rowData.Count][];
        for (int i = 0; i < output.Length; i++)
            output[i] = rowData[i];

        int length = output.GetLength(0);
        string delimeter = ",";

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < length; i++)
            sb.AppendLine(string.Join(delimeter, output[i]));

        StreamWriter outStream = File.CreateText(filePath);
        outStream.WriteLine(sb);
        outStream.Close();
    }
    #endregion


    #region Initializers
    void InitValues()
    {
        user_id = "";
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

    private void HandleTrialStartedEvent()
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
        user_id = id;
        filePath = ReturnFilePath();
    }
    #endregion
}
