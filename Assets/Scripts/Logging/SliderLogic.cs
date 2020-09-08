using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SliderLogic : MonoBehaviour
{
    private TMP_InputField theInput;
    private Slider sliderObj;

    void Start()
    {
        theInput = GameObject.FindWithTag("inputfield").GetComponent<TMP_InputField>();
        sliderObj = GetComponent<Slider>();

        Debug.Log(theInput);
        Debug.Log(sliderObj);
    }

    public void UpdateEntry()
    {
        theInput.text = sliderObj.value.ToString(); 
    }
}
