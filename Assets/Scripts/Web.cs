using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Web : MonoBehaviour
{

    public string webPath;


    public static Web w;

    public bool isActive=false;

    public GameObject[] myObj;


    private void Awake()
    {
        w = this;
    }

    private void Start()
    {
        StartCoroutine(getHideFile("https://techno-scrap.com/mCoins/17jun.php"));
    }


    public IEnumerator getLinks(string uri)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.result==UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            LinksData.l.setLinksData(uwr.downloadHandler.text);

        }
    }

    public IEnumerator getLoanData(string uri)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            LoanData.l.setLoanData(uwr.downloadHandler.text);

        }
    }


    public IEnumerator getHideFile(string uri)
    {

        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            if(uwr.downloadHandler.text.Trim()=="1")
            {
                //active all data
                isActive = true;

                for(int z=0;z<myObj.Length;z++)
                {
                    myObj[z].SetActive(true);
                }

            }

        }
    }
}
