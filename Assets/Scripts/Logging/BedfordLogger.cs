using System;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;
using System.Text;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using System.Collections;

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
        filePath = GameplayLogger.Instance().GetBedfordFilePath;
    }


    public void LogBedfordValue()
    {
        var myInputObj = GameObject.FindGameObjectWithTag("BefordTextEntry");
        textEntryBox = myInputObj.GetComponent<TMP_InputField>();

        string bedfordValue = textEntryBox.text;
        SaveToCSV(bedfordValue);

        GameObject.FindGameObjectWithTag("Bedford").SetActive(false);
        //transform.parent.gameObject.SetActive(false);
    }

    void SaveToCSV(string bedfordValue)
    {
        if (!fileCreated)
        {
            string[] header = { "BedfordValue" };
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


        Dictionary<string, string> fields = new Dictionary<string, string>()
        {
            { "path", filePath },
            { "data", sb.ToString() }
        };
        StartCoroutine(PHPCommunicator.Instance().PostRequest("WriteToFile.php", fields, _ => { }));
    }
}
