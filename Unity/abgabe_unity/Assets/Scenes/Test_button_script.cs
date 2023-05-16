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
            // Android의 경우 위치 권한 요청
            Permission.RequestUserPermission(Permission.FineLocation);
        }

        // 위치 서비스 초기화
        locationService = Input.location;

        // 위치 서비스 활성화
        locationService.Start();

        // GPS 사용 가능 여부 체크
        isGPSEnabled = locationService.isEnabledByUser;
    }

    // Update is called once per frame
    void Update()
    {
        // 위치 정보 업데이트
        latitude = locationService.lastData.latitude;
        longitude = locationService.lastData.longitude;
    }
    public void clickB(string str)
    {
        PlayerPrefs.SetString("to_address","Westerbachstraße 220, 65936 Frankfurt am Main, Germany");
        SceneManager.LoadScene(str);
    }
    void OnGUI()
    {
        GUI.Label(new Rect(10, 10, 200, 20), "GPS 활성화 여부: " + isGPSEnabled.ToString());
        GUI.Label(new Rect(10, 30, 200, 20), "현재 위도: " + latitude.ToString());
        GUI.Label(new Rect(10, 50, 200, 20), "현재 경도: " + longitude.ToString());
    }

}


