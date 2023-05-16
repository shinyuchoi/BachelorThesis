using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class SMain_DogController_Script : MonoBehaviour
{


    //generate dog
    private ARPlaneManager aRPlaneManager;
    private ARRaycastManager aRRaycastManager;
    List<ARRaycastHit> hits;
    bool[] objectSpawned;
    //
    public GameObject indicator;

    public GameObject pet;
    public GameObject bowl, bed;
    public Animator animator;
    Condition condition;
    float time = 0;


   
    // Start is called before the first frame update
    void Start()
    {
       
        animator = GetComponent<Animator>();
        condition = Condition.Idle;


        //generate dog, bed, bowl
        aRPlaneManager = GetComponent<ARPlaneManager>();
        aRRaycastManager = GetComponent<ARRaycastManager>();
        hits = new List<ARRaycastHit>();
        objectSpawned = new bool[3];
        objectSpawned[0] = false;
        objectSpawned[1] = false;
        objectSpawned[2] = false;


    }
    bool TryGetToucnPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
        touchPosition = default;
        return false;
    }


    public void turn(GameObject target)
    {
        var lookPos = target.transform.position - pet.transform.position;
        lookPos.y = 0;
        var rotation = Quaternion.LookRotation(lookPos);

        transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 0.7f);

        //Det(Up, A, F) 값이 0보다 크면 오른쪽, 0 보다 작으면 캐릭터의 왼쪽에 있음을 판별할 수 있다.

        Vector3 forward = pet.transform.forward;
        Vector3 toOther = target.transform.position - pet.transform.position;
        animator.SetBool("Turn", true);
        //Vector3 tmp = Vector3.Cross(forward, toOther);
        

        Vector3 petUpv3 = pet.transform.up;

        float tmp = Vector3.Dot(petUpv3, Vector3.Cross(forward, toOther));
        //< 0 =>R
        if (tmp<-0.15)
        {
            animator.SetInteger("Animation", 0);

        }
        else if(tmp > 0.15)
        {
            animator.SetInteger("Animation", 1);
        }
        else
        {
            animator.SetBool("Turn", false);
            //walkToObj(bowl);
        }

        /*
        Vector3 lookatGoal = new Vector3(bowl.transform.position.x, bowl.transform.position.y, bowl.transform.position.z);

        Vector3 direction = lookatGoal - pet.transform.position;

        pet.transform.rotation = Quaternion.Slerp(pet.transform.rotation, Quaternion.LookRotation(direction), Time.deltaTime * 0.2f);*/
    }
    
    //object를 대상으로 움직이는 함수
    public void walkToObj(GameObject gameObject)
    {
        //TODO: Distance check

        if (Vector3.Distance(gameObject.transform.position, pet.transform.position) > 0.005) {
            Debug.Log("go"); 
            pet.transform.position = Vector3.MoveTowards(pet.transform.position, gameObject.transform.position,0.001f);
            animator.SetInteger("Animation", 0);

            animator.SetBool("Walk", true);

        }
        else
        {
            Debug.Log("over");
            animator.SetInteger("Animation", 0);
            animator.SetBool("Walk", false);
        }
        //TODO: ANI
    }
    void doRandom()
    {
        if (time > 3)
        {
            time = 0;

            animator.SetBool("EatDrink", false);
            animator.SetBool("Sleep", false);

            var num = Random.Range(0, 100);
            if (num < 50)
            {
                condition = Condition.Idle;
            }
            else if (num < 75)
            {
                condition = Condition.EatDrink;
            }
            else
            {
                condition = Condition.Sleep;
            }


            switch (condition)
            {
                case Condition.Idle:
                    animator.SetFloat(condition.ToString(), Random.Range(0f, 1.0f));
                    break;


                case Condition.EatDrink:
                    animator.SetBool(condition.ToString(), true);
                    animator.SetInteger("Animation", Random.Range(-100, 100));
                    break;


                case Condition.Sleep:
                    animator.SetBool("Sleep", true);
                    animator.SetInteger("Animation", Random.Range(-100, 100));
                    break;

            }
        }
        
    }

    void randomIdle()
    {
       

    }
    // Update is called once per frame

    /*
    void Update()
    {
        time += Time.deltaTime;


        //turn(bowl);
        if (time > 5)
        {
            time = 0;
            Debug.Log("HI");
            animator.SetBool("EatDrink", false);
            animator.SetBool("Sleep", false);
            animator.SetFloat("idle", Random.Range(0f, 1.0f));
        }

       
        
    }*/

    void checkPlayer()
    { 

        //거리 확인
        var _distance = Vector3.Distance(pet.transform.position, Camera.main.transform.position);
        //펫이 플레이어보다 앞인지 뒤인지, 플레이어 시선의 벡터와 target의 위치벡터를 내적해서 양수값이면 플레이어의 정면,
        //음수값이면 플레이어의 후면
        var _frontValue = Vector3.Dot(Camera.main.transform.position,pet.transform.position);
        
        
        //2미터

        if(_frontValue < 0 ||Mathf.Abs(_distance) > 2)
        {
            Vector3.MoveTowards(pet.transform.position, Camera.main.transform.position + Camera.main.transform.forward*2,Time.deltaTime);
        }

        //펫이 플레이어보다 뒤에있는지/ 앞에있는지(내적)


    }

   public  void setIndicator(bool b , Vector3 position, Quaternion rotation)
    {
        indicator.SetActive(b);

        if (b) { 
        indicator.transform.position = position;
        indicator.transform.rotation = rotation;
        }
        
    }
   
    enum Condition
    {
        Idle = 0,
        EatDrink = 1,
        Sleep = 2
    }
}
