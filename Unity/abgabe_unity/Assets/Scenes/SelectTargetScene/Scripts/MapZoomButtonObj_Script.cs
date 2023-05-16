using ARLocation.MapboxRoutes.SampleProject;
using Mapbox.Unity.Map;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MapZoomButtonObj_Script : MonoBehaviour
{
    public AbstractMap zoom;
    public MenuController map;
    public bool wide;
    public GameObject img;
    public Slider progress_slider;
    public GameObject compass_image;
    public Image water_blocker;
    bool b_press_more_button;
    public GameObject more_button_popup, emergency_popup;
    private float sceneTime, update_timer, direction_check_timer;
    public Text detail_text;
    public GameObject result_panel;
    public Transform lookatDog;
    private int tapCount;
    private float startTime;
    bool touch_start;

    //distance floats

    float rest_distance, total_distance, traveled_distance;
    // Start is called before the first frame update
    void Start()
    {
        sceneTime = 0f;

        wide = false;
        update_timer = 0;
        b_press_more_button = false;
    }

    // Update is called once per frame
    void Update()
    {
        sceneTime += Time.deltaTime;

        rest_distance = PlayerPrefs.GetFloat("rest_distance");

        update_timer += Time.deltaTime;
        if (update_timer > 2f)
        {
            Debug.Log("REST :::::::::::" + rest_distance);

            update_timer = 0;
            if (b_press_more_button)
            {
                show_detail();
            }
            if (0<rest_distance&&rest_distance < 30)
            {
                result_panel.SetActive(true);
                
            }
        }

        //
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            tapCount++;
            if (tapCount == 1)
            {
                startTime = Time.time;
                touch_start = true;
            }
        }

        if (Time.time - startTime >= 2f&&touch_start)
        {
            if (tapCount >= 3)
            {
                emergency_popup.SetActive(true);
                Debug.Log("::::3 taps within 2 seconds detected.");
                
            }
            else
            {
                Debug.Log("::::Did not detect 3 taps within 2 seconds.");
            }
            touch_start = false;
            tapCount = 0;
        }



    }

    void show_detail()
    {
        total_distance = PlayerPrefs.GetFloat("total_distance");
        traveled_distance = total_distance - rest_distance;
        float a = Mathf.Max(0f, traveled_distance);

        detail_text.text = more_button_get_time() + "\n\n" + cal_distance() + " km\n\n" + cal_calories() + " Cal";

        progress_slider.value = 1f - (rest_distance / total_distance);



        Vector3 dog_direction = new Vector3(PlayerPrefs.GetFloat("direction_x"),0, PlayerPrefs.GetFloat("direction_z"));

        lookatDog.LookAt(dog_direction);
        
        compass_image.transform.localEulerAngles = new Vector3(0, 0, -lookatDog.localEulerAngles.y);

    }
    float cal_calories()
    {
        return Mathf.Round((sceneTime / 60f) * 4f);
    }

    string cal_distance()
    {
        return "" + Mathf.Round((traveled_distance / 1000f) * 100f) / 100f;
    }
    string more_button_get_time()
    {
        float minutes = Mathf.Floor(sceneTime / 60f);
        float seconds = Mathf.Floor(sceneTime % 60f);

        Debug.Log("Elapsed Time: " + minutes.ToString("00") + " : " + seconds.ToString("00") + "");
        return minutes.ToString("00") + " min";

    }

    public void pressButton()
    {
        if (wide)
        {
            zoom.SetZoom(16);
            map.MapSize = 500;
        }
        else
        {
            zoom.SetZoom(14);
            map.MapSize = 800;

        }
        wide = !wide;

        more_button_popup.SetActive(wide);
        b_press_more_button = true;
    }
    public void emergency_able()
    {
        emergency_popup.SetActive(true);
    }

    public void more_button_disable()
    {
        b_press_more_button = false;
        more_button_popup.SetActive(false);
    }
    public void emergency_disable()
    {
        emergency_popup.SetActive(false);
    }
    public void one_more_round()
    {
        Debug.Log("One more round!!!");
        SceneManager.LoadScene(1);

    }
    public void return_to_home()
    {
        PlayerPrefs.SetString("targetaddress", PlayerPrefs.GetString("home_address"));
        Debug.Log("RETURN TO HOME!!!");
        SceneManager.LoadScene(2);
    }

    public void back_to_main()
    {
        Debug.Log("back_to_main!!!");
        SceneManager.LoadScene(0);
    }
    public void MakeCall()
    {
        Debug.Log("CALL::::::");
        Application.OpenURL("tel://" + "112");
    }

}
