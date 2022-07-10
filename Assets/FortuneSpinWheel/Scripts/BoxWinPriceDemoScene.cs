using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class BoxWinPriceDemoScene : MonoBehaviour
{
    public TextMeshProUGUI Gold;
    public TextMeshProUGUI Heart;
    public TextMeshProUGUI Gem;

    private int gold;
    private int heart;
    private int gem;

    private void Start()
    {
        gold = PlayerPrefs.GetInt("Gold");
        heart = PlayerPrefs.GetInt("Heart");
        gem = PlayerPrefs.GetInt("Gem");
        Gold.text = gold.ToString();
        Heart.text = heart.ToString();
        Gem.text = gem.ToString();
    }

    public void PlayerReward(string boxID)
    {
        Debug.Log($"Box ID, hit by the wheel : {boxID}");

        //Gold reward
        GoldReward(boxID);

        //Heart reward
        HeartReward(boxID);

        //Gem reward
        GemReward(boxID);
    }

    private void GoldReward(string boxID)
    {
        gold = PlayerPrefs.GetInt("Gold");
        if (boxID == "Gold25")
        {
            gold += 25;
            Gold.text = gold.ToString();
        }
        if (boxID == "Gold50")
        {
            gold += 50;
            Gold.text = gold.ToString();
        }
        if (boxID == "Gold75")
        {
            gold += 75;
            Gold.text = gold.ToString();
        }
        if (boxID == "Gold100")
        {
            gold += 100;
            Gold.text = gold.ToString();
        }
        if (boxID == "Gold250")
        {
            gold += 800;
            Gold.text = gold.ToString();
        }
        if (boxID == "Gold800")
        {
            gold += 800;
            Gold.text = gold.ToString();
        }
        PlayerPrefs.SetInt("Gold", gold);
    }

    private void HeartReward(string boxID)
    {
        heart = PlayerPrefs.GetInt("Heart");
        if (boxID == "Heart5")
        {
            heart += 5;
            Heart.text = heart.ToString();
        }
        if (boxID == "Heart10")
        {
            heart += 10;
            Heart.text = heart.ToString();
        }
        if (boxID == "Heart50")
        {
            heart += 50;
            Heart.text = heart.ToString();
        }
        if (boxID == "Heart100")
        {
            heart += 100;
            Heart.text = heart.ToString();
        }
        if (boxID == "Heart500")
        {
            heart += 500;
            Heart.text = heart.ToString();
        }
        PlayerPrefs.SetInt("Heart", heart);
    }

    private void GemReward(string boxID)
    {
        gem = PlayerPrefs.GetInt("Gem");
        if (boxID == "Gem1")
        {
            gem++;
            Gem.text = gem.ToString();
        }
        if (boxID == "Gem5")
        {
            gem += 5;
            Gem.text = gem.ToString();
        }
        if (boxID == "Gem10")
        {
            gem += 10;
            Gem.text = gem.ToString();
        }
        if (boxID == "Gem50")
        {
            gem += 50;
            Gem.text = gem.ToString();
        }
        if (boxID == "Gem100")
        {
            gem += 100;
            Gem.text = gem.ToString();
        }
        PlayerPrefs.SetInt("Gem", gem);
    }
}
