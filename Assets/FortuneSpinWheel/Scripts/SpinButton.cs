using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpinButton : MonoBehaviour
{
    private Animation buttonAnim;
    // Start is called before the first frame update
    void Start()
    {
        buttonAnim = GetComponent<Animation>();
    }

    public void OnButtonClick()
    {
        buttonAnim.Play("ButtonSpin");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
