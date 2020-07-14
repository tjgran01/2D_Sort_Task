using System.Collections;
using System.Collections.Generic;
using System.IO;
using Amazon;
using Amazon.CognitoIdentity;
using Amazon.S3;
using UnityEngine;

public class InitAWS : MonoBehaviour
{
    AmazonS3Client S3Client;
    string S3BucketName;

    private void Awake()
    {
        UnityInitializer.AttachToGameObject(gameObject);
        AWSConfigs.HttpClient = AWSConfigs.HttpClientOption.UnityWebRequest;
    }

    private void Start()
    {
        CognitoAWSCredentials credentials = new CognitoAWSCredentials(
            "us-east-2:9eec7ba4-d0eb-48b9-bce1-1225a340c3e5", // Identity pool ID
            RegionEndpoint.USEast2 // Region
        );

        S3Client = new AmazonS3Client(credentials, RegionEndpoint.USEast2);
        S3BucketName = "sort-task-project";

        GetObject("config1.csv");
    }

    private void GetObject(string fileName)
    {
        Debug.Log($"fetching {fileName} from bucket {S3BucketName}");

        S3Client.GetObjectAsync(S3BucketName, fileName, (responseObj) =>
        {
            string data = null;
            var response = responseObj.Response;
            if (response.ResponseStream != null)
            {
                using (StreamReader reader = new StreamReader(response.ResponseStream))
                {
                    data = reader.ReadToEnd();
                }

                Debug.Log(data);
            }
        });
    }


}
