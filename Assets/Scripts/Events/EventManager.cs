﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EventManager : MonoBehaviour
{
    #region Fields
    static List<Shape> binChosenInvokers = new List<Shape>();
    static List<UnityAction<GameObject, int>> binChosenListeners =
        new List<UnityAction<GameObject, int>>();

    static List<Gameplay> taskStartedInvokers = new List<Gameplay>();
    static List<UnityAction> taskStartedListeners =
        new List<UnityAction>();

    static List<Gameplay> targetShapeInvokers = new List<Gameplay>();
    static List<UnityAction<string>> targetShapeListeners =
        new List<UnityAction<string>>();

    static List<Gameplay> targetBinsInvokers = new List<Gameplay>();
    static List<UnityAction<List<int>>> targetBinsListeners =
        new List<UnityAction<List<int>>>();

    static List<UserInfo> userIdInvokers = new List<UserInfo>();
    static List<UnityAction<string>> userIdListeners =
        new List<UnityAction<string>>();

    static List<GameplayUI> startTaskInvokers = new List<GameplayUI>();
    static List<UnityAction> startTaskListeners =
        new List<UnityAction>();

    static List<Shape> draggingShapeInvokers = new List<Shape>();
    static List<UnityAction<bool>> draggingShapeListeners =
        new List<UnityAction<bool>>();

    static List<Gameplay> taskEndedInvokers = new List<Gameplay>();
    static List<UnityAction> taskEndedListeners =
        new List<UnityAction>();

    static List<Gameplay> initializeTaskInvokers = new List<Gameplay>();
    static List<UnityAction<int, float>> initializeTaskListeners =
        new List<UnityAction<int, float>>();

    static List<SoundsManager> binsSwitchedInvokers = new List<SoundsManager>();
    static List<UnityAction> binsSwitchedListeners =
        new List<UnityAction>();

    static List<SoundsManager> targetSoundInvokers = new List<SoundsManager>();
    static List<UnityAction<ushort>> targetSoundListeners =
        new List<UnityAction<ushort>>();
    #endregion


    #region Bin Chosen Support
    public static void AddBinChosenInvoker(Shape invoker)
    {
        binChosenInvokers.Add(invoker);
        foreach (UnityAction<GameObject, int> listener in binChosenListeners)
        {
            invoker.AddBinChosenListener(listener);
        }
    }

    public static void AddBinChosenListener(UnityAction<GameObject, int> listener)
    {
        binChosenListeners.Add(listener);
        foreach(Shape invoker in binChosenInvokers)
        {
            invoker.AddBinChosenListener(listener);
        }
    }
    #endregion


    #region Task Started Support
    public static void AddTaskStartedInvoker(Gameplay invoker)
    {
        taskStartedInvokers.Add(invoker);
        foreach(UnityAction listener in taskStartedListeners)
        {
            invoker.AddTaskStartedListener(listener);
        }
    }

    public static void AddTaskStartedListener(UnityAction listener)
    {
        taskStartedListeners.Add(listener);
        foreach(Gameplay invoker in taskStartedInvokers)
        {
            invoker.AddTaskStartedListener(listener);
        }
    }
    #endregion


    #region Target Shape Support
    public static void AddTargetShapeInvoker(Gameplay invoker)
    {
        targetShapeInvokers.Add(invoker);
        foreach(UnityAction<string> listener in targetShapeListeners)
        {
            invoker.AddTargetShapeListener(listener);
        }
    }

    public static void AddTargetShapeListener(UnityAction<string> listener)
    {
        targetShapeListeners.Add(listener);
        foreach(Gameplay invoker in targetShapeInvokers)
        {
            invoker.AddTargetShapeListener(listener);
        }
    }
    #endregion


    #region Target Bins Supprot
    public static void AddTargetBinsInvoker(Gameplay invoker)
    {
        targetBinsInvokers.Add(invoker);
        foreach(UnityAction<List<int>> listener in targetBinsListeners)
        {
            invoker.AddTargetBinsListener(listener);
        }
    }

    public static void AddTargetBinsListener(UnityAction<List<int>> listener)
    {
        targetBinsListeners.Add(listener);
        foreach(Gameplay invoker in targetBinsInvokers)
        {
            invoker.AddTargetBinsListener(listener);
        }
    }
    #endregion


    #region User Id Support
    public static void AddUserIdInvoker(UserInfo invoker)
    {
        userIdInvokers.Add(invoker);
        foreach(UnityAction<string> listener in userIdListeners)
        {
            invoker.AddUserIdListener(listener);
        }
    }

    public static void AddUserIdListener(UnityAction<string> listener)
    {
        userIdListeners.Add(listener);
        foreach(UserInfo invoker in userIdInvokers)
        {
            invoker.AddUserIdListener(listener);
        }
    }
    #endregion


    #region Start Task Support
    public static void AddStartTaskInvoker(GameplayUI invoker)
    {
        startTaskInvokers.Add(invoker);
        foreach(UnityAction listener in startTaskListeners)
        {
            invoker.AddStartTaskListener(listener);
        }
    }

    public static void AddStartTaskListener(UnityAction listener)
    {
        startTaskListeners.Add(listener);
        foreach(GameplayUI invoker in startTaskInvokers)
        {
            invoker.AddStartTaskListener(listener);
        }
    }
    #endregion


    #region Dragging Shape Support
    public static void AddDraggingShapeInvoker(Shape invoker)
    {
        draggingShapeInvokers.Add(invoker);
        foreach(UnityAction<bool> listener in draggingShapeListeners)
        {
            invoker.AddDraggingShapeListener(listener);
        }
    }

    public static void AddDraggingShapeListener(UnityAction<bool> listener)
    {
        draggingShapeListeners.Add(listener);
        foreach(Shape invoker in draggingShapeInvokers)
        {
            invoker.AddDraggingShapeListener(listener);
        }
    }
    #endregion


    #region Task Ended Support
    public static void AddTaskEndedInvoker(Gameplay invoker)
    {
        taskEndedInvokers.Add(invoker);
        foreach(UnityAction listener in taskEndedListeners)
        {
            invoker.AddTaskEndedListener(listener);
        }
    }

    public static void AddTaskEndedListener(UnityAction listener)
    {
        taskEndedListeners.Add(listener);
        foreach(Gameplay invoker in taskEndedInvokers)
        {
            invoker.AddTaskEndedListener(listener);
        }
    }
    #endregion


    #region Initialize Task Support
    public static void AddInitializeTaskInvoker(Gameplay invoker)
    {
        initializeTaskInvokers.Add(invoker);
        foreach(UnityAction<int, float> listener in initializeTaskListeners)
        {
            invoker.AddInitializeTaskListener(listener);
        }
    }

    public static void AddInitializeTaskListener(UnityAction<int, float> listener)
    {
        initializeTaskListeners.Add(listener);
        foreach(Gameplay invoker in initializeTaskInvokers)
        {
            invoker.AddInitializeTaskListener(listener);
        }
    }
    #endregion


    #region Bins Switched Support
    public static void AddBinsSwitchedInvoker(SoundsManager invoker)
    {
        binsSwitchedInvokers.Add(invoker);
        foreach(UnityAction listener in binsSwitchedListeners)
        {
            invoker.AddBinsSwitchedListener(listener);
        }
    }

    public static void AddBinsSwitchedListener(UnityAction listener)
    {
        binsSwitchedListeners.Add(listener);
        foreach(SoundsManager invoker in binsSwitchedInvokers)
        {
            invoker.AddBinsSwitchedListener(listener);
        }
    }
    #endregion


    #region Target Sound Support
    public static void AddTargetSoundInvoker(SoundsManager invoker)
    {
        targetSoundInvokers.Add(invoker);
        foreach(UnityAction<ushort> listener in targetSoundListeners)
        {
            invoker.AddTargetSoundListener(listener);
        }
    }

    public static void AddTargetSoundListener(UnityAction<ushort> listener)
    {
        targetSoundListeners.Add(listener);
        foreach(SoundsManager invoker in targetSoundInvokers)
        {
            invoker.AddTargetSoundListener(listener);
        }
    }
    #endregion
}

