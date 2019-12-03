using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EventManager : MonoBehaviour
{
    #region Fields
    static List<Shape> binChosenInvokers = new List<Shape>();
    static List<UnityAction<GameObject, int>> binChosenListeners =
        new List<UnityAction<GameObject, int>>();

    static List<Gameplay> trialStartedInvokers = new List<Gameplay>();
    static List<UnityAction> trialStartedListeners =
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


    #region Trial Started Support
    public static void AddTrialStartedInvoker(Gameplay invoker)
    {
        trialStartedInvokers.Add(invoker);
        foreach(UnityAction listener in trialStartedListeners)
        {
            invoker.AddTrialStartedListener(listener);
        }
    }

    public static void AddTrialStartedListener(UnityAction listener)
    {
        trialStartedListeners.Add(listener);
        foreach(Gameplay invoker in trialStartedInvokers)
        {
            invoker.AddTrialStartedListener(listener);
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
}

