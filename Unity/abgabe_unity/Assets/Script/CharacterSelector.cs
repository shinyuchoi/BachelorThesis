using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//Scene : select character Script

public class CharacterSelector : MonoBehaviour
{
    public GameObject[] characters;
    public RectTransform content;
    public int charIdx;


    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (content.anchoredPosition.x != -700 * charIdx)
        {
            var new_X = Mathf.Lerp(content.anchoredPosition.x, -700 * charIdx, Time.deltaTime * 10);
            content.anchoredPosition = new Vector2(new_X, 0);
        }
    }

    public void SelectCharacter(int idx)
    {
        ContentManager.instance.selectCharacter = characters[idx];
        charIdx = idx;
    }

    public void moveNext(bool isLeft)
    {
        charIdx = (isLeft ? charIdx - 1 : charIdx + 1);
        if (charIdx >= characters.Length) charIdx = characters.Length - 1;
        if (charIdx <= 0) charIdx = 0;

    }
    public void ChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }


}
