using System;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;
using System.Text;
using TMPro;
using UnityEngine.SceneManagement;

public class BedfordLogger : MonoBehaviour
{
    TMP_InputField textEntryBox;
    string user_id = "NO_ID_PROVIDED";
    string filePath;
    List<string[]> rowData = new List<string[]>();
    bool fileCreated = false;

    // Start is called before the first frame update
    void Awake()
    {
        filePath = ReturnFilePath();
    }


    public void LogBedfordValue()
    {
        var myInputObj = GameObject.FindGameObjectWithTag("BefordTextEntry");
        textEntryBox = myInputObj.GetComponent<TMP_InputField>();
        string bedfordValue = textEntryBox.text;
        SaveToCSV(bedfordValue);
        transform.parent.gameObject.SetActive(false);
    }

    void SaveToCSV(string bedfordValue)
    {
        if (!fileCreated)
        {
            string[] header = { "Bedford Value" };
            rowData.Add(header);

            fileCreated = true;
        }

        string[] row = { bedfordValue };
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


    string ReturnFilePath()
    {

        string dir = "Data/USER_Bedford";
        Debug.Log(dir);
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
            newFileName = "bedford.csv";
        else
            newFileName = (indices.Max() + 1).ToString() + ".csv";


        Debug.Log("Directory: " + dir + " created");
        return dir + "/" + newFileName;
    }
}
