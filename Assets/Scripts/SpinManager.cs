using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpinManager : MonoBehaviour
{

    public GameObject spinWheel;
    public int duration;
    public int speed;
    public int winPrize;
    bool isSpinning=false;
    Coroutine currentCoroutine;

    float[] angles = {25,58,89,120,150,180,207,240,266};
    int[] winPoints = { 30,35,40,45,50,55,60,65,70};



    public void SpinWheelNow()
    {
        if(isSpinning==false)
        {
            isSpinning = true;

            duration = 50;

            currentCoroutine = StartCoroutine("wheelSpin");

        }
    }

    IEnumerator wheelSpin()
    {
        while(duration>1)
        {
            duration--;

            spinWheel.transform.Rotate(0, 0, duration*speed);
            yield return new WaitForSeconds(seconds: 0.05f);
        }

        StopCoroutine(currentCoroutine);
        setResult();
        
    }


    void setResult()
    {
        int z = Random.Range(0, angles.Length);
        Debug.Log(z);
        spinWheel.transform.rotation= Quaternion.Euler(0, 0, angles[z]);
        winPrize = winPoints[z];
        isSpinning = false;
        MessageManager.m.showRewardMessage(winPrize.ToString());
    }

}
