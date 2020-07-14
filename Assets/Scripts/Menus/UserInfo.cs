using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class UserInfo : MonoBehaviour
{
    [SerializeField] GameObject userIdField;
    [SerializeField] GameObject keyField;
    [SerializeField] GameObject error;


    UserIdEvent userIdEvent = new UserIdEvent();

    TMP_InputField userIdText;
    TMP_InputField keyText;
    TMP_Text errorText;

    void Start()
    {
        EventManager.AddUserIdInvoker(this);

        userIdText = userIdField.GetComponent<TMP_InputField>();
        keyText = keyField.GetComponent<TMP_InputField>();
        errorText = error.GetComponent<TMP_Text>();
    }

    public void OnSubmit()
    {
        if(userIdText.text == "" && keyText.text == "")
        {
            errorText.text = "ERROR: ID and key are not entered.";
        }
        else if (userIdText.text == "")
        {
            errorText.text = "ERROR: ID is not entered.";
        }
        else if(keyText.text == "")
        {
            errorText.text = "ERROR: key is not entered.";
        }
        else if(!InitGame.Instance().IsValidKey(keyText.text))
        {
            errorText.text = "ERROR: key is not valid.";
        }
        else
        {
            userIdEvent.Invoke(userIdText.text);
            InitGame.Instance().SetEnteredKey(keyText.text);
            SceneManager.LoadScene("HeadphoneCheck");
        }
    }

    public void AddUserIdListener(UnityAction<string> listener)
    {
        userIdEvent.AddListener(listener);
    }
}
