using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MessageManager : MonoBehaviour
{
    public GameObject MessagePanel;
    public Text WinText;
    public GameObject winPanel,tryAgainPanel;



    public static MessageManager m;

    private void Awake()
    {
        m = this;
    }



    public void showRewardMessage(string coin)
    {
        GameManagerAPP.gm.addCoins(coin);
        MessagePanel.SetActive(true);
        winPanel.SetActive(true);
        WinText.text = coin;

    }

    public void showTryAgainMessage()
    {

        MessagePanel.SetActive(true);
        tryAgainPanel.SetActive(true);

    }


    public void hideMessage()
    {
        MessagePanel.SetActive(false);
        winPanel.SetActive(false);
        tryAgainPanel.SetActive(false);
    }

}
