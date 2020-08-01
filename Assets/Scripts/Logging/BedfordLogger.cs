using System.Collections.Generic;
using UnityEngine;
using System.Text;
using TMPro;
using UnityEngine.SceneManagement;

public class BedfordLogger : MonoBehaviour
{
    [SerializeField] GameObject bedfordInput;
    [SerializeField] GameObject errorText;

    string filePath;
    List<string[]> rowData = new List<string[]>();
    bool fileCreated = false;

    void Awake()
    {
        filePath = GameplayLogger.Instance().GetBedfordFilePath;
        if (SceneManager.GetActiveScene().name == "Gameplay")
        {
            errorText.SetActive(false);
        }
    }

    private bool CheckBedfordValue(string theValue)
    {
        if (theValue == "10") { return true; }
        foreach (char c in theValue)
        {
            if ((c < '1' || c > '9'))
            {
                errorText.SetActive(true);
                return false;
            }
        }
        return true;
    }


    public void LogBedfordValue()
    {
        if (bedfordInput.GetComponent<TMP_InputField>().text != "")
        {
            if (CheckBedfordValue(bedfordInput.GetComponent<TMP_InputField>().text))
            {
                SaveToCSV(bedfordInput.GetComponent<TMP_InputField>().text);
                errorText.SetActive(false);
                Camera.main.GetComponent<Gameplay>().SwitchCanvas(false);
                bedfordInput.GetComponent<TMP_InputField>().text = "";
            }
        }
    }

    public void MoveOn()
    {
        SceneManager.LoadScene("LastInstructions");
    }


    public void LogAndMoveOne()
    {
        SaveToCSV(bedfordInput.GetComponent<TMP_InputField>().text);
        SceneManager.LoadScene("GameFinished");

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
