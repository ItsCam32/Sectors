using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SectorBehaviour : MonoBehaviour
{
    GameObject worldSpaceCanvas;
    TextMeshProUGUI percentageText;
    Transform player;
    AudioSource sectorEntryAS, sectorExitAS;

    public static float sectorProgress;
    public static bool inSector = false;
    public static bool sectorSecured = false;

    void Start()
    {
        worldSpaceCanvas = gameObject.transform.Find("WorldSpaceCanvas").gameObject;
        percentageText = worldSpaceCanvas.transform.Find("%").gameObject.GetComponent<TextMeshProUGUI>();
        sectorEntryAS = GameObject.Find("SectorEntrySound").GetComponent<AudioSource>();
        sectorExitAS = GameObject.Find("SectorExitSound").GetComponent<AudioSource>();
    }

    void Update()
    {
        player = GameObject.Find("LookTransform").transform;
        worldSpaceCanvas.transform.LookAt(player);

        percentageText.text = sectorProgress.ToString("F1") + "%";

        if (inSector == true && sectorProgress < 100)
        {
            sectorProgress += Time.deltaTime * 30;
        }

        else if (inSector == false && sectorProgress > 0 && sectorSecured == false)
        {
            sectorProgress -= Time.deltaTime * 6;
        }

        if (sectorProgress >= 100f)
        {
            sectorSecured = true;
            sectorProgress = 100;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.name == "Player")
        {
            inSector = true;
            sectorEntryAS.Play();
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.name == "Player" && sectorProgress > 0)
        {
            inSector = false;
            sectorExitAS.Play();
        }
    }
}
