using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System;
using UnityEngine.SceneManagement;

public class Graph_Script : MonoBehaviour
{

    public GameObject graphcontainer;

    public GameObject dotprefab;
    public GameObject dotRed;
    public Text weekly;
    public Text daily;
    public Text date_daily;
    float total_distance;
    int total_steps, total_cals;
    public GameObject daily_report_panel;
    List<Activity> activities;
    List<GameObject> fish;
    bool finish;
    int[] steps;
    int[] calories;
    // Start is called before the first frame update
    private void Start()
    {
        fish = new List<GameObject>();
        calories = new int[7];
        steps = new int[] { 4865, 1234, 0, 2030, 0, 0, 3970 };
        var l = GetComponent<LineRenderer>();


        StartCoroutine(GetRequest("http://209.250.235.195:9000/activities/1"));
    }
    private Vector3 CreateCircle(int i, int steps)
    {
        int max = 375;
        int max_steps = 6000;

        float x = -375 + (((float)steps / max_steps) * 750);
        if (x >= 375)
        {
            x = 375;
        }
        return new Vector3(x, 600 - (i * 200), 0);

    }
    // Update is called once per frame
    IEnumerator GetRequest(string uri)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
        {
            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Error: " + webRequest.error);
            }
            else
            {
                activities = JsonConvert.DeserializeObject<List<Activity>>(webRequest.downloadHandler.text);
                activities.Reverse();
                int i = 0;
                foreach (Activity activity in activities)
                {
                    Debug.Log("Date: " + activity.date);
                    Debug.Log("Distance: " + activity.distance);
                    activities[i].duration = get_duration(activity.distance);
                    activities[i].steps = get_steps(activity.distance);
                    calories[i] = (int)(activity.duration * 0.72);
                    Debug.Log("Duration: " + activity.duration);
                    Debug.Log("Steps: " + activity.steps);
                    Debug.Log("-------------------");
                    total_distance += activity.distance;
                    total_cals += (int)(activity.duration * 0.72);
                    total_steps += activity.steps;
                    Vector3 tmp = CreateCircle(i, activity.steps);
                    if (tmp.x <= 0)
                    {
                        fish.Add(Instantiate(dotRed) as GameObject);
                    }
                    else
                    {
                        fish.Add(Instantiate(dotprefab) as GameObject);
                    }
                    fish[i].transform.SetParent(graphcontainer.transform, false);
                    fish[i].transform.localPosition = tmp;

                    i++;
                }
                fish.Add(Instantiate(dotprefab) as GameObject);

                Debug.Log("TOTAL DISTANCE" + total_distance);
                Debug.Log("TOTAL total_cals" + total_cals);
                Debug.Log("TOTAL total_steps" + total_steps);
            }


            weekly.text = weeklyReport();



        }
    }
    void old()
    {
        fish = new List<GameObject>();
        for (int i = 0; i < 7; i++)
        {
            Vector3 tmp = CreateCircle(i, steps[i]);
            if (tmp.x <= 0)
            {
                fish.Add(Instantiate(dotRed) as GameObject);
            }
            else
            {
                fish.Add(Instantiate(dotprefab) as GameObject);
            }
            fish[i].transform.SetParent(graphcontainer.transform, false);
            fish[i].transform.localPosition = tmp;

        }

    }

    string date_for_daily(int n )
    {
        return "D-" + (6 - n) + "\n" + activities[n].date;
    }
    string weeklyReport()
    {
        return (float)(Math.Round(total_distance, 1)) +" km\n\n\n"+total_steps+"\n\n\n"+total_cals+" Cal";
    }

    public void show_Daily_report(int n)
    {
        daily_report_panel.SetActive(true);
        date_daily.text = date_for_daily(n);
        daily.text = DailyReport(n);
    }
    public void close_daily_report()
    {
        daily_report_panel.SetActive(false);
    }
    string DailyReport(int n)
    {
        return "\n"+ activities[n].distance + " km\n\n" + activities[n].steps +"\n\n" + (activities[n].duration/60)+"\n\n"+ calories[n] + " Cal";
    }

    ///in seconds
    int get_duration(float d)
    {
        return (int)((d * 1000 * 100) / 130);
    }

    //times
    int get_steps(float d)
    {
        return (int)((d * 1000 * 100) / 42);
    }
    public void back_Button()
    {
        SceneManager.LoadScene(0);
    }
}

[System.Serializable]
public class Activity
{
    public string date;
    public float distance;
    public int duration;
    public int steps;
}