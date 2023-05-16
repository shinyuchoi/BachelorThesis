using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class step_check_script : MonoBehaviour
{
    public Text t;
    // Start is called before the first frame update
    public float threshold = 1.0f; // ���� �Ǵ� �Ӱ谪
    private bool isStep = false;   // ���� �Ǵ� ����
    private float prevY = 0f;      // ���� Y�� ���ӵ� ��
    private float curY = 0f;       // ���� Y�� ���ӵ� ��
    private int stepCount = 0;     // ���� Ƚ��

    private void Start()
    {


    }
    void Update()
    {
        // ���ӵ� ���� �� ����
        Vector3 accel = Input.acceleration;

        // �߷� ���ӵ� ����
        accel.z = 0f;

        // Y�� ���ӵ� �� ����
        curY = accel.y;

        // ���� ���ӵ� ������ ���̰� �Ӱ谪 �̻��� ��� �������� �Ǵ�
        if (Mathf.Abs(curY - prevY) > threshold && !isStep)
        {
            isStep = true;
            stepCount++;
        }

        // ���� �Ǵ� ���� �ʱ�ȭ
        if (Mathf.Abs(curY - prevY) < threshold && isStep)
        {
            isStep = false;
        }

        // ���� ���ӵ� �� ������Ʈ
        prevY = curY;
        t.text = stepCount+"";
    }

}
