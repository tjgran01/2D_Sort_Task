using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HeadPhoneCheck : MonoBehaviour
{
    public void PlayRight()
    {
        AudioManager.Instance().Play(AudioClipName.one);
    }


    public void PlayLeft()
    {
        AudioManager.Instance().Play(AudioClipName.hotel);
    }


    public void MoveOn()
    {
        SceneManager.LoadScene("Instructions");
    }
}
