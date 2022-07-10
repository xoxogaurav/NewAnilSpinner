using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoanData : MonoBehaviour
{
    public static LoanData l;



    private void Awake()
    {
        l = this;
    }

    private void Start()
    {
        Web.w.StartCoroutine(Web.w.getLoanData(Web.w.webPath + "LoanData"));
    }



    [System.Serializable]
    public class data
    {
        public string loanImages;
        public string loanLink;


    }

    [System.Serializable]
    public class LoanDataMain
    {
        public data[] loan;
    }

    public LoanDataMain loanItemList = new LoanDataMain();

    public void setLoanData(string jsonData)
    {
        Debug.Log(jsonData);
       loanItemList  = JsonUtility.FromJson<LoanDataMain>(jsonData);


    }



}
