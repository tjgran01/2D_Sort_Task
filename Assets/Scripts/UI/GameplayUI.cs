using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class GameplayUI : MonoBehaviour
{
    StartTaskEvent startTaskEvent = new StartTaskEvent();

    [SerializeField] GameObject timerObj;
    [SerializeField] GameObject targetShapeObj;
    [SerializeField] GameObject targetBinsObj;
    [SerializeField] GameObject startButtonObj;
    [SerializeField] GameObject pauseButtonObj;
    [SerializeField] GameObject resumeButtonObj;
    [SerializeField] GameObject targetSoundButtonObj;

    TextMeshProUGUI timerComponent;
    string timerText;

    TextMeshProUGUI targetShapeComponent;
    string targetShape;

    TextMeshProUGUI targetBinsComponent;
    string targetBins;

    AudioClipName targetSound;

    bool startButtonWasActive;

    void Awake()
    {
        EventManager.AddStartTaskInvoker(this);
        EventManager.AddTargetSoundListener(HandleTargetSoundEvent);
    }

    void Start()
    {
        timerComponent = timerObj.GetComponent<TextMeshProUGUI>();
        targetShapeComponent = targetShapeObj.GetComponent<TextMeshProUGUI>();
        targetBinsComponent = targetBinsObj.GetComponent<TextMeshProUGUI>();

        resumeButtonObj.SetActive(false);
    }

    void Update()
    {
        timerComponent.text = timerText;
        targetShapeComponent.text = targetShape;
        targetBinsComponent.text = targetBins;
    }

    public string setTimerText { set { timerText = value; } }
    public string setTargetShapeText { set { targetShape = value; } }
    public string setTargetBinsText { set { targetBins = value; } }
    public bool setStartButton { set { startButtonObj.SetActive(value); } }


    public void StartButton()
    {
        startButtonObj.SetActive(false);
        targetShape = "";
        targetBins = "";
        targetSoundButtonObj.SetActive(false);

        startTaskEvent.Invoke();
    }

    public void PauseButton()
    {
        Time.timeScale = 0;
        resumeButtonObj.SetActive(true);
        pauseButtonObj.SetActive(false);

        if(startButtonObj.activeSelf == true)
        {
            startButtonWasActive = true;
            startButtonObj.SetActive(false);
        }
    }

    public void ResumeButton()
    {
        Time.timeScale = 1;
        resumeButtonObj.SetActive(false);
        pauseButtonObj.SetActive(true);

        if(startButtonWasActive)
        {
            startButtonWasActive = false;
            startButtonObj.SetActive(true);
        }
    }

    public void PlayTargetSoundButton()
    {
        AudioManager.Play(targetSound);
    }

    #region Event Handlers
    private void HandleTargetSoundEvent(ushort sound)
    {
        targetSound = (AudioClipName)sound;

        targetSoundButtonObj.SetActive(true);
    }
    #endregion


    #region Add Listeners
    public void AddStartTaskListener(UnityAction listener)
    {
        startTaskEvent.AddListener(listener);
    }
    #endregion
}
