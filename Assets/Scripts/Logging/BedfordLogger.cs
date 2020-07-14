using System.Collections.Generic;
using UnityEngine;
using System.Text;
using TMPro;
using UnityEngine.SceneManagement;

public class BedfordLogger : MonoBehaviour
{
    [SerializeField] GameObject bedfordInput;

    string filePath;
    List<string[]> rowData = new List<string[]>();
    bool fileCreated = false;


    void Awake()
    {
        filePath = GameplayLogger.Instance().GetBedfordFilePath;
    }


    public void LogBedfordValue()
    {
        SaveToCSV(bedfordInput.GetComponent<TMP_InputField>().text);

        gameObject.SetActive(false);
    }

    public void MoveOn()
    {
        SceneManager.LoadScene("LastInstructions");
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
