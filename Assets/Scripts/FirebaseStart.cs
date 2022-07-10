using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Analytics;
using Firebase.Extensions;

public class FirebaseStart : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Firebase.Analytics.FirebaseAnalytics
   .LogEvent(Firebase.Analytics.FirebaseAnalytics.EventLogin);
    }

    public void logEvent()
    {
        Firebase.Analytics.FirebaseAnalytics.LogEvent("custom_progress_event", "percent", 0.4f);

    }

    

}
