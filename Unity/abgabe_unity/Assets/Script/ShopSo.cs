using System.Collections.Generic;
using UnityEngine;

//Classes for database
[CreateAssetMenu(menuName = "Datas/ShopSo", order =1)]



public class ShopSo : ScriptableObject
{
    public List<ItemType> items;
    public PlayerInfo player;
}

//æ∆¿Ã≈€ structor 
[System.Serializable]
public class ItemType
{
    public string Name;
    public GameObject Object;
    public Vector3 Position;
    public Vector3 Rotation;
    public Vector3 Scale;
    public Pet itemOwner;
    public bool Owned;
    public int price;
}

public enum Pet { Rabbit=1, Dog = 2 , Cat = 3 }

[System.Serializable]
public class PlayerInfo
{
    public Pet pet;
    public int Money;
}

public class ItemInfo
{
    public bool bed;
    public bool bowl;
    public bool food;
    public bool water;
    public bool ball;
}
public class PetInfo2
{
    public int hp;
    public int happy;
    public string name;
    public int hungry;
    public int thirsty;
}
public class LocationInfo{
    public float lat, lng;
    public float current_lat, current_lng;
    public float last_lat, last_lng;

}