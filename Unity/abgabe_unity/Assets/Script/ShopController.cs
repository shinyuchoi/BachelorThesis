using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ShopController : MonoBehaviour
{
    public ShopSo shopso;


    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnBuyButtonClick(string itemName)
    {
        
        ItemType _itemType = (ItemType)shopso.items.First(s => s.Name.Equals(itemName.ToString()));
        if (_itemType.price <= shopso.player.Money) {
        _itemType.Owned = true;
        }
    }

}
