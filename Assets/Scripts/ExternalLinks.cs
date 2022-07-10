using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExternalLinks : MonoBehaviour
{

    public void launchLink()
    {
        GameManagerAPP.gm.launchUrl(gameObject.name);
    }

}
