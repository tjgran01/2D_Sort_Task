using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class UserInfo : MonoBehaviour
{
    [SerializeField] GameObject textField;

    UserIdEvent userIdEvent = new UserIdEvent();

    void Start()
    {
        EventManager.AddUserIdInvoker(this);
    }

    public void OnSubmit()
    {
        userIdEvent.Invoke(textField.GetComponent<TMP_InputField>().text);
        SceneManager.LoadScene("Instructions");
    }

    public void AddUserIdListener(UnityAction<string> listener)
    {
        userIdEvent.AddListener(listener);
    }
}
