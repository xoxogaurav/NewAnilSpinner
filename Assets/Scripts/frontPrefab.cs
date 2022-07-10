using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class frontPrefab : MonoBehaviour
{

    public void OnCompletedScratch()
    {
        ScratchManager.s.ScratchCompletedReward();
    }

}
