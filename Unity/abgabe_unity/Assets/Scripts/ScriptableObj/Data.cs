using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//Classes for database
[CreateAssetMenu(menuName = "Data", order = 1)]

public class Data : ScriptableObject
{
    // Start is called before the first frame update

    public int hp;
    public int happy;
    public string dog_name;
    public int hungry;
    public int thirsty;
    

    public PetInfo pet;

}
[System.Serializable]
public class PetInfo
{
    public int hp;
    public int happy;
    public string name;
    public int hungry;
    public int thirsty;
    public bool sunglass, necklace, earling;
}