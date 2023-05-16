using ARLocation.MapboxRoutes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DebugTool_Script : MonoBehaviour
{
    // Start is called before the first frame update
    public MapboxRoute tool;
    public Text t;
    void Start()
    {
        t.text = tool.Settings.RouteSettings.From+"--->";
        t.text += tool.Settings.RouteSettings.To.Query;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
