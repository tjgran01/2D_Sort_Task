using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HeadPhoneCheck : MonoBehaviour
{
    private AudioSource theSound;

    void Awake()
    {
        theSound = GetComponent<AudioSource>();
    }


    public void PlayRight()
    {
        theSound.Play();
    }


    public void PlayLeft()
    {
        theSound.Play();
    }


    public void MoveOn()
    {
        SceneManager.LoadScene("Bedford");
    }
}
