using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManagerAPP : MonoBehaviour
{
    public static GameManagerAPP gm;

    public NativeShare share;

    public Text[] coinTexts;

    public int myCoins;

    private void Awake()
    {
        gm = this;
    }

    public void launchUrl(string gameObjectName)
    {
        Application.OpenURL(LinksData.l.myLinks.links[0].getData(gameObjectName));
    }

    public void ShareApp()
    {
        share.SetSubject("CashBazz").SetText(text: LinksData.l.myLinks.links[0].s2).SetTitle("cashbazz").Share();
        
    }


    public void addCoins(string s)
    {
        PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") + int.Parse(s));
        myCoins = PlayerPrefs.GetInt("coin");
        setCoinTexts(myCoins);
    }

    public void setCoinTexts(int s)
    {
        for(int z=0;z<coinTexts.Length;z++)
        {
            coinTexts[z].text = s.ToString();
        }
    }


}
