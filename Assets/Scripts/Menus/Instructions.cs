using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using System.Linq;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine.SceneManagement;

public class Instructions : MonoBehaviour
{
    [SerializeField] GameObject textObj;

    string path;
    List<string> instructions;
    int instructionIndex;
    int numInstructions;

    void Start()
    {
        path = "Instructions";
        instructions = new List<string>();
        instructionIndex = 0;

        ReadInstructions();
        numInstructions = instructions.Count;

        textObj.GetComponent<TextMeshProUGUI>().text = instructions[instructionIndex];
    }

    void ReadInstructions()
    {
        DirectoryInfo d = new DirectoryInfo(path);
        FileInfo[] files = d.GetFiles();

        List<string> fileNames = new List<string>();
        foreach (FileInfo file in files)
            fileNames.Add(file.ToString());

        fileNames = fileNames.CustomSort().ToList();


        foreach (string f in fileNames)
        {
            StreamReader reader = new StreamReader(f);

            string instruction = reader.ReadToEnd();

            string modifiedIns = Regex.Replace(instruction, @"(?<=\<).+?(?=\>)",
            delegate(Match match)
            {
                string v = match.ToString();
                return "sprite name=" + v;
            });

            instructions.Add(modifiedIns);

            reader.Close();
        }
    }

    public void OnNextButtonClicked()
    {
        instructionIndex += 1;
        if (instructionIndex < numInstructions)
            textObj.GetComponent<TextMeshProUGUI>().text = instructions[instructionIndex];
        else
            SceneManager.LoadScene("Gameplay");
    }

    public void OnBackButtonClicked()
    {
        instructionIndex -= 1;
        if (instructionIndex >= 0)
            textObj.GetComponent<TextMeshProUGUI>().text = instructions[instructionIndex];
        else
        {
            Destroy(GameObject.FindGameObjectWithTag("Logger"));
            SceneManager.LoadScene("UserInfo");
        }
    }


}

//Source:
//https://stackoverflow.com/questions/11052095/how-can-i-sort-a-string-of-text-followed-by-a-number-using-linq/11052176#11052176
public static class MyExtensions
{
    public static IEnumerable<string> CustomSort(this IEnumerable<string> list)
    {
        int maxLen = list.Select(s => s.Length).Max();

        return list.Select(s => new
        {
            OrgStr = s,
            SortStr = Regex.Replace(s, @"(\d+)|(\D+)", m => m.Value.PadLeft(maxLen, char.IsDigit(m.Value[0]) ? ' ' : '\xffff'))
        })
        .OrderBy(x => x.SortStr)
        .Select(x => x.OrgStr);
    }

}