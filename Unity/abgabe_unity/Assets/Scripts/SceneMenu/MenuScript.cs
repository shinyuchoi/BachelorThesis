using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using Newtonsoft.Json;
public class MenuScript : MonoBehaviour
{
    /*
    public GameObject about;
    
    public void Start()
    {
        about.SetActive(false);

    }
    public void changeScene(string name)
    {
        SceneManager.LoadScene(name);
    }
    public void popup_about()
    {
        about.SetActive(true);
        
    }
    public void close_about()
    {
        about.SetActive(false);

    }*/
    public GameObject about;
    Inventory inventory;

    public void Start()
    {
        //PlayerPrefs.DeleteAll();
       
        if (PlayerPrefs.GetInt("running") == 0)
        {
            SendPostRequest("http://209.250.235.195:9000/get_all_info", "{\"lat\":50.1289494,\"lng\":8.5777168}");
            Debug.Log("Home_address is :::::" + PlayerPrefs.GetString("home_address"));

        }

        about.SetActive(false);

    }
    public void changeScene(string name)
    {
        SceneManager.LoadScene(name);
    }
    public void popup_about()
    {
        about.SetActive(true);

    }
    public void close_about()
    {
        about.SetActive(false);

    }

    void SendPostRequest(string URL, string json)
    {
        using (UnityWebRequest request = UnityWebRequest.Post(URL, json))
        {
            byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
            request.uploadHandler = new UploadHandlerRaw(jsonToSend);
            request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");

            request.SendWebRequest();

            while (!request.isDone)
            {
                // Wait until the request is finished
            }

            if (request.isNetworkError || request.isHttpError)
            {
                Debug.Log(request.error);
            }
            else
            {
                //Debug.Log("hi");
                //Debug.Log(request.downloadHandler.text);
                string jsonString = request.downloadHandler.text;


                inventory = JsonConvert.DeserializeObject<Inventory>(jsonString);
                PlayerPrefs.SetInt("EarringL", inventory.EarringL);
                PlayerPrefs.SetInt("EarringR", inventory.EarringR);
                PlayerPrefs.SetInt("Necklace", inventory.Necklace);
                PlayerPrefs.SetInt("Sunglasses", inventory.Sunglasses);
                PlayerPrefs.SetInt("nr_food", inventory.nr_food);
                PlayerPrefs.SetInt("nr_bone", inventory.nr_bone);

                //0:not done, 1: done
                PlayerPrefs.SetInt("tutorial", 0);

                PlayerPrefs.SetFloat("food", inventory.food);
                PlayerPrefs.SetFloat("happy", inventory.happy);
                PlayerPrefs.SetFloat("water", inventory.water);



                Debug.Log("EarringL: " + PlayerPrefs.GetInt("EarringL"));
                Debug.Log("EarringR: " + PlayerPrefs.GetInt("EarringR"));
                Debug.Log("Necklace: " + PlayerPrefs.GetInt("Necklace"));
                Debug.Log("Sunglasses: " + PlayerPrefs.GetInt("Sunglasses"));
                Debug.Log("nr_food: " + PlayerPrefs.GetInt("nr_food"));
                Debug.Log("nr_bone: " + PlayerPrefs.GetInt("nr_bone"));
                Debug.Log("tutorial: " + PlayerPrefs.GetInt("tutorial"));
                Debug.Log("food: " + PlayerPrefs.GetFloat("food"));
                Debug.Log("happy: " + PlayerPrefs.GetFloat("happy"));
                Debug.Log("water: " + PlayerPrefs.GetFloat("water"));

                PlayerPrefs.SetInt("running", 100);


            }
        }
    }
    [System.Serializable]
    public class Inventory
    {
        public int EarringL;
        public int EarringR;
        public int Necklace;
        public int Sunglasses;
        public int nr_food;
        public int nr_bone;

        public float food;
        public float happy;
        public float water;

    }

}
