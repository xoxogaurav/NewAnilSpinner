using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CaseEnter : MonoBehaviour
{
    bool can;
    float time;
    public SpinWheel spinWheel;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        time = 0f;
        can = false;
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        time += Time.deltaTime;
        if (time > 2.6f && !can)
        {
            can = false;
            string name = gameObject.name;
            var nameNumber = int.Parse(name.Substring(1, name.Length - 1));
            spinWheel.WinningPrice(nameNumber + 1);
            can = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        time = 0f;
        can = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
