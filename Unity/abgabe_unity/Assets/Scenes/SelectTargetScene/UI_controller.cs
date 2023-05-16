using ARLocation;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UI_controller : MonoBehaviour
{
    public class LocationInfo
    {

        public float lat;
        public float lng;
    }

    ARLocationProvider locationProvider;

    private const double EarthRadius = 6371; // radius of the Earth, in kilometers
    bool is_finding, is_setting;
    public GameObject tutorial;

    // Start is called before the first frame update
    public GameObject[] targetobject;
    double speed = 1.3;
    double calorie = 4.3;
    public RawImage[] images;
    List<PlaceData> result;
    LocationInfo locationinfo;
    bool mix = false;
    int home_address_saved;
    void Start()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
        home_address_saved = PlayerPrefs.GetInt("home_address_is_saved");
        is_setting = true;
        locationProvider = ARLocationProvider.Instance;
        Debug.Log("Good");
        result = new List<PlaceData>();
        ///48.127265, 11.590574

        //test

        


    }
    private void Update()
    {

        if (is_setting)
        {
            if (locationProvider.CurrentLocation.latitude == 0)
            {
                //Debug.Log("Latitude: " + locationProvider.CurrentLocation.latitude);
                //Debug.Log("Longitude: " + locationProvider.CurrentLocation.longitude);
            }
            else
            {
                is_setting = false;

                locationinfo = new LocationInfo { lat = (float)locationProvider.CurrentLocation.latitude, lng = (float)locationProvider.CurrentLocation.longitude };
                string jsonobj = JsonUtility.ToJson(locationinfo);
                Debug.Log(jsonobj);
                //StartCoroutine(Upload("http://209.250.235.195:9000/request_place", jsonobj));
                SendPostRequest("http://209.250.235.195:9000/request_place", jsonobj);
                //List<PlaceData> result = GetClosestPlaces(responseData, 50.1289494f, 8.5777168f,4)
                if (home_address_saved == 0) { 
                set_home(jsonobj);
                }
                setSelector();
                for (int i = 0; i < result.Count; i++)
                {
                    Debug.Log(result[i].address + "  - lat" + result[i].lat + "    -  lng + " + result[i].lng);

                }
            }
        }

    }

    void set_home(string json)
    {
        using (UnityWebRequest request = UnityWebRequest.Post("http://209.250.235.195:9000/my_home", json))
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

                string tmp = request.downloadHandler.text;

                int startIndex = tmp.IndexOf('[');
                int endIndex = tmp.LastIndexOf(']');

                string extractedString = tmp.Substring(startIndex + 1, endIndex - startIndex - 1);

                //sample
                PlayerPrefs.SetString("home_address", "Rablstrasse 18, 81669 Muenchen");

                //PlayerPrefs.SetString("home_address", extractedString);

                Debug.Log("home_address is :::::" + PlayerPrefs.GetString("home_address"));
                 
                PlayerPrefs.SetInt("home_address_is_saved", 1);
            }
        }
    }
    void setSelector()
    {

        if (mix)
        {
            System.Random random = new System.Random();

            PlaceData tmp;

            int randomNumber;
            for (int i = 0; i < 100; i++)
            {
                randomNumber = random.Next(1, result.Count);

                tmp = result[randomNumber];
                result[randomNumber] = result[0];
                result[0] = tmp;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            double distance1 = Math.Round(result[i].distance, 2);
            double time1 = Math.Round((distance1 * 1000) / (speed * 60), 0);
            //1ºÐ¿¡ 4.3 kcal
            double cal1 = Math.Round(time1 * calorie, 0);
            setText(targetobject[i].transform.Find("Data").GetComponent<Text>(), distance1.ToString() + " km", time1 + " min", cal1 + " kcal");
            targetobject[i].transform.Find("Name").GetComponent<Text>().text = result[i].name;
            StartCoroutine(DownloadImage(images[i], result[i].photo));


        }
        Debug.Log("home_address is :::::" + PlayerPrefs.GetString("home_address"));

    }

    IEnumerator DownloadImage(RawImage img, string MediaUrl)
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.isNetworkError || request.isHttpError)
            Debug.Log(request.error);
        else
            img.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
    }


    void setText(Text text, string distance, string time, string calories)
    {
        string tmp = distance + System.Environment.NewLine + System.Environment.NewLine + time + System.Environment.NewLine + System.Environment.NewLine + calories;
        text.text = tmp;
    }
    // Update is called once per frame
    public void remove_tutorial()
    {
        tutorial.SetActive(false);
    }
    void GetCoordinates()
    {
        if (Input.location.isEnabledByUser)
        {
            Input.location.Start();

            int maxWait = 20;

            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                float startTime = Time.realtimeSinceStartup;
                while (Time.realtimeSinceStartup - startTime < 1f)
                {
                }

                Debug.Log(Input.location.status);
                maxWait--;
            }
            if (maxWait < 1)
            {
                Debug.Log("Unable to initialize location services.");
                return;
            }

            if (Input.location.status == LocationServiceStatus.Failed)
            {
                Debug.Log("Failed to get location data.");
                return;
            }

            locationinfo = new LocationInfo { lat = Input.location.lastData.latitude, lng = Input.location.lastData.longitude };



            Debug.Log("Latitude: " + locationinfo.lat + ", Longitude: " + locationinfo.lng);

            Input.location.Stop();
        }
        else
        {
            Debug.Log("Location services are not enabled by the user.");
        }
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
                Debug.Log(request.downloadHandler.text);
                PlaceResponse responseData = JsonConvert.DeserializeObject<PlaceResponse>(request.downloadHandler.text);
                foreach (PlaceData locationData in responseData.responseData)
                {
                    // Do something with each LocationData object, e.g.:
                    result.Add(new PlaceData
                    {
                        address = locationData.address,
                        lat = locationData.lat,
                        lng = locationData.lng,
                        name = locationData.name,
                        photo = locationData.photo,
                        weather = locationData.weather,
                        distance = locationData.distance
                    });

                }

                //sample
                result[0] = new PlaceData
                {
                    address = "Hochstra©¬e 15,81669 Muenchen",
                    lat = 11.588154420922857f,
                    lng = 48.12901024043819f,
                    name = "Lillienberg Wasserquelle",
                    photo = "https://lh5.googleusercontent.com/p/AF1QipMkVsnfQSyZ1M6z0rzsoIWq5pxP76RevFYtT2kK=w408-h306-k-no",
                    weather = 1f,
                    distance = 0.3f
                };

            }
        }
    }

    public void SelectTarget(int n)
    {
        PlayerPrefs.SetString("targetaddress", result[n].address);
        //SceneManager.LoadScene("AR_Navigation");
        SceneManager.LoadScene(2);

        Debug.Log("tttttttt" + PlayerPrefs.GetString("targetaddress"));

    }

    public class PlaceResponse
    {
        public PlaceData[] responseData;
    }


    public class PlaceData
    {
        public string address;
        public float lat;
        public float lng;
        public string name;
        public string photo;
        public float weather;
        public float distance;

    }

}
