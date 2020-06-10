﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Timer : MonoBehaviour
{
    #region Fields
    float totalSeconds = 0;
    float elapsedSeconds = 0;
    bool running = false;
    bool started = false;

    TimerFinishedEvent timerFinishedEvent = new TimerFinishedEvent();
    #endregion


    #region Methods
    void FixedUpdate()
    {
        if (running)
        {
            elapsedSeconds += Time.deltaTime;
            if (elapsedSeconds >= totalSeconds)
            {
                running = false;
                timerFinishedEvent.Invoke();
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

    public float SecondsLeft
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
