using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Waypoints : MonoBehaviour
{
    public Image waypointImage;
    public Camera cam;
    public Transform playerPos;
    public TextMeshProUGUI sectorNameText, sectorDistanceText;

    float minX, maxX, minY, maxY;
    Vector2 pos;

    void Update()
    {
        minX = waypointImage.GetPixelAdjustedRect().width / 2;
        maxX = Screen.width - minX;

        minY = waypointImage.GetPixelAdjustedRect().height / 2;
        maxY = Screen.height - minY;

        pos = cam.WorldToScreenPoint(Sectors.sectorPos + new Vector3(0, 2.5f, 0));

        if (Vector3.Dot((Sectors.sectorPos - transform.position), transform.forward) < 0)
        {
            // Behind player
            if (pos.x < Screen.width / 2)
            {
                pos.x = maxX;
            }
            else
            {
                pos.x = minX;
            }
        }

        pos.x = Mathf.Clamp(pos.x, minX, maxX);
        pos.y = Mathf.Clamp(pos.y, minY, maxY);

        waypointImage.transform.position = pos;

        if (Sectors.allSectorsSecured == false)
        {
            if (SectorBehaviour.inSector == false)
            {
                waypointImage.gameObject.SetActive(true);
                sectorNameText.text = "TARGET";
                sectorDistanceText.text = Vector3.Distance(playerPos.position, Sectors.sectorPos).ToString("F1") + "m";
            }
            else
            {
                waypointImage.gameObject.SetActive(false);
            }
        }
        else
        {
            waypointImage.gameObject.SetActive(false);
        }
    }
}
