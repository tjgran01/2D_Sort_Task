using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class Gameplay : MonoBehaviour
{
    [SerializeField] List<GameObject> shapes;
    [SerializeField] GameObject fourBinsObj;
    [SerializeField] GameObject sixBinsObj;
    [SerializeField] GameObject eightBinsObj;


    TrialStartedEvent trialStartedEvent = new TrialStartedEvent();
    TargetShapeEvent targetShapeEvent = new TargetShapeEvent();
    TargetBinsEvent targetBinsEvent = new TargetBinsEvent();

    GameplayUI ui;
    ShapesPopulation shapesPopulationObj;


    /* Key: an index
     * Value: a collection of parameters (number of bins<int>, using similar variable "color of shape" <bool>) */
    List<string[]> parameters = new List<string[]>();
    int paramsIndex;
    Dictionary<string, Dictionary<string, int>> mapParamsToNums;

    GameObject targetShape;
    List<int> targetBins;

    int currentNumBins;
    int currentShapeVar;
    int currentSoundVar;
    float taskDuration;
    float restDuration;
    bool pauseBeforeRest;

    bool taskStarted = false;

    List<GameObject> possibleTaskShapes;

    float destroyedObjXPosition;

    void Start()
    {
        EventManager.AddBinChosenListener(HandleBinChosenEvent);
        EventManager.AddTrialStartedInvoker(this);
        EventManager.AddTargetShapeInvoker(this);
        EventManager.AddTargetBinsInvoker(this);
        EventManager.AddStartTaskListener(HandleStartTaskEvent);

        ui = gameObject.GetComponent<GameplayUI>();
        shapesPopulationObj = gameObject.GetComponent<ShapesPopulation>();

        InitializeFields();
        InitializeTask();
    }

    private void Update()
    {
        if (taskStarted)
        {
            taskDuration -= Time.deltaTime;
            if (taskDuration <= 0f)
            {
                DestroyAllObjects();
                shapesPopulationObj.SetTaskStarted = false;

                //Start the next task
                taskStarted = false;
                InitializeTask();
            }
            ui.setTimerText = ((int)taskDuration).ToString();
        }
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

    private List<GameObject> ReturnPossibleTaskShapes(int similarVar)
    {
        List<GameObject> taskShapes = new List<GameObject>();

        if (similarVar == 2) //One shapes shares either color or shape with target shape
        {
            taskShapes = ReturnSimilarShapes();
        }
        else if(similarVar == 1 || similarVar == 0) //Target shape does not share shape or color
        {
            taskShapes = ReturnDistinctShapes();
        }

        return taskShapes;
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
        parameters = new ReadConfig().ReturnParams;
    }

    private void SetTaskParams()
    {
        if (paramsIndex >= parameters.Count)
        {
            //End of game
            SceneManager.LoadScene("GameFinished");
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

        shapes.Shuffle();
        targetShape = ReturnTargetShape();
        targetBins = ReturnTargetBins(currentNumBins);

        targetShapeEvent.Invoke(targetShape.name);
        targetBinsEvent.Invoke(targetBins);

        ui.setTargetShapeText = "Target shape: <sprite name=" + targetShape.name + ">";
        ui.setTargetBinsText = "Target bins: " + string.Join(", ", targetBins.ConvertAll(i => i.ToString()).ToArray());
        ui.setStartButton = true;

        Debug.Log("Target shape: " + targetShape.name);
        Debug.Log("Target bins: " + string.Join(", ", targetBins.ConvertAll(i => i.ToString()).ToArray()));
    }
    #endregion


    #region Start Gameplay
    private void StartTask()
    {
        if (currentNumBins == 4)
        {
            Instantiate(fourBinsObj, new Vector3(0, 0, 0), Quaternion.identity);
        }
        else if (currentNumBins == 6)
        {
            Instantiate(sixBinsObj, new Vector3(0, 0, 0), Quaternion.identity);
        }
        else if (currentNumBins == 8)
        {
            Instantiate(eightBinsObj, new Vector3(0, 0, 0), Quaternion.identity);
        }

        possibleTaskShapes = ReturnPossibleTaskShapes(currentShapeVar);
        List<GameObject> trialShapes = new List<GameObject>();

        int randomNum;
        for(int i = 0; i < 2; i++)
        {
            randomNum = UnityEngine.Random.Range(0, possibleTaskShapes.Count);
            trialShapes.Add(possibleTaskShapes[randomNum]);
        }
        trialShapes.Add(targetShape);
        trialShapes.Shuffle();

        float start_index = -2;
        int x = 0;
        foreach (GameObject shape in trialShapes)
        {
            shape.GetComponent<Shape>().xPosition = start_index + x;
            GameObject tempObj = Instantiate(shape, new Vector3(start_index + x, 4, 0), Quaternion.identity) as GameObject;
            if (tempObj.name.Contains(targetShape.name))
            {
                tempObj.GetComponent<Shape>().SetIsTarget = true;
            }

            x += 2;
        }

        taskStarted = true;
        trialStartedEvent.Invoke();
    }

    public void ContinueTask(GameObject shapeChosen, bool forceTargetShapePopulation)
    {
        destroyedObjXPosition = shapeChosen.GetComponent<Shape>().xPosition;
        Destroy(shapeChosen);

        StartCoroutine(PopulateNewShape(forceTargetShapePopulation));
    }

    IEnumerator PopulateNewShape(bool forceTargetShapePopulation)
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

        newShape.GetComponent<Shape>().xPosition = destroyedObjXPosition;


        GameObject tempObj = Instantiate(newShape, new Vector3(destroyedObjXPosition, 4, 0), Quaternion.identity) as GameObject;
        if (tempObj.name.Contains(targetShape.name))
        {
            tempObj.GetComponent<Shape>().SetIsTarget = true;
        }


        if (IsTargetShapePopulated())
            trialStartedEvent.Invoke();
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
    private void HandleBinChosenEvent(GameObject shape, int bin)
    {
        ContinueTask(shape, false);
    }

    private void HandleStartTaskEvent()
    {
        StartTask();
        shapesPopulationObj.SetTaskStarted = true;
    }

    #endregion


    #region Add Listeners
    public void AddTrialStartedListener(UnityAction listener)
    {
        trialStartedEvent.AddListener(listener);
    }

    public void AddTargetShapeListener(UnityAction<string> listener)
    {
        targetShapeEvent.AddListener(listener);
    }

    public void AddTargetBinsListener(UnityAction<List<int>> listener)
    {
        targetBinsEvent.AddListener(listener);
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