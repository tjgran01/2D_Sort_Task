using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grayout : MonoBehaviour
{
    [SerializeField] float grayoutTimeRate;

    GameObject[] bins;
    int binsCount;
    int randomBinNum;
    string binToGrayout1;
    string binToGrayout2;

    bool taskStarted;
    bool grayout;
    float currentTimeRate;

    void Start()
    {
        EventManager.AddStartTaskListener(HandleStartTaskEvent);
        EventManager.AddTaskEndedListener(HandleTaskEndedEvent);

        currentTimeRate = grayoutTimeRate;
        grayout = false;
    }

    void Update()
    {
        if(taskStarted && grayout)
        {
            currentTimeRate -= Time.deltaTime;
            if(currentTimeRate <= 0)
            {
                randomBinNum = UnityEngine.Random.Range(1, binsCount + 1);
                binToGrayout1 = randomBinNum.ToString(); // This will be the last bin that an object was sorted into.
                binToGrayout2 = randomBinNum.ToString();

                if(binsCount == 8)
                {
                    while(binToGrayout2 == binToGrayout1)
                    {
                        randomBinNum = UnityEngine.Random.Range(1, binsCount + 1); // Random among target bins, != binToGreyOut1
                        binToGrayout2 = randomBinNum.ToString();
                    }
                }

                foreach (GameObject bin in bins)
                {
                    if(bin.name == binToGrayout1 || bin.name == binToGrayout2)
                    {
                        bin.GetComponent<PolygonCollider2D>().enabled = false;
                        bin.GetComponent<SpriteRenderer>().color = Color.black;
                    }
                    else
                    {
                        bin.GetComponent<PolygonCollider2D>().enabled = true;
                        bin.GetComponent<SpriteRenderer>().color = Color.white;
                    }
                }

                currentTimeRate = grayoutTimeRate;
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
    #endregion

}
