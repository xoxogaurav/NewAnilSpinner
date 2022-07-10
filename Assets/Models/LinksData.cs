using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinksData : MonoBehaviour
{

    public static LinksData l;



    private void Awake()
    {
        l = this;
    }

    private void Start()
    {
       Web.w.StartCoroutine(Web.w.getLinks( Web.w.webPath + "Links"));
    }



[System.Serializable]
    public class data
    {
        public string h22;
        public string h23;
        public string h3;
        public string h41;
        public string h42;
        public string h43;
        public string h44;
        public string h51; 
        public string h52;
        public string h53;
        public string h54;
        public string h61;
        public string h62;
        public string h63;
        public string b1;
        public string b2;
        public string s1;
        public string s2;
        public string s3;
        public string pp;

        string[] dataNames = { "h23", "h3", "h41", "h42", "h43", "h44", "h51", "h52", "h53", "h54", "h61", "h62", "h63", "b1", "b2", "pp" , "h22", "s1","s2","s3"};


        public string getData(string name)
        {
           
            if(dataNames[0].ToString()==name)
            {
                return h23;
            }
            else if(dataNames[1].ToString() == name)
            {
                return h3;
            }
            else if (dataNames[2].ToString() == name)
            {
                return h41;
            }
            else if (dataNames[3].ToString() == name)
            {
                return h42;
            }
            else if (dataNames[4].ToString() == name)
            {
                return h43;
            }
            else if (dataNames[5].ToString() == name)
            {
                return h44;
            }
            else if (dataNames[6].ToString() == name)
            {
                return h51;
            }
            else if (dataNames[7].ToString() == name)
            {
                return h52;
            }
            else if (dataNames[8].ToString() == name)
            {
                return h53;
            }
            else if (dataNames[9].ToString() == name)
            {
                return h54;
            }
            else if (dataNames[10].ToString() == name)
            {
                return h61;
            }
            else if (dataNames[11].ToString() == name)
            {
                return h62;
            }
            else if (dataNames[12].ToString() == name)
            {
                return h63;
            }
            else if (dataNames[13].ToString() == name)
            {
                return b1;
            }
            else if (dataNames[14].ToString() == name)
            {
                return b2;
            }
            else if (dataNames[15].ToString() == name)
            {
                return pp;
            }
            else if (dataNames[16].ToString() == name)
            {
                return h22;
            }
            else if (dataNames[17].ToString() == name)
            {
                return s1;
            }
            else if (dataNames[18].ToString() == name)
            {
                return s2;
            }
            else if (dataNames[19].ToString() == name)
            {
                return s3;
            }
            else
            {
                return "0";
            }


        }
        
    }

    [System.Serializable]
    public class link
    {
        public data[] links;
    }

    public link myLinks = new link();

    public void setLinksData(string jsonData)
    {

        myLinks = JsonUtility.FromJson<link>(jsonData);        

    }

  

}
