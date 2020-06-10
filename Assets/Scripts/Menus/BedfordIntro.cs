using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BedfordIntro : MonoBehaviour
{
    public void MoveOn()
    {
        SceneManager.LoadScene("LastInstructions");
    }
}
