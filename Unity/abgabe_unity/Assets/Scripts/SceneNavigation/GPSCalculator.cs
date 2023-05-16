using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;

public class GPSCalculator : MonoBehaviour
{
    public Text t;
    private float latitude;
    private float longitude;
    //0 cafe, 1 park, 2 
    [SerializeField] Sprite[] icons;

    public GameObject iconPrefab;
    List<Transform> places = new List<Transform>();
    Vector3 screenpos;
   public  Image img_tmp;

    private void Awake()
    {
        if (Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
        }
    }

    void Start()
    {
        places.Add(Instantiate(iconPrefab).transform);

        t.text = ("start");
        StartCoroutine(setUI());
        t.text = ("go");
        
    }




    IEnumerator setUI()
    {
        int n = 0;
        while (true)
        {
            yield return new WaitForSeconds(1);
            t.text = "";
            yield return new WaitForEndOfFrame();
            t.text += ("spin");

            if (!Input.location.isEnabledByUser)
            {
                t.text += ("tttteeessttt");
                Input.location.Start();

                print("tttteeessttt");
            }


            int maxWait = 20;

            t.text += ("LocationServiceStatus.Initializing");

            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                yield return new WaitForSeconds(1);
                maxWait--;
            }


            t.text += ("maxWait < 1.Initializing");
            if (maxWait < 1)
            {
                Debug.Log("Timed out");
                t.text += ("Timed out");
                yield break;
            }
            t.text += ("Input.location.status == LocationServiceStatus.Failed");
            if (Input.location.status == LocationServiceStatus.Failed)
            {
                Debug.Log("Unable to determine device location");
                print("Unable to determine device location");
                t.text += "Unable to determine device location";
                yield break;
            }
            else
            {
                latitude = Input.location.lastData.latitude;
                longitude = Input.location.lastData.longitude;
                Debug.Log("Latitude: " + latitude + " Longitude: " + longitude);
                t.text += ("Latitude: " + latitude + " Longitude: " + longitude);
            }


            t.text = "";
            places[0].position = GetDisplacement(latitude, longitude, 50.1263271f, 8.5859419f);
            places[0].position = Camera.main.transform.position+(places[0].position - Camera.main.transform.position).normalized * 10f;
            //places[0].position = Camera.main.WorldToScreenPoint(places[0].position);

            //¼öÁ¤ÇÏ¸é µÊ
            /*
            screenPos = cam.WorldToScreenPoint(target.position);
            if (screenPos.x < 0 || screenPos.x > Screen.width || screenPos.y < 0 || screenPos.y > Screen.height)
            {
                Debug.Log("target is out of view");
                markerImage.enabled = true;
                markerImage.GetComponent<RectTransform>().anchoredPosition = new Vector2(Mathf.Clamp(screenPos.x, 0, Screen.width), Mathf.Clamp(screenPos.y, 0, Screen.height));
            }
            else
            {
                Debug.Log("target is on view");
                markerImage.enabled = false;
            }
            */


            t.text += ("1111");

            places[0].GetComponentInChildren<TextMesh>().text = "Industriepark H?chst";
            t.text += ("2222");

            places[0].GetComponentInChildren<SpriteRenderer>().sprite = icons[0];
            t.text += ("AFTER_ENTER");


            Debug.Log("me Latitude: " + latitude + " Longitude: " + longitude);
            print("me Latitude: " + latitude + " Longitude: " + longitude);
            Debug.Log("target x: " + places[0].position.x + " y: " + places[0].position.y + " z: " + places[0].position.z);
            print("target x: " + places[0].position.x + " y: " + places[0].position.y + " z: " + places[0].position.z);
            t.text += "me Latitude: " + latitude + " Longitude: " + longitude+"----";
            t.text += (places[0].position.ToString());

        }
    }

    void temp()
    {
        places[0].position = GetDisplacement(latitude, longitude, 50.1263271f, 8.5859419f);
        places[0].GetComponentInChildren<TextMesh>().text = "Industriepark H?chst";
        places[0].GetComponentInChildren<SpriteRenderer>().sprite = icons[0];



        Debug.Log("me Latitude: " + latitude + " Longitude: " + longitude);
        print("me Latitude: " + latitude + " Longitude: " + longitude);
        Debug.Log("target x: " + places[0].position.x + " y: " + places[0].position.y + " z: " + places[0].position.z);
        print("target x: " + places[0].position.x + " y: " + places[0].position.y + " z: " + places[0].position.z);
        t.text = "me Latitude: " + latitude + " Longitude: " + longitude;
    }

    public Vector3 GetDisplacement(float latitude1, float longitude1, float latitude2, float longitude2)
    {
        try
        {

            float earthRadius = 6371.0f; // In kilometers
            float dLat = Mathf.Deg2Rad * (latitude2 - latitude1);
            float dLon = Mathf.Deg2Rad * (longitude2 - longitude1);
            float a = Mathf.Sin(dLat / 2) * Mathf.Sin(dLat / 2) + Mathf.Cos(Mathf.Deg2Rad * latitude1) * 
                Mathf.Cos(Mathf.Deg2Rad * latitude2) * Mathf.Sin(dLon / 2) * Mathf.Sin(dLon / 2);
            float c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 -a));
            float d = (earthRadius * c);
            t.text += ("3333");

            // Convert the distance from kilometers to Unity units
            float displacement = d * 1000.0f; // In meters
            t.text += ("4444");

            // Calculate the displacement vector
            Vector3 displacementVector = new Vector3((longitude2 - longitude1), 0f, (latitude2 - latitude1));
            displacementVector.Normalize();
            displacementVector *= displacement;

            return displacementVector;
        }
        catch (Exception e)
        {
            t.text = e.Message;
        }
        
            return Vector3.zero;
        
    }
}