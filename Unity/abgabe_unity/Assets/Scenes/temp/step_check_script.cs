using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class step_check_script : MonoBehaviour
{
    public Text t;
    // Start is called before the first frame update
    public float threshold = 1.0f; // 걸음 판단 임계값
    private bool isStep = false;   // 걸음 판단 여부
    private float prevY = 0f;      // 이전 Y축 가속도 값
    private float curY = 0f;       // 현재 Y축 가속도 값
    private int stepCount = 0;     // 걸음 횟수

    private void Start()
    {


    }
    void Update()
    {
        // 가속도 센서 값 측정
        Vector3 accel = Input.acceleration;

        // 중력 가속도 제거
        accel.z = 0f;

        // Y축 가속도 값 측정
        curY = accel.y;

        // 이전 가속도 값과의 차이가 임계값 이상인 경우 걸음으로 판단
        if (Mathf.Abs(curY - prevY) > threshold && !isStep)
        {
            isStep = true;
            stepCount++;
        }

        // 걸음 판단 여부 초기화
        if (Mathf.Abs(curY - prevY) < threshold && isStep)
        {
            isStep = false;
        }

        // 이전 가속도 값 업데이트
        prevY = curY;
        t.text = stepCount+"";
    }

}
