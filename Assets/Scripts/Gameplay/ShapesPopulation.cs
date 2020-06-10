using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ShapesPopulation : MonoBehaviour
{
    [SerializeField] float populationRate; //seconds
    float noTargetShapeLimit = 6f;

    Gameplay gameplayObj;
    bool draggingShape;
    float timer;
    float noTargetShapeTimer;

    bool taskStarted = false;


    void Start()
    {
        EventManager.AddDraggingShapeListener(HandleDraggingShapeEvent);

        gameplayObj = Camera.main.GetComponent<Gameplay>();
        draggingShape = false;
        timer = populationRate;
        noTargetShapeTimer = noTargetShapeLimit;
    }


    void Update()
    {
        if(!draggingShape && taskStarted)
        {
            timer -= Time.deltaTime;

            if(gameplayObj.IsTargetShapePopulated())
                noTargetShapeTimer = noTargetShapeLimit;
            else
                noTargetShapeTimer -= Time.deltaTime;


            if(noTargetShapeTimer <= 0)
            {
                RePopulateOneShape(true);
                timer = populationRate;
            }
            else if (timer <= 0)
            {
                RePopulateOneShape(false);
                timer = populationRate;
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

        if (forceTargetShapePopulation)
            gameplayObj.ContinueTask(shapes[randomNum], true);
        else
            gameplayObj.ContinueTask(shapes[randomNum], false);

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
    #endregion
}
