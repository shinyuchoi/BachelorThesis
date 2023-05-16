using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


//Script for AR MAin
[RequireComponent(typeof(ARRaycastManager))]
public class AR_Main_Script : MonoBehaviour
{

    private GameObject gameObjectToInstanticate;
    private GameObject spawnedObject;
    private ARRaycastManager aRRaycastManager;
    private Vector2 touch_position;
    private PetCoroutineType coroutineType = PetCoroutineType.None;
    public Animator petAnimator;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    
    //Temp
    public Vector2 centerPos = new Vector2(0.5f, 0.5f);
    public ARPlaneManager aRPlaneManager = null;
    public Text textui;

    private void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        
    }

    private void Start()
    {
        //gameObjectToInstanticate = ContentManager.instance.selectCharacter;

        //StartCoroutine(petMove());

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

    // Update is called once per frame
    void Update()
    {
      


        /*if (!TryGetTouchPosition(out Vector2 touch_position))
            return;
       
        if (aRRaycastManager.Raycast(touch_position, hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = hits[0].pose;

            if (spawnedObject == null)
            {
                Debug.Log("Touched " + hitPose.position);

                spawnedObject = Instantiate(gameObjectToInstanticate, hitPose.position, hitPose.rotation);

                Debug.Log(spawnedObject.transform.position);
                petAnimator = spawnedObject.GetComponent<Animator>();

            }
            else
            {
                spawnedObject.transform.position = hitPose.position;
            }
        }

        //TODO
        coroutineType = (PetCoroutineType)UnityEngine.Random.Range(0, (int)PetCoroutineType.LENGTH);
        //




        if (petCoroutine == null)
        {
            switch (coroutineType)
            {
                case PetCoroutineType.None:
                    break;

                case PetCoroutineType.Move:
                    petCoroutine = StartCoroutine(petRun());
                    break;

                case PetCoroutineType.Run:
                    petCoroutine = StartCoroutine(petRun());
                    break;

                case PetCoroutineType.Rotate: break;

            }
        }
        */

    }
    Coroutine petCoroutine;
    IEnumerator petRun()
    {
        int i = 0;
        //생성되면 작동
        yield return new WaitUntil(() => spawnedObject != null);
        while (true)
        {
            //TODO
            //현재 생성된 위치에서 1미터앞으로 이동
            petAnimator.SetInteger("animation", 8);

            yield return new WaitForSeconds(10f);

            if (i == 6)
                break;
        }

        petCoroutine = null;
    }
    IEnumerator petMove()
    {

        int i = 0;
        //생성되면 작동
        yield return new WaitUntil(() => spawnedObject != null);
        while (true)
        {
            //TODO
            //현재 생성된 위치에서 1미터앞으로 이동
            spawnedObject.transform.position = Vector3.MoveTowards(spawnedObject.transform.position, spawnedObject.transform.position + (spawnedObject.transform.forward), 0.05f);

            //회전
            spawnedObject.transform.localEulerAngles += Vector3.up * 10.0f;
            yield return new WaitForSeconds(0.2f);

            if (i == 6)
                break;
        }

        petCoroutine = null;
    }

    enum PetCoroutineType
    {
        None = 0, Move, Run, Rotate, LENGTH
    }
}
