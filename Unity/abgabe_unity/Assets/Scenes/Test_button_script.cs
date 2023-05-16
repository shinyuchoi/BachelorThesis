using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.SceneManagement;

public class Test_button_script : MonoBehaviour
{
    private LocationService locationService;
    private bool isGPSEnabled = false;
    private float latitude;
    private float longitude;
    // Start is called before the first frame update
    void Start()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            // Android�� ��� ��ġ ���� ��û
            Permission.RequestUserPermission(Permission.FineLocation);
        }

        // ��ġ ���� �ʱ�ȭ
        locationService = Input.location;

        // ��ġ ���� Ȱ��ȭ
        locationService.Start();

        // GPS ��� ���� ���� üũ
        isGPSEnabled = locationService.isEnabledByUser;
    }

    // Update is called once per frame
    void Update()
    {
        // ��ġ ���� ������Ʈ
        latitude = locationService.lastData.latitude;
        longitude = locationService.lastData.longitude;
    }
    public void clickB(string str)
    {
        PlayerPrefs.SetString("to_address","Westerbachstra��e 220, 65936 Frankfurt am Main, Germany");
        SceneManager.LoadScene(str);
    }
    void OnGUI()
    {
        GUI.Label(new Rect(10, 10, 200, 20), "GPS Ȱ��ȭ ����: " + isGPSEnabled.ToString());
        GUI.Label(new Rect(10, 30, 200, 20), "���� ����: " + latitude.ToString());
        GUI.Label(new Rect(10, 50, 200, 20), "���� �浵: " + longitude.ToString());
    }

}


