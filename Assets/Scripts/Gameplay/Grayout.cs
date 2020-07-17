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

    string lastBinChosen = null;

    DateTime epochStart;
    double elapsedTime;

    Timer greyOutTimer;

    void Start()
    {
        EventManager.AddStartTaskListener(HandleStartTaskEvent);
        EventManager.AddTaskEndedListener(HandleTaskEndedEvent);
        EventManager.AddBinChosenListener(HandleBinChosenEvent);

        grayout = false;

        epochStart = new DateTime(1970, 1, 1, 8, 0, 0, DateTimeKind.Utc);
        elapsedTime = 0;

        greyOutTimer = gameObject.AddComponent<Timer>();
        greyOutTimer.AddTimerFinishedListener(HandleGreyOutTimerFinished);
    }

    void Update()
    {
        if(binsCount >= 6)
        {
            if (timeConsidered)
            {
                if (taskStarted && grayout && lastBinChosen != null && !greyOutTimer.Running)
                {
                    greyOutTimer.Duration = grayoutTimeRate;
                    greyOutTimer.Run();
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

    private void HandleBinChosenEvent(GameObject shape, int bin, double displayTimestamp, double binChosenTimestamp)
    {
        lastBinChosen = bin.ToString();
        grayout = true;

        if(mixGreyoutBehavior && timeConsidered)
        {
            GreyOutTimelimit();
        }
    }

    private void HandleGreyOutTimerFinished()
    {
        GreyOutTimelimit();
    }
    #endregion

}
