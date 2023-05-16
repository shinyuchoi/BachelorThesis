using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Accessory : MonoBehaviour
{

    public ShopSo shopso;
    public Pet itemowner;
    public Transform itemPosition;
    // Start is called before the first frame update
    void Start()
    {
        
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
 public void setAccessory(string itemName)
    {
        


        ItemType _itemType = (ItemType)shopso.items.First(s=>s.Name.Equals(itemName.ToString()));

        //생성 위치 회전값 크기
        var _item = Instantiate(_itemType.Object, itemPosition);
        _item.transform.localPosition = _itemType.Position;
        _item.transform.localEulerAngles = _itemType.Rotation;
        _item.transform.localScale = _itemType.Scale;
    }
}
