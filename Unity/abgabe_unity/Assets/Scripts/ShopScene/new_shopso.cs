using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(menuName = "Datas/new_ShopSo", order = 1)]
public class new_shopso : ScriptableObject
{
    public List<new_ItemType> items_new;

}
[System.Serializable]
public class new_ItemType
{
    public string new_Name;
    public GameObject new_Object;
    public Vector3 new_Position;
    public Vector3 new_Rotation;
    public Vector3 new_Scale;
    public bool new_Owned;
}



