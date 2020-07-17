using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Timer : MonoBehaviour
{
    #region Fields
    double totalSeconds = 0;
    double elapsedSeconds = 0;
    bool running = false;
    bool started = false;

    DateTime epochStart = new DateTime(1970, 1, 1, 8, 0, 0, DateTimeKind.Utc);
    double startTimestamp;

    double timerateInvoke = 0.5;
    int numInvoke = 0;

    TimerFinishedEvent timerFinishedEvent = new TimerFinishedEvent();
    SecondsLeftEvent secondsLeftEvent = new SecondsLeftEvent();
    #endregion


    #region Methods
    void FixedUpdate()
    {
        if (running)
        {
            elapsedSeconds = (DateTime.UtcNow - epochStart).TotalSeconds - startTimestamp;
            if (elapsedSeconds >= totalSeconds)
            {
                running = false;
                timerFinishedEvent.Invoke();
            }

            if(elapsedSeconds / timerateInvoke >= numInvoke)
            {
                numInvoke++;
                secondsLeftEvent.Invoke(SecondsLeft);
            }
        }
    }

    public void Run()
    {
        if (totalSeconds > 0)
        {
            started = true;
            running = true;
            elapsedSeconds = 0;
            timerateInvoke = 0.5;
            numInvoke = 0;
            startTimestamp = (DateTime.UtcNow - epochStart).TotalSeconds;
        }
    }

    public void Stop()
    {
        started = false;
        running = false;
    }

    public void AddTime(float seconds)
    {
        totalSeconds += seconds;
    }

    public void AddTimerFinishedListener(UnityAction listener)
    {
        timerFinishedEvent.AddListener(listener);
    }

    public void AddSecondsLeftListener(UnityAction<double> listener)
    {
        secondsLeftEvent.AddListener(listener);
    }
    #endregion


    #region Setters
    public float Duration
    {
        set
        {
            if (!running)
            {
                totalSeconds = value;
            }
        }
    }
    #endregion


    #region Getters
    public bool Finished { get { return started && !running; } }

    public bool Running { get { return running; } }

    public double SecondsLeft
    {
        get
        {
            if (running)
                return totalSeconds - elapsedSeconds;
            else
                return 0;
        }
    }
    #endregion
}
