using UnityEngine;

public class BoxWinPrice : MonoBehaviour
{
    //-------------------------------------------------------------------------------------------
    // TODO : You have to edit this script to set the winning price for each box, all this boxs
    //        have a box ID, when the wheel hit a box you receive the box ID hit has a string
    //        in the PlayerReward method below, use it to link the wheel with your project
    //-------------------------------------------------------------------------------------------

    private int gold;
    private int heart;
    private int gem;

    public void PlayerReward(string boxID)
    {
        Debug.Log($"Box ID, hit by the wheel : {boxID}");

        //Gold reward
        GoldReward(boxID);

        //Heart reward
        HeartReward(boxID);

        //Gem reward
        GemReward(boxID);

        Debug.Log($"Gold : {boxID}, Heart : {heart}, Gems : {gem}");
    }

    private void GoldReward(string boxID)
    {
        if (boxID == "Gold25")
            gold += 25;
        if (boxID == "Gold50")
            gold += 50;
        if (boxID == "Gold75")
            gold += 75;
        if (boxID == "Gold100")
            gold += 100;
        if (boxID == "Gold800")
            gold += 800;
    }

    private void HeartReward(string boxID)
    {
        if (boxID == "Heart5")
            heart += 5;
        if (boxID == "Heart10")
            heart += 10;
        if (boxID == "Heart50")
            heart += 50;
        if (boxID == "Heart100")
            heart += 100;
        if (boxID == "Heart500")
            heart += 500;
    }

    private void GemReward(string boxID)
    {
        if (boxID == "Gem1")
            gem++;
        if (boxID == "Gem5")
            gem += 5;
        if (boxID == "Gem10")
            gem += 10;
        if (boxID == "Gem50")
            gem += 50;
        if (boxID == "Gem100")
            gem += 100;
    }
}
