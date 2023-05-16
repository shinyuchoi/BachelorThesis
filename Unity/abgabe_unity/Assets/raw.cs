using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class raw : MonoBehaviour
{
    private Vector2 fingerDown;
    private Vector2 fingerUp;
    public bool detectSwipeOnlyAfterRelease = false;
    public Text t;
    public float SWIPE_THRESHOLD = 20f;

    // Update is called once per frame
    void Update()
    {
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                fingerUp = touch.position;
                fingerDown = touch.position;
            }

            // Detects Swipe while finger is still moving
            if (touch.phase == TouchPhase.Moved)
            {
                if (!detectSwipeOnlyAfterRelease)
                {
                    fingerDown = touch.position;
                    CheckSwipe();
                }
            }

            // Detects swipe after finger is released
            if (touch.phase == TouchPhase.Ended)
            {
                fingerDown = touch.position;
                CheckSwipe();
            }
        }
    }

    void CheckSwipe()
    {
        // Check if vertical swipe
        if (VerticalMove() > SWIPE_THRESHOLD && VerticalMove() > HorizontalMove())
        {
            if (fingerDown.y - fingerUp.y > 0)
            {
                t.text = "up";
                Debug.Log("Swipe Up");
            }
            else if (fingerDown.y - fingerUp.y < 0)
            {
                t.text = "down";

                Debug.Log("Swipe Down");
            }
            fingerUp = fingerDown;
        }

        // Check if horizontal swipe
        else if (HorizontalMove() > SWIPE_THRESHOLD && HorizontalMove() > VerticalMove())
        {
            if (fingerDown.x - fingerUp.x > 0)
            {
                t.text = "right";

                Debug.Log("Swipe Right");
            }
            else if (fingerDown.x - fingerUp.x < 0)
            {
                t.text = "left";

                Debug.Log("Swipe Left");
            }
            fingerUp = fingerDown;
        }
    }

    float VerticalMove()
    {
        return Mathf.Abs(fingerDown.y - fingerUp.y);
    }

    float HorizontalMove()
    {
        return Mathf.Abs(fingerDown.x - fingerUp.x);
    }

}
