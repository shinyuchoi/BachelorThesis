using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContentManager : MonoBehaviour
{
    //TODO: ó�� ȭ�鿡 �����ϴ�.
    public static ContentManager instance;

    public ShopSo shopso;


    public GameObject selectCharacter;
    public GameObject selectTarget;
    // Start is called before the first frame update
    void Start()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }







    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
