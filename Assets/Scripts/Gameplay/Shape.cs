﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class Shape : MonoBehaviour, IDragHandler, IDropHandler
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

    Vector3 defaultPosition;
    RectTransform rt;

    void Start()
    {
        EventManager.AddBinChosenInvoker(this);
        EventManager.AddDraggingShapeInvoker(this);

        rt = gameObject.GetComponent<RectTransform>();
        defaultPosition = rt.position;

        bins = new List<GameObject>(GameObject.FindGameObjectsWithTag("Bin"));

    }


    public void OnDrag(PointerEventData eventData)
    {
        rt.position = Input.mousePosition;
        draggingShapeEvent.Invoke(true);
    }

    public void OnDrop(PointerEventData eventData)
    {
        dragging = false;
        draggingShapeEvent.Invoke(false);

        bool binChosen = false;

        foreach (GameObject bin in bins)
        {
            if (!bin.GetComponent<Bin>().IsGreyedOut && rt.Overlaps(bin.GetComponent<RectTransform>()))
            {
                binChosenEvent.Invoke(gameObject, int.Parse(bin.name));
                binChosen = true;
                break;
            }
        }

        if (!binChosen)
        {
            rt.position = defaultPosition;
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


//https://stackoverflow.com/questions/42043017/check-if-ui-elements-recttransform-are-overlapping
public static class RectTransformExtensions
{

    public static bool Overlaps(this RectTransform a, RectTransform b)
    {
        return a.WorldRect().Overlaps(b.WorldRect());
    }
    public static bool Overlaps(this RectTransform a, RectTransform b, bool allowInverse)
    {
        return a.WorldRect().Overlaps(b.WorldRect(), allowInverse);
    }

    public static Rect WorldRect(this RectTransform rectTransform)
    {
        Vector2 sizeDelta = rectTransform.sizeDelta;
        float rectTransformWidth = sizeDelta.x * rectTransform.lossyScale.x;
        float rectTransformHeight = sizeDelta.y * rectTransform.lossyScale.y;

        Vector3 position = rectTransform.position;
        return new Rect(position.x - rectTransformWidth / 2f, position.y - rectTransformHeight / 2f, rectTransformWidth, rectTransformHeight);
    }
}