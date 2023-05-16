using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DogUI_Button_Controller : MonoBehaviour
{

    [SerializeField] Button FeedButton;
    [SerializeField] Button WaterButton;
    [SerializeField] Button SnackButton;

    Main_DogController dogController;

    private void Start()
    {
        FeedButton.onClick.AddListener(() => Feed());
        dogController = FindObjectOfType<Main_DogController>();

    }

    void Feed()
    {
        //dogController.giveFood();
    }
}

