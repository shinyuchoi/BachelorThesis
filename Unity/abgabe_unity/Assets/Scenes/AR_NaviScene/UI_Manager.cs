using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UI_Manager : MonoBehaviour
{
    public GameObject more_button_popup, emergency_popup;
    private float sceneTime;

    // Start is called before the first frame update
    void Start()
    {
        sceneTime = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        sceneTime += Time.deltaTime;
        
    }



    string more_button_get_time()
    {
        float minutes = Mathf.Floor(sceneTime / 60f);
        float seconds = Mathf.Floor(sceneTime % 60f);

        Debug.Log("Elapsed Time: " + minutes.ToString("00") + " : " + seconds.ToString("00") + "");
        return minutes.ToString("00") + " : " + seconds.ToString("00");

    }




    public void more_button_able()
    {
        more_button_popup.SetActive(true);
    }
    public void emergency_able()
    {
        emergency_popup.SetActive(true);
    }

    public void more_button_disable()
    {
        more_button_popup.SetActive(false);
    }
    public void emergency_disable()
    {
        emergency_popup.SetActive(false);
    }

}
