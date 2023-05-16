using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Random = System.Random;


public class MainController : MonoBehaviour
{
    private ARRaycastManager raycastManager;
    private List<ARRaycastHit> hit = new List<ARRaycastHit>();
    //public Transform petPosition;
    //public Animator petAnimator;
    public GameObject pet;
    Random r;

    // Start is called before the first frame update
    /*IEnumerator Start()
    {
        yield return new WaitUntil(() => ContentManager.instance != null);
        var pet = Instantiate(ContentManager.instance.selectCharacter, petPosition);
        pet.transform.localScale = Vector3.one;

        petAnimator = pet.GetComponent<Animator>();

       
        while (true)
        {
            petAnimator.speed = 0.7f;
            

            r = new Random();
            int rInt = r.Next(0, 8);
            // int rInt = 2;
            
            if((22<=get_time()&&get_time()<=24)||(0<=get_time()&&get_time()<=7))
            {
                rInt = 5;
            }
            petAnimator.SetInteger("animation", rInt);
            //walk
            if (rInt == 1)
            {
                int repeatNumber = 0;
                while (repeatNumber < 5)
                {

                }
                
            }
            //run
            else if (rInt == 2)
            {
                //petPosition.transform.localPosition = new Vector3(petPosition.transform.localPosition.x , petPosition.transform.localPosition.y + 1f, petPosition.transform.localPosition.z - 0.05f );
                Debug.Log(petPosition.transform.localPosition.ToString());
            }
            


            yield return new WaitForSeconds(3);
        }
    }
    */
    // Update is called once per frame
    void Update()
    {
        Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);

        //raycastManager.Raycast(screenSize, hit, TrackableType.PlaneWithinPolygon);
        //Instantiate(pet, hit[0].pose.position, Camera.main.transform.rotation);

    }

    public int get_time()
    {
        return 3 - int.Parse(System.DateTime.Now.ToString("HH"));
    }
    public void ChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

}
