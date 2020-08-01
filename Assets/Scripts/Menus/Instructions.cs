using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using System.Linq;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class Instructions : MonoBehaviour
{
    [SerializeField] GameObject textObj;

    List<string> instructions;
    //List<string> instructions = new List<string>()
    //{
    
    //};
    int instructionIndex;
    int numInstructions;

    void Start()
    {
        instructions = InitGame.Instance().GetInstructions;
        instructions.Sort();
        instructionIndex = 0;
        numInstructions = instructions.Count;

        textObj.GetComponent<TextMeshProUGUI>().text = instructions[instructionIndex];
    }


    public void OnNextButtonClicked()
    {
        instructionIndex += 1;
        if (instructionIndex < numInstructions)
            textObj.GetComponent<TextMeshProUGUI>().text = instructions[instructionIndex];
        else
            SceneManager.LoadScene("Bedford");
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