using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public GameObject pauseMenu;
    public static bool menuOpen = false;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) && Training.counting == true)
        {
            if (pauseMenu.activeSelf == false)
            {
                // Open menu
                pauseMenu.SetActive(true);
                menuOpen = true;
                RangeShooting.canShoot = false;
                MouseLook.playerCanLook = false;
                PlayerMovement.playerCanMove = false;
                Crosshair.crosshairEnabled = false;
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;

                if (SceneManager.GetActiveScene().name == "RangeScene")
                {
                    try
                    {
                        GameObject.Find("WeaponMenu").SetActive(false);
                    }
                    catch { }
                }
            }

            else
            {
                CloseMenu();
            }
        }
    }

    public void BackToGameClicked()
    {
        CloseMenu();
    }

    void CloseMenu()
    {
        pauseMenu.SetActive(false);
        menuOpen = false;
        RangeShooting.canShoot = true;
        MouseLook.playerCanLook = true;
        PlayerMovement.playerCanMove = true;
        Crosshair.crosshairEnabled = true;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }
}
