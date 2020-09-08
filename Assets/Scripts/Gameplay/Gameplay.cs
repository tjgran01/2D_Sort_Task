using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using Assets.LSL4Unity.Scripts;

public class Gameplay : MonoBehaviour
{
    [SerializeField] List<GameObject> shapes;
    [SerializeField] GameObject fourBinsObj;
    [SerializeField] GameObject sixBinsObj;
    [SerializeField] GameObject eightBinsObj;
    [SerializeField] GameObject mainCanvas;
    [SerializeField] GameObject bedfordCanvas;
    [SerializeField] GameObject restCanvas;


    // Marking
    private LSLMarkerStream marker;


    TargetShapeEvent targetShapeEvent = new TargetShapeEvent();
    TargetBinsEvent targetBinsEvent = new TargetBinsEvent();
    TaskEndedEvent taskEndedEvent = new TaskEndedEvent();
    InitializeTaskEvent initializeTaskEvent = new InitializeTaskEvent();

    GameplayUI ui;
    bool finalBedford = false;

    ShapesPopulation shapesPopulationObj;

    /* Key: an index
     * Value: a collection of parameters (number of bins<int>, using similar variable "color of shape" <bool>) */
    List<string[]> parameters = new List<string[]>();
    int paramsIndex;
    int bedfordIndex;
    Dictionary<string, Dictionary<string, int>> mapParamsToNums;

    GameObject targetShape;
    List<int> targetBins;

    int currentNumBins;
    int currentShapeVar;
    int currentSoundVar;
    float taskDuration;
    float restDuration;
    bool pauseBeforeRest;
    bool restOver;

    List<GameObject> possibleTaskShapes;
    List<GameObject> otherTaskShapes;

    float destroyedObjXPosition;

    int numShapes;

    Timer taskTimer;

    void Start()
    {
        EventManager.AddBinChosenListener(HandleBinChosenEvent);
        EventManager.AddTargetShapeInvoker(this);
        EventManager.AddTargetBinsInvoker(this);
        EventManager.AddStartTaskListener(HandleStartTaskEvent);
        EventManager.AddTaskEndedInvoker(this);
        EventManager.AddInitializeTaskInvoker(this);

        ui = gameObject.GetComponent<GameplayUI>();
        shapesPopulationObj = gameObject.GetComponent<ShapesPopulation>();
        marker = GameObject.FindWithTag("lslObj").GetComponent<LSLMarkerStream>();

        SwitchCanvas(false, false);

        numShapes = InitGame.Instance().GetNumShapes;

        InitializeFields();
        InitializeTask();

        taskTimer = gameObject.AddComponent<Timer>();
        taskTimer.AddTimerFinishedListener(HandleTaskTimerFinishedEvent);
        taskTimer.AddSecondsLeftListener(GameplayLogger.Instance().HandleElapsedTime);
        taskTimer.AddSecondsLeftListener(HandleTaskSecondsLeftEvent);
    }

    public void SwitchCanvas(bool isBedfordActive, bool resting)
    {
        if (paramsIndex >= parameters.Count && !isBedfordActive && parameters.Count > 0)
        {
            if (!finalBedford)
            {
                finalBedford = true;
            }
            else
            {
                //End of game
                SceneManager.LoadScene("GameFinished");
                return;
            }
        }
        if (resting)
        {
            mainCanvas.SetActive(false);
            bedfordCanvas.SetActive(false);
            restCanvas.SetActive(true);
            StartCoroutine(RunRest());
        }
        else
        {
            mainCanvas.SetActive(!isBedfordActive);
            bedfordCanvas.SetActive(isBedfordActive);
            restCanvas.SetActive(false);
        }
    }

    IEnumerator RunRest()
    {
        //Print the time of when the function is first called.
        Debug.Log("Started Coroutine at timestamp : " + Time.time);
        marker.Write("Rest Started", Time.time);

        yield return new WaitForSeconds(15);
        //After we have waited 5 seconds print the time again.
        Debug.Log("Finished Coroutine at timestamp : " + Time.time);
        marker.Write("Rest Ended", Time.time);
        SwitchCanvas(false, false);
    }


    public void UpdateBedfordIndex(int increment)
    {
        bedfordIndex += increment;
    }

    // Used for GameplayLogger to get block condition.
    public string GetCurrentCondition()
    {
        return parameters[paramsIndex - 1][0];
    }



    #region Return Variables
    private GameObject ReturnTargetShape()
    {
        int randomNum = UnityEngine.Random.Range(0, shapes.Count);
        return shapes[randomNum];
    }

    private List<int> ReturnTargetBins(int numBins)
    {
        List<int> temp = new List<int>();
        while(temp.Count < numBins / 2)
        { 
            int randomBinNum = UnityEngine.Random.Range(1, numBins + 1);
            if (!temp.Contains(randomBinNum))
                temp.Add(randomBinNum);
        }

        return temp;
    }

    private List<GameObject> ReturnSimilarShapes()
    {
        List<GameObject> similarShapes = new List<GameObject>();

        string colorOfTarget = targetShape.name.Split('_')[0];
        string shapeOfTarget = targetShape.name.Split('_')[1];
        foreach (GameObject shape in shapes)
        {
            string c = shape.name.Split('_')[0]; //color
            string s = shape.name.Split('_')[1]; //shape

            if ((c == colorOfTarget || s == shapeOfTarget) && targetShape.name != shape.name)
                similarShapes.Add(shape);
        }

        return similarShapes;
    }

    private List<GameObject> ReturnDistinctShapes()
    {
        List<GameObject> distinctShapes = new List<GameObject>();

        string colorOfTarget = targetShape.name.Split('_')[0];
        string shapeOfTarget = targetShape.name.Split('_')[1];
        foreach (GameObject shape in shapes)
        {
            string c = shape.name.Split('_')[0]; //color
            string s = shape.name.Split('_')[1]; //shape

            if (c != colorOfTarget && s != shapeOfTarget)
                distinctShapes.Add(shape);
        }

        return distinctShapes;
    }

    private Tuple<List<GameObject>, List<GameObject>> ReturnPossibleTaskShapes(int similarVar)
    {
        List<GameObject> possibleTaskShapes = new List<GameObject>();
        List<GameObject> otherTaskShapes = new List<GameObject>();

        if (similarVar == 2) //Shapes share either color or shape with target shape
        {
            possibleTaskShapes = ReturnSimilarShapes();
            otherTaskShapes = ReturnDistinctShapes();
        }
        else if(similarVar == 1 || similarVar == 0) //Target shape does not share shape or color
        {
            possibleTaskShapes = ReturnDistinctShapes();
            otherTaskShapes = ReturnSimilarShapes();
        }

        return Tuple.Create(possibleTaskShapes, otherTaskShapes);
    }

    public bool IsTargetShapePopulated()
    {
        GameObject[] currentShapes = GameObject.FindGameObjectsWithTag("Shape");

        foreach(GameObject obj in currentShapes)
        {
            if (obj.name.Contains(targetShape.name))
            {
                return true;
            }
        }

        return false;
    }
    #endregion


    #region Initializers
    private void InitializeFields()
    {
        mapParamsToNums = new Dictionary<string, Dictionary<string, int>>
        {
            {"WM", new Dictionary<string, int>{ { "LOW", 4}, { "MED", 6 }, { "HIGH", 8 } } },
            {"VL", new Dictionary<string, int>{ { "OFF", 0}, { "LOW", 1 }, { "HIGH", 2 } } },
            {"AL", new Dictionary<string, int>{ { "OFF", 0}, { "LOW", 1 }, { "HIGH", 2 } } },
        };

        paramsIndex = 0;

        parameters = InitGame.Instance().GetParams();
    }

    private void SetTaskParams()
    {
        if (paramsIndex >= parameters.Count)
        {
            //End of game
            return;
        }
        string[] currentTaskParams = parameters[paramsIndex];
        string currentVal;
        for(int i = 0; i < currentTaskParams.Length; i++) //Loop through columns
        {
            if(i == 0) //Order of conditions
            {
                currentVal = currentTaskParams[i];
                string[] temp = currentVal.Split('_');

                currentNumBins = mapParamsToNums["WM"][temp[1].ToUpper()];
                currentSoundVar = mapParamsToNums["AL"][temp[3].ToUpper()];
                currentShapeVar = mapParamsToNums["VL"][temp[5].ToUpper()];

            }
            else if(i == 1) //Task duration
            {
                taskDuration = float.Parse(currentTaskParams[i]);
            }
            else if(i == 2) //Rest duration after task
            {
                restDuration = float.Parse(currentTaskParams[i]);
            }
            else if(i == 3) //Pause before rest
            {
                currentVal = currentTaskParams[i];
                if (currentVal.ToUpper() == "TRUE")
                    pauseBeforeRest = true;
                else
                    pauseBeforeRest = false;
            }
        }

        paramsIndex += 1;
    }

    private void InitializeTask()
    {
        SetTaskParams();
        initializeTaskEvent.Invoke(currentSoundVar, taskDuration);

        shapes.Shuffle();
        targetShape = ReturnTargetShape();
        targetBins = ReturnTargetBins(currentNumBins);

        targetShapeEvent.Invoke(targetShape.name);
        targetBinsEvent.Invoke(targetBins);

        ui.SetTargetShapeText("Target shape: <sprite name=" + targetShape.name + ">");
        ui.SetTargetBinsText("Target bins: " + string.Join(", ", targetBins.ConvertAll(i => i.ToString()).ToArray()));
        ui.SetStartButton = true;
    }
    #endregion


    #region Start Gameplay
    private GameObject ChooseShapeToPopulate()
    {
        GameObject chosenShape = null;
        string key = InitGame.Instance().GetEnteredKey;

        float threshold = 0;
        int randomNum;

        if (key[0] == 'E' || key[0] == 'F')
        {
            if (currentShapeVar == 2) //HIGH VISUAL LOAD
            {
                if (key[0] == 'E')
                    threshold = 0.2f;
                else
                    threshold = 0;
            }
            else if (currentShapeVar == 1 || currentShapeVar == 0) //LOW VISUAL LOAD
            {
                if (key[0] == 'E')
                    threshold = 0.2f;
                else
                    threshold = 0.4f;
            }

            float randomValue = UnityEngine.Random.value;
            if(randomValue < threshold)
            {
                randomNum = UnityEngine.Random.Range(0, otherTaskShapes.Count);
                chosenShape = otherTaskShapes[randomNum];
            }
            else
            {
                randomNum = UnityEngine.Random.Range(0, possibleTaskShapes.Count);
                chosenShape = possibleTaskShapes[randomNum];
            }

        }
        else
        {
            randomNum = UnityEngine.Random.Range(0, possibleTaskShapes.Count);
            chosenShape = possibleTaskShapes[randomNum];
        }

        return chosenShape;
    }

    private void StartTask()
    {
        if (currentNumBins == 4)
        {
            GameObject tempObj = Instantiate(fourBinsObj, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
            tempObj.transform.SetParent(GameObject.FindGameObjectWithTag("Canvas").transform);
        }
        else if (currentNumBins == 6)
        {
            GameObject tempObj = Instantiate(sixBinsObj, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
            tempObj.transform.SetParent(GameObject.FindGameObjectWithTag("Canvas").transform);
        }
        else if (currentNumBins == 8)
        {
            GameObject tempObj = Instantiate(eightBinsObj, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
            tempObj.transform.SetParent(GameObject.FindGameObjectWithTag("Canvas").transform);
        }

        Tuple<List<GameObject>, List<GameObject>> tuple = ReturnPossibleTaskShapes(currentShapeVar);
        possibleTaskShapes = tuple.Item1;
        otherTaskShapes = tuple.Item2;

        List<GameObject> trialShapes = new List<GameObject>();

        for(int i = 0; i < numShapes - 1; i++)
        {
            trialShapes.Add(ChooseShapeToPopulate());
        }
        trialShapes.Add(targetShape);
        trialShapes.Shuffle();

        float start_index = -((numShapes * 150 / 2) - 50);
        int x = 0;
        foreach (GameObject shape in trialShapes)
        {
            GameObject tempObj = Instantiate(shape, new Vector3(start_index + x, 250, 0), Quaternion.identity) as GameObject;
            tempObj.GetComponent<Shape>().xPosition = start_index + x;
            tempObj.transform.SetParent(GameObject.FindGameObjectWithTag("Canvas").transform);
            tempObj.GetComponent<RectTransform>().anchoredPosition = new Vector3(start_index + x, 250, 0);
            tempObj.GetComponent<RectTransform>().localScale = new Vector3(1.5f, 1.5f, 1);

            if (tempObj.name.Contains(targetShape.name))
            {
                tempObj.GetComponent<Shape>().SetIsTarget = true;
            }

            x += 150;
        }

        taskTimer.Duration = taskDuration;
        taskTimer.Run();
    }

    public void ContinueTask(GameObject shapeChosen, bool forceTargetShapePopulation)
    {
        int numCurrentShapes = GameObject.FindGameObjectsWithTag("Shape").Length;

        destroyedObjXPosition = shapeChosen.GetComponent<Shape>().xPosition;
        Destroy(shapeChosen);

        numCurrentShapes -= 1;
        if (numCurrentShapes < numShapes)
            StartCoroutine(PopulateNewShape(forceTargetShapePopulation, shapeChosen, destroyedObjXPosition));
    }

    IEnumerator PopulateNewShape(bool forceTargetShapePopulation, GameObject shapeChosen, float xPosition)
    {
        yield return new WaitForEndOfFrame();

        //Populate a new shape in the same x position
        GameObject newShape;
        if(forceTargetShapePopulation)
        {
            newShape = targetShape;
        }
        else
        {
            List<GameObject> temp = new List<GameObject>(possibleTaskShapes);
            if (!IsTargetShapePopulated())
                temp.Add(targetShape);
            temp.Shuffle();

            int randomNum = UnityEngine.Random.Range(0, possibleTaskShapes.Count);
            newShape = temp[randomNum];
        }

        newShape.GetComponent<Shape>().xPosition = xPosition;

        GameObject tempObj = Instantiate(newShape, new Vector3(xPosition, 250, 0), Quaternion.identity) as GameObject;
        tempObj.transform.SetParent(GameObject.FindGameObjectWithTag("Canvas").transform);
        tempObj.GetComponent<RectTransform>().anchoredPosition = new Vector3(xPosition, 250, 0);
        tempObj.GetComponent<RectTransform>().localScale = new Vector3(1.5f, 1.5f, 1);

        if (tempObj.name.Contains(targetShape.name))
        {
            tempObj.GetComponent<Shape>().SetIsTarget = true;
        }
    }

    private void DestroyAllObjects()
    {
        GameObject[] objs;
        objs = GameObject.FindGameObjectsWithTag("Shape");
        foreach (GameObject obj in objs)
            Destroy(obj);

        objs = GameObject.FindGameObjectsWithTag("Bin");
        foreach (GameObject obj in objs)
            Destroy(obj);

        objs = GameObject.FindGameObjectsWithTag("FourBins");
        foreach (GameObject obj in objs)
            Destroy(obj);

        objs = GameObject.FindGameObjectsWithTag("SixBins");
        foreach (GameObject obj in objs)
            Destroy(obj);

        objs = GameObject.FindGameObjectsWithTag("EightBins");
        foreach (GameObject obj in objs)
            Destroy(obj);
    }
    #endregion


    #region Event Handlers
    private void HandleBinChosenEvent(GameObject shape, int bin, double displayTimestamp, double binChosenTimestamp)
    {
        ContinueTask(shape, false);
        marker.Write("Bin Chosen", Time.time);
    }

    private void HandleStartTaskEvent()
    {
        StartTask();
        shapesPopulationObj.SetTaskStarted = true;
    }

    private void HandleTaskTimerFinishedEvent()
    {
        taskEndedEvent.Invoke();
        DestroyAllObjects();
        shapesPopulationObj.SetTaskStarted = false;

        //Start the next task
        SwitchCanvas(true, false);
        InitializeTask();
    }

    private void HandleTaskSecondsLeftEvent(double secondsLeft)
    {
        ui.SetTimerText = ((int)secondsLeft).ToString();
    }
    #endregion


    #region Add Listeners
    public void AddTargetShapeListener(UnityAction<string> listener)
    {
        targetShapeEvent.AddListener(listener);
    }

    public void AddTargetBinsListener(UnityAction<List<int>> listener)
    {
        targetBinsEvent.AddListener(listener);
    }

    public void AddTaskEndedListener(UnityAction listener)
    {
        taskEndedEvent.AddListener(listener);
    }

    public void AddInitializeTaskListener(UnityAction<int, float> listener)
    {
        initializeTaskEvent.AddListener(listener);
    }
    #endregion


    #region Setters
    public float SetDestroyedObjXPosition { set { destroyedObjXPosition = value; } }
    #endregion
}



//Source:
//https://forum.unity.com/threads/clever-way-to-shuffle-a-list-t-in-one-line-of-c-code.241052/
public static class IListExtensions
{
    /// <summary>
    /// Shuffles the element order of the specified list.
    /// </summary>
    public static void Shuffle<T>(this IList<T> ts)
    {
        var count = ts.Count;
        var last = count - 1;
        for (var i = 0; i < last; ++i)
        {
            var r = UnityEngine.Random.Range(i, count);
            var tmp = ts[i];
            ts[i] = ts[r];
            ts[r] = tmp;
        }
    }
}