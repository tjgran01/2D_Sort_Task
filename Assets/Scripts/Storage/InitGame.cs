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
    List<string> instructions = new List<string>();

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
            { "Bn25t", "7" },

            { "C5ysr", "0" },  //(row 1 order in table SetRightEarRate = 15; SetLeftEarRate = 5;
            { "Co6j1", "1" },  //(row 2 order in table SetRightEarRate = 10; SetLeftEarRate = 3;
            { "C27xf", "2" },
            { "Cr2yj", "3" },
            { "C8u8t", "4" },
            { "Ccmwo", "5" },
            { "Ci0jy", "6" },
            { "Cn25t", "7" },

            { "D5ysr", "0" },  //(row 1 order in table below / w 10 shapes)
            { "Do6j1", "1" },  //(row 2 order in table below / w 10 shapes)
            { "D27xf", "2" },
            { "Dr2yj", "3" },
            { "D8u8t", "4" },
            { "Dcmwo", "5" },
            { "Di0jy", "6" },
            { "Dn25t", "7" },

            { "E5ysr", "0" },  //(row 1 order in table below / w 20 / 80 Simalarity Coeffs)
            { "Eo6j1", "1" },
            { "E27xf", "2" },
            { "Er2yj", "3" },
            { "E8u8t", "4" },
            { "Ecmwo", "5" },
            { "Ei0jy", "6" },
            { "En25t", "7" },

            { "F5ysr", "0" },  //(row 1 order in table below / w 40 / 100 Simalarity Coeffs)
            { "Fo6j1", "1" },
            { "F27xf", "2" },
            { "Fr2yj", "3" },
            { "F8u8t", "4" },
            { "Fcmwo", "5" },
            { "Fi0jy", "6" },
            { "Fn25t", "7" },

            { "G5ysr", "config_all_cond_0" },  //(row 1 order in table below / w 40 / 100 Simalarity Coeffs)
            { "Go6j1", "config_all_cond_1" },
            { "G27xf", "config_all_cond_2" },
            { "Gr2yj", "config_all_cond_3" },
            { "G8u8t", "config_all_cond_4" },
            { "Gcmwo", "config_all_cond_5" },
            { "Gi0jy", "config_all_cond_6" },
            { "Gn25t", "config_all_cond_7" },

            { "H5ysr", "config_pilot_3_0" },  //(row 1 order in table below / w 40 / 100 Simalarity Coeffs)
            { "Ho6j1", "config_pilot_3_1" },
            { "H27xf", "config_pilot_3_2" },
            { "Hr2yj", "config_pilot_3_3" },
            { "H8u8t", "config_pilot_3_4" },
            { "Hcmwo", "config_pilot_3_5" },
            { "Hi0jy", "config_pilot_3_6" },
            { "Hn25t", "config_pilot_3_7" },





            { "xxxxx", "8" }, // for testing.
            { "yyyyy", "9" }
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
    public List<string[]> GetParams()
    {
        return parameters[enteredKey];
    }

    public List<string> GetInstructions { get { return instructions; } }

    public string GetEnteredKey { get { return enteredKey; } }

    public int GetNumShapes { get { return numShapes; } }
    #endregion


    #region Setters
    public void SetEnteredKey(string key)
    {
        enteredKey = key;
        if (enteredKey[0] == 'A' || enteredKey[0] == 'C' || enteredKey[0] == 'D' || enteredKey[0] == 'E' || enteredKey[0] == 'F')
        {
            numShapes = 6;
            AudioManager.Instance().SetRightEarRate = 15;
            AudioManager.Instance().SetLeftEarRate = 5;

            if(enteredKey[0] == 'C')
            {
                AudioManager.Instance().SetRightEarRate = 15;
                AudioManager.Instance().SetLeftEarRate = 5;
            }
            else if(enteredKey[0] == 'D')
            {
                AudioManager.Instance().SetRightEarRate = 10;
                AudioManager.Instance().SetLeftEarRate = 3;
            }
        }
        else if (enteredKey[0] == 'B')
        {
            numShapes = 10;
            AudioManager.Instance().SetRightEarRate = 15;
            AudioManager.Instance().SetLeftEarRate = 5;
        }
        else if (enteredKey[0] == 'G')
        {
            numShapes = 10;
            AudioManager.Instance().SetRightEarRate = 10;
            AudioManager.Instance().SetLeftEarRate = 3;
        }
        else
        {
            numShapes = 3;
            AudioManager.Instance().SetRightEarRate = 15;
            AudioManager.Instance().SetLeftEarRate = 5;
        }
    }
    #endregion
}
