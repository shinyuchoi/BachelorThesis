using Newtonsoft.Json.Linq;
using System.Collections;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


public class MainUIControllerScript : MonoBehaviour
{
    // Start is called before the first frame update

    /*public Image[] hearts;
    public Image[] food;
    public Image[] happy;*/
    string f_food, f_hydration, f_happy;
    public Text food, hydration, happy;

    private float devider = 20;
    private float t;
    // Update is called once per frame
    Vector3 mousePrePosition = Vector3.zero;
    Vector3 mouseDeltaPosition = Vector3.zero;
    float deltaValue = 0f;
    float time;
    bool dogIsTouched;

    void Start()
    {
        f_food = "a";
        setValue();
        t = 0;
        dogIsTouched = false;
    }
    private void Update()
    {
        /*t += Time.deltaTime;
        if (t > 3)
        {
            t = 0;
            setValue();
        }
        time = 0f;*/



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
                time = 0f;
            
            }
        }
        if (dogIsTouched)
        {
            time += Time.deltaTime;
            if (time < 10f)
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
                            Debug.Log("SIIIT");

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
                        Debug.Log("}}}}SIIIT");
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
            }
            
        }
    }




    public void setValue()
    {
        StartCoroutine(GetRequest("http://209.250.235.195:9000/pet_status"));
        while (true)
        {
            if (f_food != "a") break;
        }
        happy.text = f_happy;
        hydration.text = f_hydration;
        food.text = f_food;
    }

    public int getNumberOfGuage(float value)
    {
        return (int)(value / 20);
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

                //setValue(food, json["food"].ToString());
                //setValue(hydration, json["water"].ToString());
                //setValue(happy, json["happy"].ToString());


                // Debug.Log(json.ToString());
            }
            response.Close();
        });
    }





   





}
