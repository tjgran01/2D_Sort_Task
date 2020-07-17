using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PHPCommunicator : MonoBehaviour
{
    private static PHPCommunicator instance = null;

    public static PHPCommunicator Instance()
    {
        if (instance == null)
        {
            throw new Exception("PHPCommunicator is null.");
        }
        return instance;
    }

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
    }

    public IEnumerator PostRequest(string phpFile, Dictionary<string, string> fields, Action<string> callback)
    {
        string ip = "aws.shinelab-sorttask.com";
        //ip = "ec2-3-18-44-52.us-east-2.compute.amazonaws.com";

        string returnedText = "";     
        WWWForm form = new WWWForm();
        foreach(KeyValuePair<string, string> field in fields)
        {
            form.AddField(field.Key, field.Value);
        }

        using (UnityWebRequest www = UnityWebRequest.Post($"https://{ip}/{phpFile}", form))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log("ERROR CONNECTING TO PHP SERVER!");
                Debug.Log(www.error);
            }
            else
            {
                if (www.error == null)
                {
                    returnedText = www.downloadHandler.text;
                }
                else
                {
                    Debug.Log("www.error: " + www.error);
                }
            }
        }

        callback(returnedText);
        yield return null;
    }
}
