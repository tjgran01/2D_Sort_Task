using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Shape : MonoBehaviour
{
    private bool dragging = false;
    private float distance;

    private List<GameObject> bins;

    private Collider2D shapeCollider;
    private List<Collider2D> binsColliders;

    public float xPosition;
    private bool isTarget;

    BinChosenEvent binChosenEvent = new BinChosenEvent();
    DraggingShapeEvent draggingShapeEvent = new DraggingShapeEvent();

    void Start()
    {
        EventManager.AddBinChosenInvoker(this);
        EventManager.AddDraggingShapeInvoker(this);

        populateVariables();

    }

    void FixedUpdate()
    {
        if (dragging)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            Vector3 rayPoint = ray.GetPoint(distance);
            transform.position = rayPoint;
            transform.position = new Vector3(transform.position.x, transform.position.y, 0);
        }
    }

    void populateVariables()
    {
        shapeCollider = gameObject.GetComponent<Collider2D>();

        bins = new List<GameObject>(GameObject.FindGameObjectsWithTag("Bin"));
        binsColliders = new List<Collider2D>();
        foreach (GameObject bin in bins)
            binsColliders.Add(bin.GetComponent<Collider2D>());
    }

    void OnMouseDown()
    {
        distance = Vector3.Distance(transform.position, Camera.main.transform.position);
        dragging = true;
        draggingShapeEvent.Invoke(true);
    }

    void OnMouseUp()
    {
        dragging = false;
        draggingShapeEvent.Invoke(false);
        populateVariables();

        foreach (Collider2D coll in binsColliders)
        {
            if (shapeCollider.IsTouching(coll))
            {
                Debug.Log(isTarget);
                binChosenEvent.Invoke(gameObject, int.Parse(coll.name));
            }
        }
    }


    #region Listeners
    public void AddBinChosenListener(UnityAction<GameObject, int> listener)
    {
        binChosenEvent.AddListener(listener);
    }

    public void AddDraggingShapeListener(UnityAction<bool> listener)
    {
        draggingShapeEvent.AddListener(listener);
    }
    #endregion


    #region Getters
    public bool IsTargetShape { get { return isTarget; } }
    #endregion


    #region Setters
    public bool SetIsTarget { set { isTarget = value; } }
    #endregion
}
