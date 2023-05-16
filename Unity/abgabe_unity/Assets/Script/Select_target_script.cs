using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.Networking;

public class Select_target_script : MonoBehaviour
{

    public RequestData requestData;
    string json = string.Empty;
    
     
    
    
    // Start is called before the first frame update
    void Start()
    {
        
        requestData.lat = 50.1289494f;
        requestData.lng = 8.5777168f;
        json = JsonUtility.ToJson(requestData);
        Debug.Log(json);
        StartCoroutine(Request_place());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator Request_place()
    {

        using (UnityWebRequest www = UnityWebRequest.Post("http://209.250.235.195:9000/request_place", json))
        {

            byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
            www.uploadHandler = new UploadHandlerRaw(jsonToSend);
            www.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();
            //wait for response

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);

            }
            else
            {
                Debug.Log(www.downloadHandler.text);
            }
        
        }
    }
}


[System.Serializable]
public class RequestData
{
    public float lat, lng;


}