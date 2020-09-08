using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using LSL;

namespace Assets.LSL4Unity.Scripts
{
    [HelpURL("https://github.com/xfleckx/LSL4Unity/wiki#using-a-marker-stream")]
    public class LSLMarkerStream : MonoBehaviour
    {

        private static LSLMarkerStream instance = null;

        public static LSLMarkerStream Instance()
        {
            if (instance == null)
            {
                throw new Exception("LSLMArkerStream is null.");
            }
            return instance;
        }

        Dictionary<string, int> triggerMapper;

        private const string unique_source_id = "D3F83BB699EB49AB94A9FA44B88882AB";

        private string lslStreamName = "Unity_<APERTURE_STRINGS>";
        public string lslStreamType = "LSL_Marker_Strings";

        private const string unique_source_id_ints = "D3F83BB699EB49AB94A9FA44B88882AC";

        private string lslStreamName_ints = "Unity_<APERTURE_INTS>";
        public string lslStreamType_ints = "LSL_Marker_Ints";

        private liblsl.StreamInfo lslStreamInfo;
        private liblsl.StreamOutlet lslOutlet;
        private int lslChannelCount = 1;


        private liblsl.StreamInfo lslStreamInfo_ints;
        private liblsl.StreamOutlet lslOutlet_ints;
        private int lslChannelCount_ints = 1;

        //Assuming that markers are never send in regular intervalls
        private double nominal_srate = liblsl.IRREGULAR_RATE;

        private const liblsl.channel_format_t lslChannelFormat = liblsl.channel_format_t.cf_string;
        private const liblsl.channel_format_t lslChannelFormat_ints = liblsl.channel_format_t.cf_int32;

        private string[] sample;
        private int[] sample_ints;
 
        void Awake()
        {
            sample = new string[lslChannelCount];

            lslStreamInfo = new liblsl.StreamInfo(
                                        lslStreamName,
                                        lslStreamType,
                                        lslChannelCount,
                                        nominal_srate,
                                        lslChannelFormat,
                                        unique_source_id);
            
            lslOutlet = new liblsl.StreamOutlet(lslStreamInfo);

            sample_ints = new int[lslChannelCount];

            lslStreamInfo_ints = new liblsl.StreamInfo(
                                        lslStreamName_ints,
                                        lslStreamType_ints,
                                        lslChannelCount_ints,
                                        nominal_srate,
                                        lslChannelFormat,
                                        unique_source_id_ints);

            lslOutlet_ints = new liblsl.StreamOutlet(lslStreamInfo_ints);

            triggerMapper = new Dictionary<string, int>()
            {
                { "Block Started", 0 },  //(row 1 order in table below /w 6 shapes)
                { "Block Ended", 1 },  //(row 2 order in table below / w 6 shapes)
                { "Target Shape Displayed", 2 },
                { "Bin Chosen", 3 },
                { "Left Ear Prompt Played", 4 },
                { "Target Audio Prompt Played", 5 },
                { "Distractor Audio Prompt Played", 6 },
                { "Rest Started", 7 },
                { "Rest Ended", 8 }
            };

            if (instance == null)
            {
                instance = this;
                DontDestroyOnLoad(this.gameObject);

                Application.runInBackground = true;
            }
        }

        public void Write(string marker)
        {
            sample[0] = marker;
            lslOutlet.push_sample(sample);
        }

        public void Write(string marker, double customTimeStamp)
        {
            Debug.Log(marker);
            sample[0] = marker;
            lslOutlet.push_sample(sample, customTimeStamp);
            float[] data = new float[] { (float)triggerMapper[sample[0]] };
            lslOutlet_ints.push_sample(data, customTimeStamp);
        }

        public void Write(string marker, float customTimeStamp)
        {
            Debug.Log(marker);
            sample[0] = marker;
            lslOutlet.push_sample(sample, customTimeStamp);
            float[] data = new float[] { (float)triggerMapper[sample[0]] };
            lslOutlet_ints.push_sample(data, customTimeStamp);
        }

        public void WriteBeforeFrameIsDisplayed(string marker)
        {
            StartCoroutine(WriteMarkerAfterImageIsRendered(marker));
        }

        IEnumerator WriteMarkerAfterImageIsRendered(string pendingMarker)
        {
            yield return new WaitForEndOfFrame();

            Write(pendingMarker);

            yield return null;
        }

    }
}