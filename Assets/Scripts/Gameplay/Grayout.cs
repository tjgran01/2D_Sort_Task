using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Grayout : MonoBehaviour
{
    [SerializeField] float grayoutTimeRate;
    [SerializeField] bool timeConsidered;
    [SerializeField] bool mixGreyoutBehavior;

    GameObject[] bins;
    int binsCount;
    int randomBinNum;
    string binToGrayout;

    bool taskStarted;
    bool grayout;
    float currentTimeRate;

    string lastBinChosen = null;



    void Start()
    {
        EventManager.AddStartTaskListener(HandleStartTaskEvent);
        EventManager.AddTaskEndedListener(HandleTaskEndedEvent);
        EventManager.AddBinChosenListener(HandleBinChosenEvent);

        currentTimeRate = grayoutTimeRate;
        grayout = false;
    }

    void Update()
    {
        if(binsCount >= 6)
        {
            if (timeConsidered)
            {
                randomBinNum = UnityEngine.Random.Range(1, binsCount + 1);
                binToGrayout1 = randomBinNum.ToString();
                binToGrayout2 = randomBinNum.ToString();
                if(binsCount == 8)
                if (taskStarted && grayout && lastBinChosen != null)
                {
                    currentTimeRate -= Time.deltaTime;
                    if (currentTimeRate <= 0)
                    {
<<<<<<< HEAD
                        GreyOutTimelimit();
                        currentTimeRate = grayoutTimeRate;
=======
                        randomBinNum = UnityEngine.Random.Range(1, binsCount + 1);
                        binToGrayout2 = randomBinNum.ToString();
>>>>>>> parent of 834df9c... added comments
                    }
                }
            }
            else
            {
                GreyOutNoTimelimit();
            }
        }
    }


    void GreyOutNoTimelimit()
    {
        if (taskStarted && grayout && lastBinChosen != null)
        {
            binToGrayout = lastBinChosen;
            if (binsCount == 8)
            {
                while (binToGrayout == lastBinChosen)
                {
                    randomBinNum = UnityEngine.Random.Range(1, binsCount + 1);
                    binToGrayout = randomBinNum.ToString();
                }
            }

            foreach (GameObject bin in bins)
            {
                if (bin.name == binToGrayout || bin.name == lastBinChosen)
                {
                    bin.GetComponent<Image>().color = Color.black;
                    bin.GetComponent<Bin>().SetGreyedOut = true;
                }
                else
                {
                    bin.GetComponent<Image>().color = Color.white;
                    bin.GetComponent<Bin>().SetGreyedOut = false;
                }
            }

            grayout = false;
        }
    }


    void GreyOutTimelimit()
    {
        binToGrayout = lastBinChosen;
        if (binsCount == 8)
        {
            while (binToGrayout == lastBinChosen)
            {
                randomBinNum = UnityEngine.Random.Range(1, binsCount + 1);
                binToGrayout = randomBinNum.ToString();
            }
        }

        foreach (GameObject bin in bins)
        {
            if (bin.name == binToGrayout || bin.name == lastBinChosen)
            {
                bin.GetComponent<Image>().color = Color.black;
                bin.GetComponent<Bin>().SetGreyedOut = true;
            }
            else
            {
                bin.GetComponent<Image>().color = Color.white;
                bin.GetComponent<Bin>().SetGreyedOut = false;
            }
        }
    }

    #region Event Handlers
    private void HandleStartTaskEvent()
    {
        currentTimeRate = grayoutTimeRate;

        bins = GameObject.FindGameObjectsWithTag("Bin");
        binsCount = bins.Length;

        if (binsCount == 6 || binsCount == 8)
            grayout = true;
        taskStarted = true;
    }

    private void HandleTaskEndedEvent()
    {
        taskStarted = false;
        grayout = false;
    }

    private void HandleBinChosenEvent(GameObject shape, int bin)
    {
        lastBinChosen = bin.ToString();
        grayout = true;

        if(mixGreyoutBehavior && timeConsidered)
        {
            GreyOutTimelimit();
            currentTimeRate = grayoutTimeRate;
        }
    }
    #endregion

}
