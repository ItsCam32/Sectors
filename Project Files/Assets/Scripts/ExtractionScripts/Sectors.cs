using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Sectors : MonoBehaviour
{
    public Transform[] sectorPositions;
    public GameObject sector, completedSectorPrefab;
    public Camera cam;
    public Slider progressSlider;
    public TextMeshProUGUI worldSpaceSectorText, progressText, sectorsSecuredText,
                           arrow1, arrow2, arrow3, sec1Text, sec2Text, sec3Text;
    public Color completedColour;

    public static Vector3 sectorPos;

    public static string[] letters = new string[] { "A", "B", "C" };
    public static int sectorIndex = -1;
    bool creatingNewSector = false;
    public static bool allSectorsSecured = false;
    

    void Start()
    {
        PauseMenu.menuOpen = false;
        MouseLook.playerCanLook = true;
        PlayerMovement.playerCanMove = true;
        Crosshair.crosshairEnabled = true;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        ChooseRandomPosition();
    }
    void Update()
    {
        if (allSectorsSecured == false)
        {
            sectorsSecuredText.text = sectorIndex.ToString() + " / 3";
            sectorPos = sector.transform.position;

            if (sectorIndex == 1)
            {
                arrow1.color = completedColour;
                sec1Text.color = completedColour;
            }

            else if (sectorIndex == 2)
            {
                arrow2.color = completedColour;
                sec2Text.color = completedColour;
            }
        }

        else
        {
            // MOVE TO EXTRACTION

            Destroy(sector);

            // Maybe method for reseting UI and removing last sector etc
        }

        progressSlider.value = SectorBehaviour.sectorProgress;

        if (SectorBehaviour.sectorSecured == true)
        {
            progressText.text = worldSpaceSectorText.text + " SECURED";

            if (creatingNewSector == false)
            {
                StartCoroutine(StartNextSector());
            }
        }
        else
        {
            progressText.text = worldSpaceSectorText.text + " " + SectorBehaviour.sectorProgress.ToString("F1") + "%";

            if (SectorBehaviour.inSector == true)
            {
                progressSlider.gameObject.SetActive(true);
                progressText.gameObject.SetActive(true);
            }

            else if (SectorBehaviour.sectorProgress <= 0 && SectorBehaviour.inSector == false)
            {
                progressSlider.gameObject.SetActive(false);
                progressText.gameObject.SetActive(false);
            }
        }
    }

    void ChooseRandomPosition()
    {
        sectorIndex++;

        if (sectorIndex == 3)
        {
            allSectorsSecured = true;
            sectorsSecuredText.text = "3 / 3";
            arrow3.color = completedColour;
            sec3Text.color = completedColour;
            return;
        }

        sector.transform.position = sectorPositions[sectorIndex].position;
        sector.SetActive(true);

        worldSpaceSectorText.text = "SECTOR " + letters[sectorIndex];
    }
    
    IEnumerator StartNextSector()
    {
        creatingNewSector = true;
        yield return new WaitForSeconds(0.5f);

        Instantiate(completedSectorPrefab, sector.transform.position, Quaternion.identity);

        ChooseRandomPosition();

        SectorBehaviour.sectorProgress = 0;
        SectorBehaviour.inSector = false;
        SectorBehaviour.sectorSecured = false;
        creatingNewSector = false;
    }
}
