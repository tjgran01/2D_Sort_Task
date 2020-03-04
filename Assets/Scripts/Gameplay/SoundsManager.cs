using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SoundsManager : MonoBehaviour
{
    [SerializeField] float playSoundsRate;

    BinsSwitchedEvent binsSwitchedEvent = new BinsSwitchedEvent();
    TargetSoundEvent targetSoundEvent = new TargetSoundEvent();

    AudioClipName targetSound;
    AudioClipName[] sounds;
    List<AudioClipName> taskSounds;

    bool taskStarted;
    float taskDuration;
    float taskSoundRate;
    int soundToPlayIndex;
    bool playSound;

    bool soundPlayed = false;

    void Start()
    {
        EventManager.AddInitializeTaskListener(HandleInitalizeTaskEvent);
        EventManager.AddStartTaskListener(HandleStartTaskEvent);
        EventManager.AddBinsSwitchedInvoker(this);
        EventManager.AddTargetSoundInvoker(this);

        sounds = (AudioClipName[])Enum.GetValues(typeof(AudioClipName));
        taskSounds = new List<AudioClipName>();
        taskSoundRate = playSoundsRate;
        soundToPlayIndex = 0;
    }

    void Update()
    {
        if (taskStarted)
        {
            taskDuration -= Time.deltaTime;
            taskSoundRate -= Time.deltaTime;

            if (taskDuration <= 0f)
            {
                taskStarted = false;
                soundToPlayIndex = 0;
            }

            if(taskSoundRate <= 0f && playSound && !soundPlayed)
            {
                //if (taskSounds[soundToPlayIndex] == targetSound)
                //    binsSwitchedEvent.Invoke();


                AudioManager.Play(taskSounds[soundToPlayIndex]);
                soundPlayed = true;


            // Just playing long sounud files now.
                //soundToPlayIndex++;
                // taskSoundRate = playSoundsRate;
            }
        }

        else
        {
            soundPlayed = false;
        }
    }


    #region Helper Functions
    private void SetTargetSound()
    {
        int randomNum = UnityEngine.Random.Range(0, 9);
        targetSound = sounds[randomNum];
        targetSoundEvent.Invoke((ushort)targetSound);

    }

    private List<AudioClipName> FindDistinctSounds() //Low Auditory Load
    {
        List<AudioClipName> possibleTaskSounds = new List<AudioClipName>();
        // possibleTaskSounds.Add(targetSound);

        foreach(AudioClipName sound in sounds)
        {
            //if(sound.ToString()[0] != targetSound.ToString()[0] &&
            //    sound.ToString()[1] != targetSound.ToString()[1])
            //{
            //    possibleTaskSounds.Add(sound);
            //}

            if(sound.ToString()[0] == 'l')
            {
                possibleTaskSounds.Add(sound);
            }
        }

        possibleTaskSounds.Shuffle();

        return possibleTaskSounds;
    }

    private List<AudioClipName> FindSimilarSounds() //High Auditory Load
    {
        List<AudioClipName> possibleTaskSounds = new List<AudioClipName>();

        foreach(AudioClipName sound in sounds)
        {
            //if(sound.ToString()[0] == targetSound.ToString()[0] ||
            //    sound.ToString()[1] == targetSound.ToString()[1])
            //{
            //    Console.WriteLine(sound.ToString()[0]);
            //    Console.WriteLine("----------------");
            //    possibleTaskSounds.Add(sound);
            //}

            if (sound.ToString()[0] == 'h')
            {
                possibleTaskSounds.Add(sound);
            }
        }

        possibleTaskSounds.Shuffle();

        return possibleTaskSounds;
    }

    #endregion

    #region Event Handlers
    private void HandleInitalizeTaskEvent(int soundVar, float duration)
    {
        // SetTargetSound();
        taskDuration = duration;

        List<AudioClipName> possibleTaskSounds = new List<AudioClipName>();
        taskSounds = new List<AudioClipName>();

        if (soundVar == 0)
        {
            playSound = false;
            return;
        }
        else if (soundVar == 1)
        {
            playSound = true;
            possibleTaskSounds = FindDistinctSounds();
            foreach (AudioClipName sound in possibleTaskSounds)
            {
                Debug.Log(sound);
            }
        }
        else if (soundVar == 2)
        {
            playSound = true;
            possibleTaskSounds = FindSimilarSounds();
            // possibleTaskSounds = FindHighAudLoadSound();
        }

        Debug.Log("targetSound: " + targetSound);

        int numSounds = 1;
        int randomNum;
        // taskSounds.Add(targetSound);
        for (int i = 0; i < numSounds; i++)
        {
            randomNum = UnityEngine.Random.Range(0, possibleTaskSounds.Count);
            taskSounds.Add(possibleTaskSounds[randomNum]);
        }

        Console.WriteLine(taskSounds);
        taskSounds.Shuffle();
    }

    private void HandleStartTaskEvent()
    {
        taskStarted = true;
    }
    #endregion


    #region Add Listeners
    public void AddBinsSwitchedListener(UnityAction listener)
    {
        binsSwitchedEvent.AddListener(listener);
    }

    public void AddTargetSoundListener(UnityAction<ushort> listener)
    {
        targetSoundEvent.AddListener(listener);
    }
    #endregion
}
