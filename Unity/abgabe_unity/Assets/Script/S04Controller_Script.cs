using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System;

public class S04Controller_Script : MonoBehaviour
{
    // Start is called before the first frame update

    public Text text;

    public GameObject location_prefab;
    
    //location of prefab
    public Transform location_Parent;
    public RequestData requestData;

    //
    private string jsonObject;
    string json = string.Empty;

    IEnumerator Start()
    {
        //서버가 받을땐  coroutine으로 널이 아닐때까지 기다리는 
        //yield return new WaitUntil(() => jsonObject != null);
        yield return null;
        requestData.lat = 50.1289494f;
        requestData.lng = 8.5777168f;
        json = JsonUtility.ToJson(requestData);

        

        using (UnityWebRequest www = UnityWebRequest.Post("http://209.250.235.195:9000/request_place", json))
        {

            byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
            www.uploadHandler = new UploadHandlerRaw(jsonToSend);
            www.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();
            //wait for response
            targetDataArray tmp = null;
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);

            }
            else
            {
                string downloadHandlerText = www.downloadHandler.text.ToString();
                
                Debug.Log(downloadHandlerText);
                tmp = JsonUtility.FromJson<targetDataArray>(downloadHandlerText);
                
                foreach (targetData lt in tmp.responseData)
                {
                    lt.printn();
                    Debug.Log("=============");
                }


            }

            //서버에서 받은 json 갯수
            int count = tmp.responseData.Length;
            for (int i = 0; i < count; i++)
            {
                var locationObj = Instantiate(location_prefab, location_Parent);
                locationObj.GetComponentInChildren<Text>().text = $"{tmp.responseData[i].name} \n{100 + i}m \n{1 + i }min";            }

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
  

    public class targetDataArray
    {
        public targetData[] responseData;
    }


    [Serializable]
    public class targetData //aray of objects
    {
        public float lat;
        public float lng;
        public float weather;
        public string pic;
        public string name;
        public string address;
        public void printn()
        {
            Debug.Log("lat "+lat);
            Debug.Log("lng " + lng);
            Debug.Log("add " + address);
        }
    }

}
