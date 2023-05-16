using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;


public class SMain_SceneController_Script : MonoBehaviour
{

    private ARPlaneManager aRPlaneManager;
    private ARRaycastManager aRRaycastManager;
    List<ARRaycastHit> hits;
    private void Awake()
    {
        

    }
    // Start is called before the first frame update
    void Start()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManager = GetComponent<ARPlaneManager>();
        hits = new List<ARRaycastHit>();
        //dogController.animator = GetComponent<Animator>();
        //dogController.indicator.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        DetectGround();

    }

    public void ChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    //detect ground and indicator
    void DetectGround()
    {
        Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
        


        /*if (aRRaycastManager.Raycast(screenSize, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes)){
            *//*dogController.indicator.SetActive(true);
            dogController.indicator.transform.position = hits[0].pose.position;
            dogController.indicator.transform.rotation = hits[0].pose.rotation;*//*
            //dogController.setIndicator(true,hits[0].pose.position, hits[0].pose.rotation);
        }
        else
        {
            //dogController.setIndicator(false, hits[0].pose.position, hits[0].pose.rotation);
        }*/
    }

}
