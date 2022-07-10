using System.Collections;
using System.Collections.Generic;
using OneSignalSDK;
using UnityEngine;

public class onesignalDemo : MonoBehaviour
{


    private void Start()
    {
        OneSignal.Default.Initialize("ce9d1c34-e8d7-4d23-8eca-7aa1df50eef2");
    }

}
