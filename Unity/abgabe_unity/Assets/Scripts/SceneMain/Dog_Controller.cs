using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.AI;

/// <summary>
/// Define dog's behaviors
/// Direction : left-0-right
/// </summary>
public class Dog_Controller : MonoBehaviour
{

    private NavMeshAgent navMeshAgent;
    Animator animator;
    bool new_activity, interrupt;
    float activity_Timer;
    readonly float MAX_TIME = 5;


    public new_shopso accessories;
    public new_shopso foods;
    public new_shopso housing;
    GameObject boxTarget;
    [SerializeField]
    float detailDecider;


    public void Idle()
    {
        animator.SetFloat("idle", Random.Range(0f, 1.0f));
    }

    public void Move(GameObject obj)
    {
        animator.SetBool("Walk",true);
        
    }
    
    public void Sleep()
    {
        Debug.Log("sleepingzzz");
        animator.SetBool("Sleep", true);
    }
    public void SleepLong()
    {

    }
    /// <summary>
    /// Sit dog.
    /// </summary>
    /// <param name="obj">Look at </param>
    public void Sit(GameObject obj)
    {
        Debug.Log("SIIITting");
        transform.LookAt(obj.transform);
        animator.SetBool("Sit", true);
        
        //while (activity_Timer > MAX_TIME || new_activity == true)
        //{
        //   activity_Timer += 1.1f;
        //}

    }
    public void SitAndLookAround()
    {
        animator.SetBool("SitAndLookAround", true);
    }

    public void Lie()
    {
        animator.SetBool("Lie", true);

    }
    public void Eat()
    {
        animator.SetBool("Eat", true);

    }
    // Start is called before the first frame update

    private void Start()
    {
        new_activity = false;
        animator = GetComponent<Animator>();
        navMeshAgent = GetComponent<NavMeshAgent>();
        activity_Timer = 0f;
        setReset();

    }
    void setNavTarget(GameObject obj)
    {

    }
    public Animator getAnimator()
    {
        return animator;
    }

    /// <summary>
    /// doing nothing
    /// </summary>

    /// <summary>
    /// set target box. need to call once
    /// </summary>
    /// <param name="target">abc</param>
    public void setBoxTarget(GameObject target)
    {
        boxTarget = target;
    }


    /// <summary>
    /// Spawn prefab and set default setting
    /// </summary>
    public void spawn()
    {
        Vector3 lookpos = Camera.main.transform.position - transform.position;
        lookpos.y = 0;
        transform.LookAt(lookpos);

    }

    /// <summary>
    /// Sit dog
    /// </summary>
    /// <param name="obj">object to look</param>
    /// <returns>My result</returns>


    public bool Turn(GameObject target)
    {
        var lookPos = target.transform.position - transform.position;
        lookPos.y = 0;
        var rotation = Quaternion.LookRotation(lookPos);

        transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 0.8f);

        //decide left right
        Vector3 forward = transform.forward;
        Vector3 toOther = target.transform.position - transform.position;
        animator.SetBool("Turn", true);
        //Vector3 tmp = Vector3.Cross(forward, toOther);


        Vector3 petUpv3 = transform.up;

        float tmp = Vector3.Dot(petUpv3, Vector3.Cross(forward, toOther));
        // < 0 =>R
        if (tmp < -0.3)
        {
            animator.SetInteger("Animation", 0);
        }
        else if (tmp > 0.3)
        {
            animator.SetInteger("Animation", 1);
        }
        else
        {
            animator.SetBool("Turn", false);
            return true;
        }
        return false;
    }


    //애니메이터 걷는 모양 설정
    public void setWalk()
    {
        animator.SetInteger("Animation", 0);
        animator.SetBool("Walk", true);

    }


    //reset animator
    public void setReset()
    {
        activity_Timer = 0f;
        animator.SetInteger("Animation", 0);
        animator.SetBool("Walk", false);
        animator.SetBool("EatDrink", false);
        animator.SetBool("Sleep", false);
        animator.SetBool("Turn", false);
        animator.SetBool("Sit", false);
        animator.SetBool("Lie", false);
        animator.SetBool("SitAndLookAround", false);
        animator.SetBool("BellySleep", false);

    }


    public void setAccessory(string name)
    {

        var _acc = accessories.items_new.First(s => s.new_Name.Contains(name));
        foreach (var mr in GameObject.FindWithTag(name).GetComponentsInChildren<MeshRenderer>())
        {
            mr.enabled = _acc.new_Owned;
        }

        //_acc.new_Object.SetActive(b);
        //sunglasses.SetActive(f);
    }
    public void setFood(string name)
    {
        var _food = accessories.items_new.First(s => s.new_Name.Contains(name));
        GameObject.FindGameObjectWithTag(name).SetActive(_food.new_Owned);
        //sunglasses.SetActive(f);
    }
    public void setHousing(string name)
    {
        var _housing = accessories.items_new.First(s => s.new_Name.Contains(name));
        GameObject.FindGameObjectWithTag(name).SetActive(_housing.new_Owned);
        //sunglasses.SetActive(f);
    }


}
