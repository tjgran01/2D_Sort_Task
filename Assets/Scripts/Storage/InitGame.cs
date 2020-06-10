using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using UnityEngine.Networking;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine.SceneManagement;

public class InitGame : MonoBehaviour
{
    private static InitGame instance = null;

    public static InitGame Instance()
    {
        if (instance == null)
        {
            throw new Exception("InitGame is null.");
        }
        return instance;
    }


    List<string[]> parameters;
    List<string> instructions;

    bool paramsReady = false;
    bool instructionsReady = false;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
    }

    private void Start()
    {
        ReadConfig();
        ReadInstructions();
    }

    private void Update()
    {
        if (paramsReady && instructionsReady)
        {
            SceneManager.LoadScene("UserInfo");
            paramsReady = false;
            instructionsReady = false;
        }
    }


    void ReadConfig()
    {
        paramsReady = false;
        parameters = new List<string[]>();

        Dictionary<string, string> fields = new Dictionary<string, string>() { { "path", "Data/config.csv" } };
        StartCoroutine(PHPCommunicator.Instance().PostRequest("ReadFile.php", fields, returnedText =>
        {
            List<string> configText = returnedText.Split('\n').ToList();
            for (int i = 1; i < configText.Count; i++) //ignoring header
            {
                parameters.Add(configText[i].Split(','));
            }

            paramsReady = true;
        }));
    }

    void ReadInstructions()
    {
        instructionsReady = false;
        instructions = new List<string>();

        Dictionary<string, string> fields = new Dictionary<string, string>() { { "path", "Data/Instructions" } };
        StartCoroutine(PHPCommunicator.Instance().PostRequest("ReturnFileNames.php", fields, returnedText =>
        {
            List<string> fileNames = returnedText.Split('\n').ToList().CustomSort().ToList();

            foreach (string f in fileNames)
            {
                fields = new Dictionary<string, string>() { { "path", $"Data/Instructions/{f}" } };
                StartCoroutine(PHPCommunicator.Instance().PostRequest("ReadFile.php", fields, instruction =>
                {
                    string modifiedIns = Regex.Replace(instruction, @"(?<=\<).+?(?=\>)",
                    delegate (Match match)
                    {
                        string v = match.ToString();
                        return "sprite name=" + v;
                    });

                    instructions.Add(modifiedIns);
                }
                ));
            }

            instructionsReady = true;
        }));
    }

    public List<string[]> GetParams { get { return parameters; } }
    public List<string> GetInstructions { get { return instructions; } }

}
