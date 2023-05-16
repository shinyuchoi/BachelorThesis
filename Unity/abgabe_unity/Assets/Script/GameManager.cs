using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //펫 애니메이터
    public Animator petAnim;

    //arCam
    Camera arCam;

    //pet's original direction;
    Vector3 petInitialDirection;

    //my previous position
    Vector3 prePosition;

    float time = 0f;

    [SerializeField]
    Text debugText;

    Vector3 petOriginalPosition;
    float lerpValue = 0.0f;
    bool isLooking = false;
    bool isMoving = false;
    
    //sensitivity of moving
    float isMovingValue = 0.2f;

    //shop ScriptableObject
    public ShopSo shopSo;

    // Start is called before the first frame update
    void Start()
    {
        arCam = Camera.main;
        prePosition = arCam.transform.position;
    }



    // Update is called once per frame
    void Update()
    {

        debugText.text = petAnim.transform.position.ToString();
        //debugText.text = arCam.transform.position.ToString();

        time += Time.deltaTime;

        //1초뒤에 0.5 이상 차이나면 animation 실행
        if (time > 1)
        {
            time = 0;

            if (Vector3.Distance(arCam.transform.position, prePosition) > isMovingValue)
            {
                isMoving = true;
                PlayPetAnimation(3);
            }

            //PlayPetAnimation(Vector3.Distance(arCam.transform.position, prePosition) > 0.2f ? 3 : 0);
            prePosition = arCam.transform.position;

        }

        //자이로스코프
        //if(){
    

        //180도 돌기
        //petAnim.transform.localEulerAngles = new Vector3(0, 180, 0);

        //카메라 보기
        //petAnim.transform.LookAt(arCam.transform);

        //천천히 돌기
        //Vector3.Lerp()

        lerpValue += 0.12f;
        Vector3 tmp = Vector3.Lerp(new Vector3(0, 0, 0), arCam.transform.position, lerpValue);
        petAnim.transform.localEulerAngles = tmp;

        if (isMoving)
        {
            //show UI
        }
    }
    void turnToMe(float leapValue)
    {
        Vector3 tmp = Vector3.Lerp(petAnim.transform.position, arCam.transform.position, leapValue);
        petAnim.transform.LookAt(tmp);

    }
    //set animation
    public void PlayPetAnimation(int animationNo)
    {

        petAnim.SetInteger("animation", animationNo);
    }


    //TODO Param
    public void ReachOnPoint()
    {
        //TODO 포인트 계산식
        shopSo.player.Money += 1000;
    }
}
