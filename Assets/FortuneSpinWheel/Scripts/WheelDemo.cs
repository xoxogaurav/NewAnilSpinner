using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WheelDemo : MonoBehaviour
{
    public Image Background;
    public Image BackgroundAlpha;

    public GameObject[] WheelPrefabs;
    public Image[] ButtonsColors;
    public Animation[] ButonsAnims;

    private Color32 buttonOn = new Color32(200, 200, 200, 255);
    private Color32 buttonOff = new Color32(0, 0, 0, 200);

    private Color32 bg0 = new Color32(251, 245, 174, 255);
    private Color32 bgAlpha0 = new Color32(137, 90, 0, 100);

    private Color32 bg1 = new Color32(245, 137, 119, 255);
    private Color32 bgAlpha1 = new Color32(137, 0, 7, 100);

    private Color32 bg2 = new Color32(130, 211, 255, 255);
    private Color32 bgAlpha2 = new Color32(2, 0, 137, 100);


    private void Start()
    {
        Background.color = bg0;
        BackgroundAlpha.color = bgAlpha0;
        ButonsAnims[0].Play("ButtonScaleUp");
        //color select
        ButtonsColors[0].color = buttonOn;
        ButtonsColors[1].color = buttonOff;
        ButtonsColors[2].color = buttonOff;
    }

    public void OnClick6x()
    {
        Background.color = bg0;
        BackgroundAlpha.color = bgAlpha0;
        ButonsAnims[0].Play("ButtonScaleUp");
        //color select
        ButtonsColors[0].color = buttonOn;
        ButtonsColors[1].color = buttonOff;
        ButtonsColors[2].color = buttonOff;

        //active / desactive wheels
        WheelPrefabs[0].SetActive(true); //true
        WheelPrefabs[1].SetActive(false);
        WheelPrefabs[2].SetActive(false);

        //reset wheelcenter rotation
        var wheelcenter = WheelPrefabs[0].transform.Find("wheelcenter");
        wheelcenter.transform.eulerAngles = new Vector3(0, 0, 30);
        wheelcenter.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;

        //reset wheelLight color
        var wheelight = WheelPrefabs[0].transform.Find("wheelLight").GetComponent<SpriteRenderer>();
        wheelight.color = new Color32(40, 40, 40, 255);
    }

    public void OnClick8x()
    {
        //background color
        Background.color = bg1;
        BackgroundAlpha.color = bgAlpha1;

        //animation
        ButonsAnims[1].Play("ButtonScaleUp");

        //color select
        ButtonsColors[0].color = buttonOff;
        ButtonsColors[1].color = buttonOn;
        ButtonsColors[2].color = buttonOff;

        //active / desactive wheels
        WheelPrefabs[0].SetActive(false);
        WheelPrefabs[1].SetActive(true); //true
        WheelPrefabs[2].SetActive(false);

        //reset wheelcenter rotation
        var wheelcenter = WheelPrefabs[1].transform.Find("wheelcenter");
        wheelcenter.transform.eulerAngles = new Vector3(0, 0, 22.5f);
        wheelcenter.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;

        //reset wheelLight color
        var wheelight = WheelPrefabs[1].transform.Find("wheelLight").GetComponent<SpriteRenderer>();
        wheelight.color = new Color32(40, 40, 40, 255);
    }

    public void OnClick10x()
    {
        //background color
        Background.color = bg2;
        BackgroundAlpha.color = bgAlpha2;

        //animation
        ButonsAnims[2].Play("ButtonScaleUp");

        //color select
        ButtonsColors[0].color = buttonOff;
        ButtonsColors[1].color = buttonOff;
        ButtonsColors[2].color = buttonOn;

        //active / desactive wheels
        WheelPrefabs[0].SetActive(false);
        WheelPrefabs[1].SetActive(false);
        WheelPrefabs[2].SetActive(true); //true

        //reset wheelcenter rotation
        var wheelcenter = WheelPrefabs[2].transform.Find("wheelcenter");
        wheelcenter.transform.eulerAngles = new Vector3(0, 0, 54);
        wheelcenter.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;

        //reset wheelLight color
        var wheelight = WheelPrefabs[2].transform.Find("wheelLight").GetComponent<SpriteRenderer>();
        wheelight.color = new Color32(40, 40, 40, 255);
    }
}
