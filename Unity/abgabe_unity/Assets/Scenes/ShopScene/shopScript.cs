using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class shopScript : MonoBehaviour
{
    bool debug_mode = false;

    public GameObject tutorial;
    //ui components
    public GameObject[] acc_list;
    public GameObject[] soldOut_acc_list;
    int[] acc_prices = { 10, 20, 10, 10 };
    string[] item_name = { "EarringR", "Sunglasses", "EarringL", "Necklace" };
    int[] food_prices = { 0, 0, 3, 1 };
    public GameObject[] food_list;
    public GameObject dog;

    //on ui
    public Text UI_happy_text, UI_food_count_text, UI_snack_count_text;

    public GameObject popup;

    // Start is called before the first frame update
    private bool[] b_acc_list;
    private bool[] b_food_list;
    bool is_tutorial, b_popup;
    string happy_string, food_count_string, snack_count_string;


    //rotate
    private float rotationSpeed = 30f;
    private bool rotateRight = false;
    private Quaternion startRotation;
    private Quaternion targetRotation;
    private float lerpTime = 2f;
    private float currentLerpTime;


    void Start()
    {
        b_acc_list = new bool[4];
        b_food_list = new bool[4];
        if (is_tutorial)
        {
            b_food_list[0] = true;
            b_food_list[1] = true;
            b_food_list[2] = false;
            b_food_list[3] = false;
        }
        if (debug_mode)
        {
            for (int i = 0; i < acc_list.Length; i++)
            {
                b_acc_list[i] = false;
                acc_list[i].SetActive(b_acc_list[i]);
                soldOut_acc_list[i].SetActive(b_acc_list[i]);
            }

        }
        else
        {
            //get acc info
            b_acc_list[0] = PlayerPrefs.GetInt("EarringR") != 0;
            b_acc_list[1] = PlayerPrefs.GetInt("Sunglasses") != 0;
            b_acc_list[2] = PlayerPrefs.GetInt("EarringL") != 0;
            b_acc_list[3] = PlayerPrefs.GetInt("Necklace") != 0;

            //set active item
            for (int i = 0; i < acc_list.Length; i++)
            {
                acc_list[i].SetActive(b_acc_list[i]);
                soldOut_acc_list[i].SetActive(b_acc_list[i]);
            }
            UI_happy_text.text = PlayerPrefs.GetFloat("happy") + "";
            UI_food_count_text.text = PlayerPrefs.GetInt("nr_food") + "";
            UI_snack_count_text.text = PlayerPrefs.GetInt("nr_bone") + "";
            Debug.Log("start happy  =  " + PlayerPrefs.GetFloat("happy"));
            Debug.Log("start sunglass  =  " + PlayerPrefs.GetInt("Sunglasses"));


        }

        happy_string = UI_happy_text.text;
        food_count_string = UI_food_count_text.text;
        snack_count_string = UI_snack_count_text.text;

        //rotation
        //startRotation = dog.transform.rotation;
        //targetRotation = Quaternion.Euler(0f, 90f, 0f);

    }

    // Update is called once per frame
    void Update()
    {

        if (debug_mode)
        {
            Debug.Log("=======DEBUG MODE=======");



            /*
                    currentLerpTime += Time.deltaTime;

                    // 회전 시간이 lerpTime을 초과하면 회전 완료
                    if (currentLerpTime > lerpTime)
                    {
                        currentLerpTime = 0f;
                        rotateRight = !rotateRight;

                        // 회전 방향에 따라 목표 회전 상태 변경
                        if (rotateRight)
                            targetRotation = Quaternion.Euler(0f, 90f, 0f);
                        else
                            targetRotation = Quaternion.Euler(0f, 0f, 0f);
                    }

                    // 보간 시간 비율 계산
                    float t = currentLerpTime / lerpTime;

                    // 회전 방향에 따라 보간하여 회전
                    if (rotateRight)
                        dog.transform.rotation = Quaternion.Slerp(startRotation, targetRotation, t);
                    else
                        dog.transform.rotation = Quaternion.Slerp(targetRotation, startRotation, t);
            */
        }

    }

    public void remove_tutorial()
    {
        tutorial.SetActive(false);
    }

    public void soldout(int n)
    {



        Debug.Log(item_name[n] + "BeforeBuy " + PlayerPrefs.GetInt(item_name[n]));



        if (b_acc_list[n])
        {
            sellItem(n);
            b_acc_list[n] = !b_acc_list[n];
            acc_list[n].SetActive(b_acc_list[n]);

            soldOut_acc_list[n].SetActive(b_acc_list[n]);

        }
        else
        {
            if (buyItem(n))
            {
                b_acc_list[n] = !b_acc_list[n];
                acc_list[n].SetActive(b_acc_list[n]);

                soldOut_acc_list[n].SetActive(b_acc_list[n]);
            }

        }
    }


    bool buyItem(int n)
    {

        int price = acc_prices[n];
        if (Int32.TryParse(happy_string, out int happyValue))
        {
            if (happyValue >= price)
            {
                happyValue -= price;
                happy_string = happyValue.ToString();
                UI_happy_text.text = happy_string;

                //TODO
                PlayerPrefs.SetFloat("happy", happyValue);

                PlayerPrefs.SetInt(item_name[n], 1);

                //Debug.Log("happyValue  =  " + PlayerPrefs.GetFloat("happy"));
                Debug.Log(item_name[n] + "--- " + PlayerPrefs.GetInt(item_name[n]));

                return true;
            }
            else
            {
                popup.SetActive(true);
                return false;
            }
        }
        return false;
    }
    void sellItem(int n)
    {
        int price = acc_prices[n];

        if (Int32.TryParse(happy_string, out int happyValue))
        {
            PlayerPrefs.SetInt(item_name[n], 0);

            happyValue += price;
            happy_string = happyValue.ToString();
            UI_happy_text.text = happy_string;
            PlayerPrefs.SetFloat("happy", happyValue);
            //Debug.Log("happyValue  =  " + PlayerPrefs.GetFloat("happy"));
        }
    }
    public void set_popup_false()
    {
        popup.SetActive(false);
    }
    public void buy_food(int i)
    {
        if (b_food_list[i])
        {
            //with tutorial
        }
        else
        {
            if (Int32.TryParse(happy_string, out int happyValue))
            {
                if (happyValue >= food_prices[i])
                {
                    happyValue -= food_prices[i];
                    happy_string = happyValue.ToString();
                    UI_happy_text.text = happy_string;

                    PlayerPrefs.SetFloat("happy", happyValue);
                    //Debug.Log("happyValue  =  " + PlayerPrefs.GetFloat("happy"));

                    if (i == 2)
                    {

                        int snack_counter = int.Parse(UI_snack_count_text.text);
                        snack_counter++;

                        PlayerPrefs.SetInt("nr_bone", snack_counter);
                        //Debug.Log("nr_bone  =  " + PlayerPrefs.GetInt("nr_bone"));

                        UI_snack_count_text.text = snack_counter + "";
                    }
                    if (i == 3)
                    {
                        int food_counter = int.Parse(UI_food_count_text.text);
                        food_counter++;

                        PlayerPrefs.SetInt("nr_food", food_counter);
                        //Debug.Log("nr_food  =  " + PlayerPrefs.GetInt("nr_food"));

                        UI_food_count_text.text = food_counter + "";
                    }
                }
                else
                {
                    popup.SetActive(true);
                }
            }
        }
    }

    public void back_button()
    {
        SceneManager.LoadScene(0);

    }

}
