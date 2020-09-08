using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Assets.LSL4Unity.Scripts;

public class ShapesPopulation : MonoBehaviour
{
    float populationRate = 4; //seconds
    float noTargetShapeLimit = 6f;

    Gameplay gameplayObj;
    bool draggingShape;

    bool taskStarted = false;

    Timer timer;
    Timer noTargetShapeTimer;

    private LSLMarkerStream marker;

    void Start()
    {
        EventManager.AddDraggingShapeListener(HandleDraggingShapeEvent);

        gameplayObj = Camera.main.GetComponent<Gameplay>();
        draggingShape = false;

        timer = gameObject.AddComponent<Timer>();
        timer.AddTimerFinishedListener(HandleTimerFinishedEvent);

        noTargetShapeTimer = gameObject.AddComponent<Timer>();
        noTargetShapeTimer.AddTimerFinishedListener(HandleNoTargetShapeTimerEvent);

        marker = GameObject.FindWithTag("lslObj").GetComponent<LSLMarkerStream>();
    }

    void Update()
    {
        if (!draggingShape && taskStarted)
        {
            if(!timer.Running)
            {
                timer.Duration = populationRate;
                timer.Run();
            }

            if (!gameplayObj.IsTargetShapePopulated() && !noTargetShapeTimer.Running)
            {
                noTargetShapeTimer.Duration = noTargetShapeLimit;
                noTargetShapeTimer.Run();
            }
        }
    }


    #region Gameplay
    void RePopulateOneShape(bool forceTargetShapePopulation)
    {
        List<GameObject> shapes = new List<GameObject>(GameObject.FindGameObjectsWithTag("Shape"));

        GameObject targetShape = shapes.SingleOrDefault(s => s.GetComponent<Shape>().IsTargetShape);
        shapes.Remove(targetShape);

        int randomNum;
        randomNum = UnityEngine.Random.Range(0, shapes.Count);

        try
        {
            if (forceTargetShapePopulation)
            {
                gameplayObj.ContinueTask(shapes[randomNum], true);
                marker.Write("Target Shape Displayed", Time.time);
            }
            else
                gameplayObj.ContinueTask(shapes[randomNum], false);
        }
        catch { }

    }
    #endregion


    #region Setters
    public bool SetTaskStarted { set { taskStarted = value; } }
    #endregion


    #region Event Handlers
    private void HandleDraggingShapeEvent(bool dragging)
    {
        draggingShape = dragging;
    }

    private void HandleTimerFinishedEvent()
    {
        if (!draggingShape)
        {
            RePopulateOneShape(false);
        }
    }

    private void HandleNoTargetShapeTimerEvent()
    {
        if (!gameplayObj.IsTargetShapePopulated() && !draggingShape)
        {
            RePopulateOneShape(true);
        }
    }
    #endregion
}
