using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogInteraction_Script : MonoBehaviour
{

    GameObject dog;
    // Start is called before the first frame update

    public string tmp;
    
    public bool setDog(GameObject g)
    {
        dog = g;
        return true;
    }
    public bool getDog()
    {
        return dog == null;
    }
    // Update is called once per frame
    void Update()
    {
        
    }

}
