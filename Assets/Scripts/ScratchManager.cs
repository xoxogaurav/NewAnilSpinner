using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScratchManager : MonoBehaviour
{
    public static ScratchManager s;

    int[] winPoints = { 30, 35, 40, 45, 50, 55, 60, 65, 70 };
    int finalWinPoint;
    public GameObject parent,scratchFront;
    public Text winAmt;

    private void Awake()
    {
        s = this;
    }

    private void Start()
    {
        setScratchCard();
        Instantiate(scratchFront, parent.transform);

    }

    public void setScratchCard()
    {
        finalWinPoint = winPoints[Random.Range(0, winPoints.Length)];
        winAmt.text = finalWinPoint.ToString();

    }

    public void ScratchCompletedReward()
    {
        MessageManager.m.showRewardMessage(finalWinPoint.ToString());

        StartCoroutine(loadScratchNew());

    }

    IEnumerator loadScratchNew()
    {
        yield return new WaitForSeconds(2);

        Instantiate(scratchFront, parent.transform);

        setScratchCard();
        
    }

}
