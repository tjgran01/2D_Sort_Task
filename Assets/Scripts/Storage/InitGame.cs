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


    Dictionary<string, List<string[]>> parameters;
    List<string> instructions;

    bool paramsReady = false;
    bool instructionsReady = false;
    bool loadedScene = false;

    string enteredKey = "";
    int numShapes;
    Dictionary<string, string> keyMapper;

    int numConfigsLoaded;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);

            Application.runInBackground = true;
        }
    }

    private void Start()
    {
        keyMapper = new Dictionary<string, string>()
        {
            { "A5ysr", "0" },  //(row 1 order in table below /w 6 shapes)
            { "Ao6j1", "1" },  //(row 2 order in table below / w 6 shapes)
            { "A27xf", "2" },
            { "Ar2yj", "3" },
            { "A8u8t", "4" },
            { "Acmwo", "5" },
            { "Ai0jy", "6" },
            { "An25t", "7" },

            { "B5ysr", "0" },  //(row 1 order in table below / w 10 shapes)
            { "Bo6j1", "1" },  //(row 2 order in table below / w 10 shapes)
            { "B27xf", "2" },
            { "Br2yj", "3" },
            { "B8u8t", "4" },
            { "Bcmwo", "5" },
            { "Bi0jy", "6" },
            { "Bn25t", "7" }
        };

        numConfigsLoaded = 0;

        ReadConfig();
        ReadInstructions();

    }

    private void Update()
    {
        if (!paramsReady && !loadedScene && numConfigsLoaded >= keyMapper.Count)
        {
            paramsReady = true;
        }

        if (paramsReady && instructionsReady)
        {
            SceneManager.LoadScene("UserInfo");
            paramsReady = false;
            instructionsReady = false;
            loadedScene = true;
        }
    }


    #region Helper Functions
    void ReadConfig()
    {
        paramsReady = false;
        parameters = new Dictionary<string, List<string[]>>();

        
        foreach(KeyValuePair<string, string> pair in keyMapper)
        {
            Dictionary<string, string> fields = new Dictionary<string, string>() { { "path", $"Data/config{pair.Value}.csv" } };
            StartCoroutine(PHPCommunicator.Instance().PostRequest("ReadFile.php", fields, returnedText =>
            {
                List<string> configText = returnedText.TrimEnd('\n').Split('\n').ToList();
                List<string[]> temp = new List<string[]>();
                for (int i = 1; i < configText.Count; i++) //ignoring header
                {
                    temp.Add(configText[i].Split(','));
                }

                if(temp != new List<string[]>())
                {
                    parameters.Add(pair.Key, temp);
                    numConfigsLoaded++;
                }
            }));
        }
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

    public bool IsValidKey(string key)
    {
        return keyMapper.ContainsKey(key);
    }
    #endregion


    #region Getters
    public List<string[]> GetParams(string key)
    {
        return parameters[key];
    }

    public List<string> GetInstructions { get { return instructions; } }

    public string GetEnteredKey { get { return enteredKey; } }

    public int GetNumShapes { get { return numShapes; } }
    #endregion


    #region Setters
    public void SetEnteredKey(string key)
    {
        enteredKey = key;
        if (enteredKey[0] == 'A')
            numShapes = 6;
        else if (enteredKey[0] == 'B')
            numShapes = 10;
        else
            numShapes = 3;
    }
    #endregion
}
