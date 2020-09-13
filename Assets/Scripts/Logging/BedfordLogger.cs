using System;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;
using System.Text;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BedfordLogger : MonoBehaviour
{
    [SerializeField] GameObject bedfordInput;
    [SerializeField] GameObject errorText;
    private Slider tlxSlider;

    [SerializeField] GameObject tlxButton;
    [SerializeField] GameObject yesButton;
    [SerializeField] GameObject noButton;
    [SerializeField] GameObject wanderText;
    [SerializeField] GameObject tlxText;

    string filePath;
    List<string[]> rowData = new List<string[]>();
    bool fileCreated = false;

    void Awake()
    {
        filePath = GameplayLogger.Instance().GetBedfordFilePath;
        tlxSlider = GameObject.FindWithTag("tlxSlider").GetComponent<Slider>();
        Debug.Log(tlxSlider.value);

        
        if (SceneManager.GetActiveScene().name == "Gameplay")
        {
            errorText.SetActive(false);
            yesButton.SetActive(false);
            noButton.SetActive(false);
            wanderText.SetActive(false);
        }
    }

    private bool CheckBedfordValue(string theValue)
    {
        try
        {
            int result = Int32.Parse(theValue);
            if (result <= 21 && result >= 1)
            {
                return true;
            }
            return false;
        }
        catch (FormatException)
        {
            errorText.SetActive(true);
            return false;
        }
    }

    private void DisplayWanderCanvas()
    {
        errorText.SetActive(false);
        tlxSlider.gameObject.SetActive(false);
        bedfordInput.SetActive(false);
        tlxText.SetActive(false);
        tlxButton.SetActive(false);

        yesButton.SetActive(true);
        noButton.SetActive(true);
        wanderText.SetActive(true);
    }


    public void LogBedfordValue()
    {
        if (bedfordInput.GetComponent<TMP_InputField>().text != "")
        {
            if (CheckBedfordValue(bedfordInput.GetComponent<TMP_InputField>().text))
            {
                SaveToCSV(bedfordInput.GetComponent<TMP_InputField>().text);
                tlxSlider.value = 10;
                errorText.SetActive(false);
                DisplayWanderCanvas();
                bedfordInput.GetComponent<TMP_InputField>().text = "";
            }
        }
    }

    public void LogWanderPromptValue()
    {
        errorText.SetActive(true);
        tlxSlider.gameObject.SetActive(true);
        bedfordInput.SetActive(true);
        tlxText.SetActive(true);
        tlxButton.SetActive(true);

        yesButton.SetActive(false);
        noButton.SetActive(false);
        wanderText.SetActive(false);
        Camera.main.GetComponent<Gameplay>().SwitchCanvas(false, true);
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

        StreamWriter outStream = File.CreateText(filePath);
        outStream.WriteLine(sb);
        outStream.Close();
    }
}
