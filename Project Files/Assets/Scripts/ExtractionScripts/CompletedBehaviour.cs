using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CompletedBehaviour : MonoBehaviour
{
    GameObject completedCanvas;
    TextMeshProUGUI securedText, nameText;
    Transform player;

    string name = "";

    void Start()
    {
        completedCanvas = gameObject.transform.Find("CompletedCanvas").gameObject;
        securedText = completedCanvas.transform.Find("Secured").gameObject.GetComponent<TextMeshProUGUI>();
        nameText = completedCanvas.transform.Find("SectorText").gameObject.GetComponent<TextMeshProUGUI>();
    }

    void Update()
    {
        player = GameObject.Find("LookTransform").transform;
        completedCanvas.transform.LookAt(player);

        securedText.text = "SECURED";

        if (name == "")
        {
            nameText.text = "SECTOR " + Sectors.letters[Sectors.sectorIndex - 1];
            name = Sectors.letters[Sectors.sectorIndex - 1];
        }
        else
        {
            nameText.text = "SECTOR " + name;
        }
    }
}
