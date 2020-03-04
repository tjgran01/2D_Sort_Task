using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public static class AudioManager
{
    static bool initialized = false;
    static AudioSource audioSource;
    static Dictionary<AudioClipName, AudioClip> audioClips =
        new Dictionary<AudioClipName, AudioClip>();


    public static bool Initialized
    {
        get { return initialized; }
    }

    public static void Initialize(AudioSource source)
    {
        initialized = true;
        audioSource = source;
        audioClips.Add(AudioClipName.ba,
            Resources.Load<AudioClip>("Audio/ba"));
        audioClips.Add(AudioClipName.be,
            Resources.Load<AudioClip>("Audio/be"));
        audioClips.Add(AudioClipName.bo,
            Resources.Load<AudioClip>("Audio/bo"));
        audioClips.Add(AudioClipName.ka,
            Resources.Load<AudioClip>("Audio/ka"));
        audioClips.Add(AudioClipName.ke,
            Resources.Load<AudioClip>("Audio/ke"));
        audioClips.Add(AudioClipName.ko,
            Resources.Load<AudioClip>("Audio/ko"));
        audioClips.Add(AudioClipName.ta,
            Resources.Load<AudioClip>("Audio/ta"));
        audioClips.Add(AudioClipName.te,
            Resources.Load<AudioClip>("Audio/te"));
        audioClips.Add(AudioClipName.to,
            Resources.Load<AudioClip>("Audio/to"));


        // For Callsign Experiment
        audioClips.Add(AudioClipName.lowAud1,
            Resources.Load<AudioClip>("Audio/lowAud1"));        
        audioClips.Add(AudioClipName.lowAud2,
            Resources.Load<AudioClip>("Audio/lowAud2"));

        // For Callsign Experiment
        audioClips.Add(AudioClipName.highAud1,
            Resources.Load<AudioClip>("Audio/highAud1"));
        audioClips.Add(AudioClipName.highAud2,
            Resources.Load<AudioClip>("Audio/highAud2"));

    }

    public static void Play(AudioClipName name)
    {
        Debug.Log(audioClips[name]);
        audioSource.PlayOneShot(audioClips[name]);
    }

}
