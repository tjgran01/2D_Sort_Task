using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;
using System;

public class GameplayUI : MonoBehaviour
{
    StartTaskEvent startTaskEvent = new StartTaskEvent();

    [SerializeField] GameObject timerObj;
    [SerializeField] GameObject targetShapeObj;
    [SerializeField] GameObject targetBinsObj;
    [SerializeField] GameObject startButtonObj;
    [SerializeField] GameObject pauseButtonObj;
    [SerializeField] GameObject resumeButtonObj;
    [SerializeField] GameObject reminderButton;
    [SerializeField] GameObject reminderObj;
    [SerializeField] float reminderDisplayTime;


    TextMeshProUGUI timerComponent;
    string timerText;

    TextMeshProUGUI targetShapeComponent;
    string targetShape;

    TextMeshProUGUI targetBinsComponent;
    string targetBins;

    string reminderText;
    Timer reminderTimer;

    bool startButtonWasActive;

    void Awake()
    {
        EventManager.AddStartTaskInvoker(this);
    }

    void Start()
    {
        timerComponent = timerObj.GetComponent<TextMeshProUGUI>();
        targetShapeComponent = targetShapeObj.GetComponent<TextMeshProUGUI>();
        targetBinsComponent = targetBinsObj.GetComponent<TextMeshProUGUI>();

        resumeButtonObj.SetActive(false);
        reminderObj.SetActive(false);
        reminderButton.SetActive(false);

        reminderTimer = gameObject.AddComponent<Timer>();
        reminderTimer.Duration = reminderDisplayTime;
        reminderTimer.AddTimerFinishedListener(HandleReminderTimerFinishedEvent);
    }

    void Update()
    {
        timerComponent.text = timerText;
        targetShapeComponent.text = targetShape;
        targetBinsComponent.text = targetBins;
    }


    #region Buttons
    public void StartButton()
    {
        startButtonObj.SetActive(false);
        targetShapeObj.SetActive(false);
        targetBinsObj.SetActive(false);
        reminderButton.SetActive(true);

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

    public void ReminderButton()
    {
        reminderButton.SetActive(false);

        reminderObj.SetActive(true);
        reminderObj.GetComponent<TextMeshProUGUI>().text = reminderText;

        reminderTimer.Run();

    }
    #endregion


    #region Event Handlers
    private void HandleReminderTimerFinishedEvent()
    {
        reminderObj.SetActive(false);
        reminderButton.SetActive(true);
    }
    #endregion


    #region Setters
    public string SetTimerText { set { timerText = value; } }
    public void SetTargetShapeText(string value)
    {
        targetShapeObj.SetActive(true);
        targetShape = value;
        reminderText = "[REMINDER] " + targetShape;
    }
    public void SetTargetBinsText(string value)
    {
        targetBinsObj.SetActive(true);
        targetBins = value;
    }
    public bool SetStartButton { set { startButtonObj.SetActive(value); } }
    #endregion


    #region Add Listeners
    public void AddStartTaskListener(UnityAction listener)
    {
        startTaskEvent.AddListener(listener);
    }
    #endregion
}
