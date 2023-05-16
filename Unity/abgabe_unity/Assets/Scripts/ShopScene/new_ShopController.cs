using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class new_ShopController : MonoBehaviour
{

    public new_shopso accessory; 
    public new_shopso food;
    public new_shopso housing;
    Dog_Controller dog;

    // Start is called before the first frame update
    void Start()
    {
        dog = FindObjectOfType<Dog_Controller>();

        ShowPreview();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void ShowPreview()
    {
        Debug.Log("1");
        dog.setAccessory("Sunglasses");
        Debug.Log("2");
        dog.setAccessory("Necklace");
        Debug.Log("3");
        dog.setAccessory("Earing");
        Debug.Log("4");
    }
    public void OnAccessoryButtonClick(string itemName)
    {

        var _itemType = accessory.items_new.First(s => s.new_Name.Equals(itemName));
        //if (_itemType. <= shopso.player.Money) {
        _itemType.new_Owned = !_itemType.new_Owned;
        ShowPreview();
        //}
    }
    public void OnFoodButtonClick(string itemName)
    {

        var _itemType = food.items_new.First(s => s.new_Name.Equals(itemName.ToString()));
        //if (_itemType. <= shopso.player.Money) {
        _itemType.new_Owned = true;
        ShowPreview();
        //}
    }
    public void OnHousingButtonClick(string itemName)
    {

        var _itemType = housing.items_new.First(s => s.new_Name.Equals(itemName.ToString()));
        //if (_itemType. <= shopso.player.Money) {
        _itemType.new_Owned = true;
        ShowPreview();
        //}
    }
}
