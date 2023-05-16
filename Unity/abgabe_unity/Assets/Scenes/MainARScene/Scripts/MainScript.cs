using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;

using UnityEngine.AI;
using UnityEngine.XR.Management;

public class MainScript : MonoBehaviour
{


    [SerializeField]
    public GameObject NAVPREFAB;

    private GameObject dog, bowl_empty, bowl_water, bowl_food, bed, targetObject, navprefab;
    //navmesh
    private NavMeshAgent navMeshAgent;
    public Transform[] posXZ;
    private bool isSet;


    private ARPlaneManager aRPlaneManager;

    private ARRaycastManager aRRaycastManager;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();

    // Start is called before the first frame update
    void Start()
    {
        isSet = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isSet)
        {

            spawnObj();
            //spawnobjTest();
        }
        else
        {

        }
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
        touchPosition = default;
        return false;
    }

    void spawnobjTest()
    {
        isSet = true;
        navprefab = Instantiate(NAVPREFAB, new Vector3(-1, 0, -1), Quaternion.identity);

        //dog = Instantiate(objectArray[counter], hitPose.position, hitPose.rotation);
        dog = GameObject.FindGameObjectWithTag("Dog");
        navMeshAgent = dog.GetComponent<NavMeshAgent>();

        Vector3 lookpos = Camera.main.transform.position - dog.transform.position;
        lookpos.y = 0;
        dog.transform.LookAt(lookpos);


        //bowl = Instantiate(objectArray[counter], hitPose.position - new Vector3(0.6f, 0, 0), hitPose.rotation);
        bowl_empty = GameObject.FindGameObjectWithTag("Bowl_Empty");
        bowl_food = GameObject.FindGameObjectWithTag("Bowl_Full");
        bowl_water = GameObject.FindGameObjectWithTag("Bowl_Water");
        //bed = Instantiate(objectArray[counter], hitPose.position + new Vector3(0.6f, 0, 0), hitPose.rotation);
        bed = GameObject.FindGameObjectWithTag("Bed");
        //bowl_food.SetActive(false);
        //
        //bowl_water.SetActive(false);


        // targetObject = Instantiate(cube, hitPose.position - new Vector3(1f, 0, 1f), hitPose.rotation);
        targetObject = GameObject.FindGameObjectWithTag("Cube");

        //nav temp
        //Instantiate(nav, hitPose.position+new Vector3(0,0,0.5f), hitPose.rotation);

        //add max,minxz
        posXZ[0] = GameObject.FindGameObjectWithTag("MAX_XZ").transform;
        posXZ[1] = GameObject.FindGameObjectWithTag("MIN_XZ").transform;
        //dog_animator = dog.GetComponent<Animator>();
        //dogcontroller = dog.GetComponent<Dog_Controller>();
    }
    void spawnObj()
    {
        if (!TryGetTouchPosition(out Vector2 touchPosition))
        {

            return;
        }
        if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Debug.Log("point");
            if (aRRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
            {
                var hitPose = hits[0].pose;

                foreach (var plane in aRPlaneManager.trackables)
                {
                    plane.gameObject.SetActive(false);
                }
                aRPlaneManager.enabled = false;

                navprefab = Instantiate(NAVPREFAB, hitPose.position + new Vector3(0, 0, 0.2f), hitPose.rotation);

                
            }
        }
    }
}
