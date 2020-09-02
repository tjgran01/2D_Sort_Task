using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


public class AudioManager : MonoBehaviour
{
    private static AudioManager instance = null;
    private static GameplayLogger theGameLogger;
    private int randomAudioPromptBin;
    public static AudioManager Instance()
    {
        if (instance == null)
        {
            throw new Exception("AudioManager is null.");
        }
        return instance;
    }

    [SerializeField] int targetCallsignAmount;


    Dictionary<AudioClipName, AudioClip> audioClips;
    List<AudioClipName> callsigns;
    Dictionary<AudioClipName, AudioClipName> attentionPrompts;
    Dictionary<string, AudioClipName> binSounds;

    List<AudioClipName> rightEarSounds;
    List<AudioClipName> leftEarSounds;

    List<AudioClipName> nonTargetCallsigns;

    int rightEarRate; //in seconds
    int leftEarRate; //in seconds

    int numRightEarSounds;
    int numLeftEarSounds;

    int rightEarIndex;
    int leftEarIndex;

    string randomAudioPromptBinName;

    Timer rightEarTimer;
    Timer leftEarTimer;

    AudioSource audioSource;

    Dictionary<string, int> stringIntDict = new Dictionary<string, int>() {
                                                                            { "1", 0 },
                                                                            { "2", 1 },
                                                                            { "3", 2 },
                                                                            { "4", 3 },
                                                                            { "5", 4 },
                                                                            { "6", 5 },
                                                                            { "7", 6 },
                                                                            { "8", 7  },
                                                                          };

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
    }

    private void Start()
    {
        EventManager.AddInitializeTaskListener(HandleInitializeTaskEvent);
        EventManager.AddStartTaskListener(HandleStartTaskEvent);
        EventManager.AddTaskEndedListener(HandleTaskEndedEvent);

        theGameLogger = FindObjectOfType<GameplayLogger>().GetComponent<GameplayLogger>();

        audioClips = new Dictionary<AudioClipName, AudioClip>();
        InitializeAudio();

        callsigns = new List<AudioClipName>() { AudioClipName.alpha, AudioClipName.bravo, AudioClipName.hotel, AudioClipName.tango };
        attentionPrompts = new Dictionary<AudioClipName, AudioClipName>()
        {
            { AudioClipName.bravo, AudioClipName.attentionBravo },
            { AudioClipName.tango, AudioClipName.attentionTango },
            { AudioClipName.alpha, AudioClipName.attentionAlpha },
            { AudioClipName.hotel, AudioClipName.attentionHotel }
        };

        binSounds = new Dictionary<string, AudioClipName>(){
            {"1", AudioClipName.one },
            {"2", AudioClipName.two },
            {"3", AudioClipName.three },
            {"4", AudioClipName.four },
            {"5", AudioClipName.five },
            {"6", AudioClipName.six },
            {"7", AudioClipName.seven },
            {"8", AudioClipName.eight }
        };

        rightEarRate = 15;
        leftEarRate = 5;

        rightEarTimer = gameObject.AddComponent<Timer>();
        rightEarTimer.AddTimerFinishedListener(HandleRightEarTimerFinishedEvent);

        leftEarTimer = gameObject.AddComponent<Timer>();
        leftEarTimer.AddTimerFinishedListener(HandleLeftEarTimerFinishedEvent);

        rightEarIndex = 0;
        leftEarIndex = 0;

        audioSource = gameObject.GetComponent<AudioSource>();
    }


    #region Helper Functions
    private void InitializeAudio()
    {
        audioClips.Add(AudioClipName.attentionAlpha,
            Resources.Load<AudioClip>("Audio/attention_alpha_right"));
        audioClips.Add(AudioClipName.attentionBravo,
            Resources.Load<AudioClip>("Audio/attention_bravo_right"));
        audioClips.Add(AudioClipName.attentionHotel,
            Resources.Load<AudioClip>("Audio/attention_hotel_right"));
        audioClips.Add(AudioClipName.attentionTango,
            Resources.Load<AudioClip>("Audio/attention_tango_right"));


        audioClips.Add(AudioClipName.alpha,
            Resources.Load<AudioClip>("Audio/alpha_left"));
        audioClips.Add(AudioClipName.bravo,
            Resources.Load<AudioClip>("Audio/bravo_left"));
        audioClips.Add(AudioClipName.hotel,
            Resources.Load<AudioClip>("Audio/hotel_left"));
        audioClips.Add(AudioClipName.tango,
            Resources.Load<AudioClip>("Audio/tango_left"));


        audioClips.Add(AudioClipName.one,
            Resources.Load<AudioClip>("Audio/one_right"));
        audioClips.Add(AudioClipName.two,
            Resources.Load<AudioClip>("Audio/two_right"));
        audioClips.Add(AudioClipName.three,
            Resources.Load<AudioClip>("Audio/three_right"));
        audioClips.Add(AudioClipName.four,
            Resources.Load<AudioClip>("Audio/four_right"));
        audioClips.Add(AudioClipName.five,
            Resources.Load<AudioClip>("Audio/five_right"));
        audioClips.Add(AudioClipName.six,
            Resources.Load<AudioClip>("Audio/six_right"));
        audioClips.Add(AudioClipName.seven,
            Resources.Load<AudioClip>("Audio/seven_right"));
        audioClips.Add(AudioClipName.eight,
            Resources.Load<AudioClip>("Audio/eight_right"));
    }

    private void InitializeVariables(AudioClipName targetCallsign, int taskDuration)
    {
        rightEarIndex = 0;
        leftEarIndex = 0;

        rightEarSounds = new List<AudioClipName>();
        leftEarSounds = new List<AudioClipName>();

        nonTargetCallsigns = new List<AudioClipName>(callsigns);
        nonTargetCallsigns.Remove(targetCallsign);

        numRightEarSounds = taskDuration / rightEarRate;
        numLeftEarSounds = taskDuration / leftEarRate;

        int randomNum;

        for(int i = 0; i < numLeftEarSounds; i++)
        {
            randomNum = UnityEngine.Random.Range(0, 4);
            leftEarSounds.Add(callsigns[randomNum]);
        }

        int targetCallsignInBlock = 0;
        for(int i = 0; i < numRightEarSounds; i++)
        {
            if(targetCallsignInBlock < targetCallsignAmount)
            {
                rightEarSounds.Add(attentionPrompts[targetCallsign]);
                targetCallsignInBlock++;
            }
            else
            {
                randomNum = UnityEngine.Random.Range(0, 3);
                rightEarSounds.Add(attentionPrompts[nonTargetCallsigns[randomNum]]);
            }
        }
        rightEarSounds.Shuffle();
    }

    public AudioClip Play(AudioClipName name)
    {
        audioSource.PlayOneShot(audioClips[name]);
        return audioClips[name];
    }
    #endregion


    #region Event Handlers
    private void HandleInitializeTaskEvent(int currentSoundVar, float taskDuration)
    {
        InitializeVariables(AudioClipName.bravo, (int)taskDuration);
    }

    private void HandleStartTaskEvent()
    {
        rightEarTimer.Duration = rightEarRate;
        rightEarTimer.Run();

        leftEarTimer.Duration = leftEarRate;
        leftEarTimer.Run();
    }

    private void HandleTaskEndedEvent()
    {
        rightEarTimer.Stop();
        rightEarTimer.Duration = 0;

        leftEarTimer.Stop();
        leftEarTimer.Duration = 0;

        audioSource.Stop();
    }

    private void HandleRightEarTimerFinishedEvent()
    {
        StartCoroutine(PlayPrompt());
    }

    IEnumerator PlayPrompt()
    {
        AudioClip audio = Play(rightEarSounds[rightEarIndex]);
        Debug.Log(audio.name);
        List<GameObject> bins = new List<GameObject>(GameObject.FindGameObjectsWithTag("Bin")).Where(x => !x.gameObject.GetComponent<Bin>().IsGreyedOut).ToList();
        randomAudioPromptBin = UnityEngine.Random.Range(0, bins.Count);
        randomAudioPromptBinName = bins[randomAudioPromptBin].name;

        yield return new WaitForSecondsRealtime(audio.length);

        Play(binSounds[bins[randomAudioPromptBin].name]);
        if (audio.name == "attention_bravo_right")
        {
            theGameLogger.HandleSecondaryAudioPromptEvent(randomAudioPromptBin, true);
        }
        else
        {
            theGameLogger.HandleSecondaryAudioPromptEvent(randomAudioPromptBin, false);
        }
        

        rightEarIndex++;

        rightEarTimer.Duration = rightEarRate;
        rightEarTimer.Run();
    }

    private void HandleLeftEarTimerFinishedEvent()
    {
        Play(leftEarSounds[leftEarIndex]);
        leftEarIndex++;

        leftEarTimer.Duration = leftEarRate;
        leftEarTimer.Run();
    }
    #endregion


    #region Setter
    public int SetRightEarRate { set { rightEarRate = value; } }
    public int SetLeftEarRate { set { leftEarRate = value; } }
    #endregion

    #region Getters
    public int GetRandomAudioPromptBin()
    {
        try
        {
            return this.stringIntDict[randomAudioPromptBinName];
        }
        catch (ArgumentNullException)
        {
            return 0;
        }
    }
    #endregion
}