using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WeaponMenu : MonoBehaviour
{
    public TextMeshProUGUI hintText;
    public GameObject weaponMenu, weaponCameras;
    public Color greenColour, blackColour, whiteColour;

    public Image[] slotImages;
    public GameObject[] weapons;

    public static GameObject equippedWeapon;

    Image equipedSlotImage;

    int weaponIndex;

    void Start()
    {
        PauseMenu.menuOpen = false;
        Crosshair.crosshairEnabled = true;
        MouseLook.playerCanLook = true;
        PlayerMovement.playerCanMove = true;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    void Update()
    {
        MenuState(); 
    }

    void MenuState()
    {
        if (Input.GetKeyDown(KeyCode.Tab) && PauseMenu.menuOpen == false)
        {
            weaponMenu.SetActive(!weaponMenu.activeSelf);

            if (weaponMenu.activeSelf == true)
            {
                RangeShooting.canShoot = false;
                weaponCameras.SetActive(true);
                Crosshair.crosshairEnabled = false;
                MouseLook.playerCanLook = false;
                PlayerMovement.playerCanMove = false;
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
                hintText.text = "<color=#FFD60A>[TAB]</color> CLOSE WEAPONS MENU";

                foreach (Image slotImg in slotImages)
                {
                    if (slotImg != equipedSlotImage)
                    {
                        slotImg.color = blackColour;
                    }
                }
            }

            else
            {
                if (equippedWeapon != null)
                {
                    RangeShooting.canShoot = true;
                }

                weaponCameras.SetActive(false);
                Crosshair.crosshairEnabled = true;
                MouseLook.playerCanLook = true;
                PlayerMovement.playerCanMove = true;
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible = false;
                hintText.text = "";
            }
        }
    } 

    public void WeaponSlotHoverEnter(Image slotImage)
    {
        if (slotImage.color != greenColour)
        {
            slotImage.color = whiteColour;
        }
    }

    public void WeaponSlotHoverExit(Image slotImage)
    {
        if (slotImage.color != greenColour)
        {
            slotImage.color = blackColour;
        }
    }

    public void SlotClicked(Image slotImage)
    {
        foreach (Image slotImg in slotImages)
        {
            slotImg.color = blackColour;
        }

        slotImage.color = greenColour;
        equipedSlotImage = slotImage;

        foreach (GameObject wep in weapons)
        {
            wep.SetActive(false);
        }

        if (equippedWeapon != null)
        {
            equippedWeapon.SetActive(false);
        }

        weaponIndex = int.Parse(slotImage.gameObject.name);

        equippedWeapon = weapons[weaponIndex];
        equippedWeapon.SetActive(true);

        RangeShooting.reloading = false;

        SetWeaponAttributes();
    }

    void SetWeaponAttributes()
    {
        switch (weaponIndex)
        {
            case 0:
                // Grenade Launcher
                RangeShooting.clipAmmo = 6;
                RangeShooting.clipAmmoMax = 6;
                RangeShooting.reserveAmmo = 30;
                RangeShooting.fireRate = 1f;
                RangeShooting.reloadSpeed = 3f;
                RangeShooting.fullyAutomatic = false;
                RangeShooting.weaponIndex = 0;
                break;

            case 1:
                // RPG
                RangeShooting.clipAmmo = 1;
                RangeShooting.clipAmmoMax = 1;
                RangeShooting.reserveAmmo = 5;
                RangeShooting.fireRate = 1f;
                RangeShooting.reloadSpeed = 3f;
                RangeShooting.fullyAutomatic = false;
                RangeShooting.weaponIndex = 1;
                break;

            case 2:
                // 50cal
                RangeShooting.clipAmmo = 5;
                RangeShooting.clipAmmoMax = 5;
                RangeShooting.reserveAmmo = 25;
                RangeShooting.fireRate = 2;
                RangeShooting.reloadSpeed = 3.5f;
                RangeShooting.fullyAutomatic = false;
                RangeShooting.weaponIndex = 2;
                break;

            case 3:
                // LMG
                RangeShooting.clipAmmo = 45;
                RangeShooting.clipAmmoMax = 45;
                RangeShooting.reserveAmmo = 225;
                RangeShooting.fireRate = 0.13f;
                RangeShooting.reloadSpeed = 3f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 3;
                break;

            case 4:
                // Rifle 1
                RangeShooting.clipAmmo = 30;
                RangeShooting.clipAmmoMax = 30;
                RangeShooting.reserveAmmo = 150;
                RangeShooting.fireRate = 0.12f;
                RangeShooting.reloadSpeed = 2.5f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 4;
                break;

            case 5:
                // Rifle 2
                RangeShooting.clipAmmo = 30;
                RangeShooting.clipAmmoMax = 30;
                RangeShooting.reserveAmmo = 150;
                RangeShooting.fireRate = 0.12f;
                RangeShooting.reloadSpeed = 2.5f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 5;
                break;

            case 6:
                // Rifle 3
                RangeShooting.clipAmmo = 30;
                RangeShooting.clipAmmoMax = 30;
                RangeShooting.reserveAmmo = 150;
                RangeShooting.fireRate = 0.12f;
                RangeShooting.reloadSpeed = 2.5f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 6;
                break;

            case 7:
                // Rifle 4
                RangeShooting.clipAmmo = 30;
                RangeShooting.clipAmmoMax = 30;
                RangeShooting.reserveAmmo = 150;
                RangeShooting.fireRate = 0.12f;
                RangeShooting.reloadSpeed = 2.5f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 7;
                break;

            case 8:
                // Shotgun
                RangeShooting.clipAmmo = 7;
                RangeShooting.clipAmmoMax = 7;
                RangeShooting.reserveAmmo = 35;
                RangeShooting.fireRate = 1;
                RangeShooting.reloadSpeed = 2.5f;
                RangeShooting.fullyAutomatic = false;
                RangeShooting.weaponIndex = 8;
                break;

            case 9:
                // SMG 1
                RangeShooting.clipAmmo = 18;
                RangeShooting.clipAmmoMax = 18;
                RangeShooting.reserveAmmo = 90;
                RangeShooting.fireRate = 0.1f;
                RangeShooting.reloadSpeed = 1.5f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 9;
                break;

            case 10:
                // SMG 2
                RangeShooting.clipAmmo = 20;
                RangeShooting.clipAmmoMax = 20;
                RangeShooting.reserveAmmo = 100;
                RangeShooting.fireRate = 0.1f;
                RangeShooting.reloadSpeed = 1.5f;
                RangeShooting.fullyAutomatic = true;
                RangeShooting.weaponIndex = 10;
                break;

            case 11:
                // Deagle
                RangeShooting.clipAmmo = 7;
                RangeShooting.clipAmmoMax = 7;
                RangeShooting.reserveAmmo = 35;
                RangeShooting.fireRate = 0.25f;
                RangeShooting.reloadSpeed = 2f;
                RangeShooting.fullyAutomatic = false;
                RangeShooting.weaponIndex = 11;
                break;
        }

        RangeShooting.reloadingString = "";
        RangeShooting.nextFire = 0f;
    }
}
