using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using Newtonsoft.Json.Linq;
using UnityEngine.AI;
using UnityEngine.XR.Management;
using UnityEngine.UI;
using System.IO;
using System.Net;
using UnityEngine.SceneManagement;

public class Main_DogController : MonoBehaviour
{
    //UI
    string f_food, f_hydration, f_happy;
    public Text food, hydration, happy;
    public GameObject hydration_warning, food_warning;
    float successrate = 0.5f;
    public GameObject snackButton;
    public GameObject tutorial;
    public GameObject Wait_plane;

    //touch Event
    [SerializeField]
    bool dogIsTouched;
    bool snack_success;
    float touch_event_timer;
    Vector3 mousePrePosition = Vector3.zero;
    Vector3 mouseDeltaPosition = Vector3.zero;
    [SerializeField]
    float deltaValue = 0f;

    float plane_time = 0f;

    //개, 밥통,침대, 목표물, 플레인
    private GameObject sunglasses, earing, necklace;
    private GameObject dog, bowl_empty, bowl_water, bowl_food, bed, targetObject, navprefab;
    private Animator dog_animator;

    private Dogstate currentState;
    //xz좌표
    public Transform[] posXZ;
    private ARPlaneManager aRPlaneManager;
    private ARRaycastManager aRRaycastManager;
    private bool isSet;

    /// <summary>
    /// true when dog moved to target once, otherwise false
    /// </summary>
    private bool targetIsUsed;

    [SerializeField]
    public GameObject NAVPREFAB;
    //public GameObject[] objectArray;
    int counter = 0;
    float timer = 0;
    float action_timer = 0;
    float action_timeLimit = 0;
    float UI_Timer = 0;
    float randomTime = 0;
    bool is_sleeping;

    [SerializeField] Dogstate dogstate;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    float tmp;
    bool tmpb;

    //navmesh
    private NavMeshAgent navMeshAgent;

    //petInfo
    public Data petinfo;
    //pet act
    bool newAct;
    bool timeToEat;

    //public connect another script
    public GameObject dogInteractionObj;
    public GameObject InterfaceObj;

    //dog controller script
    Dog_Controller dogcontroller;

    //Bowl_Collider
    SphereCollider bowlCollider;

    public void ARReset()
    {
        var xrManagerSettings = XRGeneralSettings.Instance.Manager;
        xrManagerSettings.DeinitializeLoader();
        xrManagerSettings.InitializeLoaderSync();
    }


    // Start is called before the first frame update
    void Start()
    {

        isSet = false;
        newAct = true;
        aRPlaneManager = GetComponent<ARPlaneManager>();
        aRRaycastManager = GetComponent<ARRaycastManager>();
        posXZ = new Transform[2];
        petinfo = new Data();
        petinfo.happy = 40;
        petinfo.thirsty = 33;
        petinfo.hungry = 80;
        petinfo.name = "ggs";
        //Debug.Log(petinfo.name + "ggs");
        setValue();
        tmpb = true;
    }
    // Update is called once per frame


    void Update()
    {
        if (!isSet)
        {
            plane_time += Time.deltaTime;
            if (plane_time > 12)
            {
                Wait_plane.SetActive(false);
            }
            spawnObj();
            //spawnObjTest();

            //set dog obj

            //initAccessory();



            // currentState = Dogstate.Turn;

            //targetObject.transform.position = getRandomPos();
        }
        else
        {
            //spawned

            //act Time
            // get new act
            if (newAct)
            {
                currentState = GetRandomDogState();
                newAct = false;
                dogcontroller.setReset();
                action_timeLimit = 9;
                action_timer = 0;
                Debug.Log(";;;;" + currentState);

            }

            if (tmpb)
            {
                //test
                currentState = Dogstate.RandomMove;
                tmpb = false;
            }




            //dog random act switch
            switch (currentState)
            {
                case Dogstate.Idle:
                    if (action_timer == 0)
                    {
                        dogcontroller.Idle();
                        action_timer += Time.deltaTime;

                    }
                    else
                    {
                        action_timer += Time.deltaTime;

                        if (action_timer > action_timeLimit)
                        {
                            newAct = true;
                        }
                    }

                    break;
                case Dogstate.Lie:
                    if (action_timer == 0)
                    {
                        dogcontroller.Lie();
                        action_timer += Time.deltaTime;

                    }
                    else
                    {
                        action_timer += Time.deltaTime;

                        if (action_timer > action_timeLimit)
                        {
                            newAct = true;
                        }
                    }
                    break;
                case Dogstate.Sit:
                    if (action_timer == 0)
                    {
                        targetObject.transform.position = new Vector3(Camera.main.transform.position.x, dog.transform.position.y, Camera.main.transform.position.z);
                        dogcontroller.Sit(targetObject);
                        action_timer += Time.deltaTime;

                    }
                    else
                    {
                        action_timer += Time.deltaTime;

                        if (action_timer > action_timeLimit)
                        {
                            newAct = true;
                        }
                    }
                    break;
                case Dogstate.SitAndLookAround:
                    if (action_timer == 0)
                    {
                        dogcontroller.SitAndLookAround();
                        action_timer += Time.deltaTime;

                    }
                    else
                    {
                        action_timer += Time.deltaTime;

                        if (action_timer > action_timeLimit)
                        {
                            newAct = true;
                        }
                    }
                    break;
                case Dogstate.SleepShort:
                    if (!is_sleeping)
                    {
                        if (dogcontroller.Turn(bed))
                        {
                            targetObject.transform.position = bed.transform.position;
                            dogcontroller.Move(targetObject);
                            //if not close enough
                            if (Vector3.Distance(dog.transform.position, targetObject.transform.position) > 0.3f)
                            {
                                dog.transform.position = Vector3.MoveTowards(dog.transform.position, targetObject.transform.position, 0.003f);
                            }
                            //close enough
                            else
                            {
                                dog.transform.position = targetObject.transform.position;
                                dogcontroller.setReset();
                                dogcontroller.Sleep();
                                is_sleeping = true;
                            }
                        }
                    }
                    else
                    {
                        action_timeLimit = 10;
                        action_timer += Time.deltaTime;
                        if (action_timer > action_timeLimit)
                        {
                            Debug.Log("new");
                            newAct = true;
                            is_sleeping = false;
                        }
                    }
                    break;
                case Dogstate.RandomMove:
                    if (action_timer == 0)
                    {
                        targetObject.transform.position = getRandomPos();
                        action_timer += Time.deltaTime;
                    }
                    else
                    {
                        if (dogcontroller.Turn(targetObject))
                        {

                            dogcontroller.Move(targetObject);
                            if (Vector3.Distance(dog.transform.position, targetObject.transform.position) > 0.2f)
                            {
                                dog.transform.position = Vector3.MoveTowards(dog.transform.position, targetObject.transform.position, 0.004f);
                            }
                            else
                            {
                                dog.transform.position = targetObject.transform.position;
                                newAct = true;

                            }

                        }
                    }

                    break;
                case Dogstate.EatAndDrink:
                    bowlCollider = bowl_empty.GetComponent<SphereCollider>();
                    var vectorTarget = (dog.transform.position - bowl_empty.transform.position).normalized;
                    var bowl_edgePos = (vectorTarget * bowlCollider.radius) + bowl_empty.transform.position;
                    targetObject.transform.position = bowl_edgePos;

                    dog.transform.LookAt(new Vector3(targetObject.transform.position.x, dog.transform.position.y, targetObject.transform.position.z));
                    dog.transform.position = targetObject.transform.position;
                    bowl_empty.SetActive(false);


                    dogcontroller.Eat();
                    dogcontroller.setReset();
                    float ttmpt = 0;
                    while (true)
                    {
                        ttmpt += Time.deltaTime;
                        if (ttmpt > 6)
                        {
                            break;
                        }
                    }
                    break;
                case Dogstate.Interaction:
                    break;
            }

            //UI Update
            UI_Timer += Time.deltaTime;
            if (UI_Timer > 180)
            {
                setValue();
            }

            //touchEvent
            //클릭
            if (Input.GetMouseButtonDown(0))
            {
                //test
                RaycastHit ray_hit;
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out ray_hit))
                    Debug.Log("::::Rayhit !! " + ray_hit.collider.tag);
                if (ray_hit.collider.CompareTag("Dog"))
                {
                    dogIsTouched = true;
                    touch_event_timer = 0f;

                }
            }
            if (dogIsTouched)
            {

                touch_event_timer += Time.deltaTime;
                currentState = Dogstate.Interaction;


                targetObject.transform.position = new Vector3(Camera.main.transform.position.x, dog.transform.position.y, Camera.main.transform.position.z);
                dog.transform.LookAt(targetObject.transform);

                dogcontroller.setReset();

                if (touch_event_timer < 10f)
                {
                    if (Input.GetMouseButtonDown(0))
                    {
                        mousePrePosition = Input.mousePosition;
                    }
                    if (Input.GetMouseButton(0))
                    {
                        if (mousePrePosition != Input.mousePosition)
                        {
                            mouseDeltaPosition = Input.mousePosition - mousePrePosition;
                            deltaValue += mouseDeltaPosition.y;

                            if (deltaValue < -300f)
                            {
                                //if (Random.value < successrate)
                                //{

                                dogcontroller.Sit(targetObject);
                                while (true)
                                {
                                    touch_event_timer += Time.deltaTime;
                                    if (touch_event_timer > 10) break;
                                }
                                Debug.Log("ttttSit Success");

                                //}
                                //else
                                //{
                                //    Debug.Log("ttttSit fail");

                                dogIsTouched = false;

                                newAct = true;
                                //}

                            }
                        }
                    }

                    //reset
                    if (Input.GetMouseButtonUp(0))
                    {
                        mousePrePosition = Vector3.zero;
                        mouseDeltaPosition = Vector3.zero;
                        deltaValue = 0f;

                    }

                    //터치 존재
                    if (Input.touchCount > 0)
                    {
                        Touch touch = Input.GetTouch(0);
                        deltaValue += touch.deltaPosition.y;

                        if (deltaValue < -300f)
                        {

                            //if (Random.value < successrate)
                            //{
                            Debug.Log("ttttSit Success");
                            dogcontroller.Sit(targetObject);
                            //}
                            //else
                            // {
                            //Debug.Log("ttttSit fail");
                            while (true)
                            {
                                touch_event_timer += Time.deltaTime;
                                if (touch_event_timer > 10) break;
                            }
                            dogIsTouched = false;
                            newAct = true;
                            //}

                        }
                    }
                    else
                    {
                        deltaValue = 0f;
                    }
                }
                else
                {
                    Debug.Log("}}}}FAILED TO SIT");
                    dogIsTouched = false;
                    newAct = true;
                    snack_success = false;
                }

            }
        }


    }




    Dogstate GetRandomDogState()
    {
        Dogstate[] states = { Dogstate.Idle, Dogstate.Lie, Dogstate.Sit, Dogstate.SleepShort, Dogstate.RandomMove, Dogstate.SitAndLookAround };
        int randomIndex = Random.Range(0, states.Length);

        return states[randomIndex];
    }


    IEnumerator turnToObj(GameObject target)
    {
        navMeshAgent.isStopped = true;
        yield return null;
        while (dog.GetComponent<Dog_Controller>().Turn(target) == false)
        {
            yield return new WaitForEndOfFrame();
        }
        navMeshAgent.isStopped = false;
    }
    Vector3 getRandomPos()
    {
        return new Vector3(Random.Range(posXZ[1].position.x, posXZ[0].position.x), dog.transform.position.y, Random.Range(posXZ[1].position.z, posXZ[0].position.z));
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
    void spawnObjTest()
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
        bowl_food.SetActive(false);
        bowl_empty.SetActive(true);
        //
        bowl_water.SetActive(false);


        // targetObject = Instantiate(cube, hitPose.position - new Vector3(1f, 0, 1f), hitPose.rotation);
        targetObject = GameObject.FindGameObjectWithTag("Cube");

        //nav temp
        //Instantiate(nav, hitPose.position+new Vector3(0,0,0.5f), hitPose.rotation);

        //add max,minxz
        posXZ[0] = GameObject.FindGameObjectWithTag("MAX_XZ").transform;
        posXZ[1] = GameObject.FindGameObjectWithTag("MIN_XZ").transform;

        dog_animator = dog.GetComponent<Animator>();
        dogcontroller = dog.GetComponent<Dog_Controller>();

        initAccessory();
    }

    void spawnObj()
    {
        if (!TryGetTouchPosition(out Vector2 touchPosition))
        {
            return;
        }
        if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Debug.Log("Before spawn DOG");
            if (aRRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
            {
                var hitPose = hits[0].pose;

                foreach (var plane in aRPlaneManager.trackables)
                {
                    plane.gameObject.SetActive(false);
                }
                aRPlaneManager.enabled = false;

                isSet = true;
                navprefab = Instantiate(NAVPREFAB, hitPose.position + new Vector3(0, 0, 0.2f), hitPose.rotation);

                //dog = Instantiate(objectArray[counter], hitPose.position, hitPose.rotation);
                dog = GameObject.FindGameObjectWithTag("Dog");
                //navMeshAgent = dog.GetComponent<NavMeshAgent>();


                /*
                Vector3 lookpos = Camera.main.transform.position - dog.transform.position;
                lookpos.y = 0;
                dog.transform.LookAt(lookpos); */

                //bowl = Instantiate(objectArray[counter], hitPose.position - new Vector3(0.6f, 0, 0), hitPose.rotation);
                bowl_empty = GameObject.FindGameObjectWithTag("Bowl_Empty");
                bowl_food = GameObject.FindGameObjectWithTag("Bowl_Full");
                bowl_water = GameObject.FindGameObjectWithTag("Bowl_Water");

                bowl_food.SetActive(false);
                bowl_water.SetActive(false);


                //bed = Instantiate(objectArray[counter], hitPose.position + new Vector3(0.6f, 0, 0), hitPose.rotation);
                bed = GameObject.FindGameObjectWithTag("Bed");



                // targetObject = Instantiate(cube, hitPose.position - new Vector3(1f, 0, 1f), hitPose.rotation);
                targetObject = GameObject.FindGameObjectWithTag("Cube");

                //nav temp
                //Instantiate(nav, hitPose.position+new Vector3(0,0,0.5f), hitPose.rotation);

                //add max,minxz
                posXZ[0] = GameObject.FindGameObjectWithTag("MAX_XZ").transform;
                posXZ[1] = GameObject.FindGameObjectWithTag("MIN_XZ").transform;

                dog_animator = dog.GetComponent<Animator>();
                dogcontroller = dog.GetComponent<Dog_Controller>();

                initAccessory();
            }
            Debug.Log("after spawn DOG");

        }


    }







    void initAccessory()
    {

        GameObject.FindGameObjectWithTag("EaringL").SetActive(PlayerPrefs.GetInt("EarringL") != 0);
        GameObject.FindGameObjectWithTag("Earing").SetActive(PlayerPrefs.GetInt("EarringR") != 0);
        GameObject.FindGameObjectWithTag("Sunglasses").SetActive(PlayerPrefs.GetInt("Sunglasses") != 0);
        GameObject.FindGameObjectWithTag("Necklace").SetActive(PlayerPrefs.GetInt("Necklace") != 0);

    }

    void setDogState2()
    {
        dogstate = (Dogstate)Random.Range(2, 7);
    }

    public void navMeshAgent_SetDestination(GameObject target)
    {
        navMeshAgent.SetDestination(targetObject.transform.position);
    }
    //set dogstate up to random value, move<0, moveEat=random, moveEat>eat
    public void giveFood()
    {
        bowl_food.SetActive(true);
        bowl_empty.SetActive(false);
    }


    IEnumerator GetRequest(string url)
    {
        Debug.Log("letsgo");
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        request.Method = "GET";
        yield return request.GetResponseAsync().ContinueWith(task =>
        {
            HttpWebResponse response = (HttpWebResponse)task.Result;
            using (StreamReader reader = new StreamReader(response.GetResponseStream()))
            {
                string jsonResponse = reader.ReadToEnd();
                JObject json = JObject.Parse(jsonResponse);

                f_happy = json["happy"].ToString();
                f_hydration = json["water"].ToString();
                f_food = json["food"].ToString();
                Debug.Log("ffffffooooooddddddzzz" + f_food);

                //setValue(food, json["food"].ToString());
                //setValue(hydration, json["water"].ToString());
                //setValue(happy, json["happy"].ToString());





                // Debug.Log(json.ToString());
            }
            response.Close();
        });
    }

    public void setValue()
    {

        //StartCoroutine(GetRequest("http://209.250.235.195:9000/pet_status"));

        while (true)
        {
            if (f_food != "a") break;
        }



        if (PlayerPrefs.GetFloat("food") < 40f)
        {
            food_warning.SetActive(true);
        }
        else
        {
            food_warning.SetActive(false);

        }
        if (PlayerPrefs.GetFloat("water") < 40f)
        {
            hydration_warning.SetActive(true);
        }
        else
        {
            hydration_warning.SetActive(false);
        }


        if (PlayerPrefs.GetInt("nr_bone") <= 0)
   
            snackButton.SetActive(false);

        else snackButton.SetActive(true);
        happy.text = PlayerPrefs.GetFloat("happy") + "";
        hydration.text = PlayerPrefs.GetFloat("water") + "";
        food.text = PlayerPrefs.GetInt("nr_food") + "";
        Debug.Log(PlayerPrefs.GetInt("nr_food"));

    }

    public void give_food()
    {
        bowl_food.transform.position = bowl_empty.transform.position;
        bowl_food.SetActive(true);
        newAct = false;
        currentState = Dogstate.EatAndDrink;

        float happy_tmp = PlayerPrefs.GetFloat("happy");
        Debug.Log(happy_tmp);
        happy_tmp += 3;

        int food_nr_tmp = PlayerPrefs.GetInt("nr_food");
        food_nr_tmp--;
        PlayerPrefs.SetInt("nr_food", food_nr_tmp);

        PlayerPrefs.SetFloat("happy", happy_tmp);
        PlayerPrefs.SetFloat("food", happy_tmp);

        /*
        string url = "http://209.250.235.195:9000/increase_happy"; // Flask 서버의 주소

        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        request.Method = "GET";

        using (HttpWebResponse response = (HttpWebResponse)request.GetResponse())
        {
            using (StreamReader reader = new StreamReader(response.GetResponseStream()))
            {
                string responseBody = reader.ReadToEnd();
                Debug.Log("Response: " + responseBody);
            }
        }*/





        setValue();

    }

    public void remove_tutorial()
    {
        tutorial.SetActive(false);
    }
    public void give_snack()
    {
        int bone = PlayerPrefs.GetInt("nr_bone");
        bone--;
        PlayerPrefs.SetInt("nr_bone",bone);
        if (bone <= 0)
        {   
            snackButton.SetActive(false);
        }
    }
    public void back_to_menu()
    {
        SceneManager.LoadScene(0);
    }
    public void go_out()
    {
        SceneManager.LoadScene(1);

    }

    public void give_water()
    {
        bowl_water.transform.position = bowl_empty.transform.position;
        bowl_water.SetActive(true);
        newAct = false;
        currentState = Dogstate.EatAndDrink;


        float happy_tmp = PlayerPrefs.GetFloat("happy");
        happy_tmp += 3;
        PlayerPrefs.SetFloat("happy", happy_tmp);
        PlayerPrefs.SetFloat("water", 100);


        setValue();
    }

    enum Dogstate
    {
        Idle,
        Lie,
        Sit,
        SleepShort,
        RandomMove,
        SitAndLookAround,

        Interaction,
        SleepLong,
        EatAndDrink


    }
}
