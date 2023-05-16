using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Map_Mapbox : MonoBehaviour
{

    public string accessToken;
    private float centerLatitude;
    private float centerLongtitude;
    public float zoom = 18.0f;
    public int bearing = 0;
    public int pitch = 0;

    public enum style { Light, Dark, Streets, Outdoors, Satellite, SatelliteStreets };
    public style mapStyle = style.Light;

    public enum resolution { low = 1, high = 2 };
    public resolution mapResolution = resolution.low;

    public int mapWidth = 1080;
    public int mapHeight = 900;
    private string[] styleStr = new string[] { "light-v10", "dark-v10", "street-v11", "outdoors-v11", "sattellite-v9", "satellite-streets-v11" };
    private string url = "";
    private bool mapIsLoading = false;
    private Rect rect;
    private bool updateMap = true;

    private string accessTokenLast;
    private float centerLatitudeLast = -33.8873f;
    private float centerLongtitudeLast = 151.2189f;
    private float zoomLast = 18.0f;
    private int bearingLast = 0;
    private int pitchLast = 0;
    private style mapStyleLast = style.Streets;
    private resolution mapResolutionLast = resolution.low;
    
    
  
    IEnumerator GetMapBox()
    {
        // Check if the user has location service enabled.
        if (!Input.location.isEnabledByUser)
            yield break;

        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            print("Timed out");
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            centerLatitude = Input.location.lastData.latitude;
            centerLatitudeLast = Input.location.lastData.latitude;
            centerLongtitude = Input.location.lastData.longitude;
            centerLongtitudeLast = Input.location.lastData.longitude;


            url = "https://api.mapbox.com/styles/v1/mapbox/" + styleStr[(int)mapStyle] + "/static/" + centerLongtitude + "," + centerLatitude + "," + zoom + ","
            + bearing + "," + pitch + "/" + mapWidth + "x" + mapHeight + "?access_token=" + accessToken;
            Debug.Log(url);
            mapIsLoading = true;
            UnityWebRequest www = UnityWebRequestTexture.GetTexture(url);
            yield return www.SendWebRequest();
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log("www Error" + www.error);
            }
            else
            {
                mapIsLoading = false;
                gameObject.GetComponent<RawImage>().texture = ((DownloadHandlerTexture)www.downloadHandler).texture;

                accessTokenLast = accessToken;
                centerLatitudeLast = centerLatitude;
                centerLongtitudeLast = centerLongtitude;
                zoomLast = zoom;
                bearingLast = bearing;
                pitchLast = pitch;
                mapStyleLast = mapStyle;
                mapResolutionLast = mapResolution;
                updateMap = true;
            }
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GetMapBox());
        rect = gameObject.GetComponent<RawImage>().rectTransform.rect;
        mapWidth = (int)Math.Round(rect.width);
        mapHeight = (int)Math.Round(rect.height);

    }




    // Update is called once per frame
    void Update()
    {
        if (updateMap && (accessTokenLast != accessToken || 
            !Mathf.Approximately(centerLatitudeLast, centerLatitude) || !Mathf.Approximately(centerLongtitude, centerLongtitudeLast) 
            || zoomLast != zoom || bearingLast != bearing || pitchLast != pitch ||mapStyleLast != mapStyle || mapResolution != mapResolutionLast))
        {
            rect = gameObject.GetComponent<RawImage>().rectTransform.rect;
            mapWidth = (int)Math.Round(rect.width);
            mapHeight = (int)Math.Round(rect.height);
            updateMap = false;
        }
    }


    
}
