using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ARLocation;

public class LocationInfoScript : MonoBehaviour
{
    // Start is called before the first frame update
    private ARLocationProvider locationProvider;
    private Transform mainCameraTransform;
    void Start()
    {
        locationProvider = ARLocationProvider.Instance;

    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("Latitude: " + locationProvider.CurrentLocation.latitude);
        Debug.Log("Longitude: " + locationProvider.CurrentLocation.longitude);

    }
}
