using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bin : MonoBehaviour
{
    private bool greyedOut = false;


    public bool SetGreyedOut { set { greyedOut = value; } }

    public bool IsGreyedOut { get { return greyedOut; } }
}
