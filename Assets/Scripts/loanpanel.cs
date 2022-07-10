using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class loanpanel : MonoBehaviour
{
    public GameObject parent,prefab;

    private void Start()
    {
       

        for(int z=0;z<LoanData.l.loanItemList.loan.Length;z++)
        {
            var s = Instantiate(prefab, parent.transform);
            s.GetComponent<loan>().image = LoanData.l.loanItemList.loan[z].loanImages;
            s.GetComponent<loan>().link = LoanData.l.loanItemList.loan[z].loanLink;
        }

    }


}
