 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RangeShooting : MonoBehaviour
{
    public CharacterController charController;
    public Transform cam;
    public TextMeshProUGUI clipAmmoText, reserveAmmoText, reloadingText,
                           minigameButtonText, minigameTimerText, scoreText;
    public Color redColour, whiteColour, greenColour;
    public LayerMask barrierLayer;

    public GameObject[] targets;
    public Transform[] gunshotPSPositions, casingPositions;
    public Rigidbody[] casings;
    public Animator[] recoils;
    public AudioSource[] impactSounds, gunshotSounds;
    public AudioSource reloadSound, emptyMagSound;
    public Animator camRecoil;
    public ParticleSystem gunShotPS;
    public Rigidbody grenadeLauncherProjectilePrefab, rpgProjectilePrefab;
    public GameObject rpgRocket;
    public Transform glProjectilePos, rpgProjectilePos;

    public static int clipAmmo, clipAmmoMax, reserveAmmo, weaponIndex;
    public static float fireRate;
    public static float reloadSpeed;
    public static bool canShoot = false;
    public static bool reloading = false;
    public static bool fullyAutomatic = false;
    public static float nextFire = 0.0f;
    public static string reloadingString = "";

    bool minigameActive = false;
    bool resetTimer = false;
    int targetsHit = 0;

    void Update()
    {
        if (WeaponMenu.equippedWeapon != null)
        {
            clipAmmoText.text = clipAmmo.ToString();
            reserveAmmoText.text = reserveAmmo.ToString();
        }

        if (clipAmmo < 5)
        {
            clipAmmoText.color = redColour;
        }
        else
        {
            clipAmmoText.color = whiteColour;
        }

        if (canShoot == true)
        {
            if (Input.GetKeyDown(KeyCode.R) && clipAmmo < clipAmmoMax && reserveAmmo > 0 && reloading == false)
            {
                StartCoroutine(ReloadRoutine());
            }

            if (Input.GetKeyDown(KeyCode.Mouse0) && clipAmmo == 0 && reserveAmmo == 0)
            {
                emptyMagSound.Play();
            }

            if (Input.GetKeyDown(KeyCode.Mouse0) && Time.time > nextFire && clipAmmo > 0 && reloading == false && fullyAutomatic == false)
            {
                Fire();
            }

            else if (Input.GetKey(KeyCode.Mouse0) && Time.time > nextFire && clipAmmo > 0 && reloading == false && fullyAutomatic == true)
            {
                Fire();
            }
        }
    }

    void Fire()
    {
        nextFire = Time.time + fireRate;

        gunShotPS.gameObject.SetActive(true);
        gunShotPS.transform.position = gunshotPSPositions[weaponIndex].position;
        gunShotPS.Play();
        
        AudioSource gunshot = gunshotSounds[weaponIndex];
        gunshot.Play();

        Animator recoil = recoils[weaponIndex];
        recoil.Play(GetRecoilAnimationName(), -1, 0);

        camRecoil.Play(GetCamRecoilAnimationName(), -1, 0);

        Rigidbody casingPrefab = casings[weaponIndex];

        Transform casingPos = casingPositions[weaponIndex];

        Rigidbody casing;

        if (weaponIndex == 0)
        {
            casing = Instantiate(casingPrefab, casingPos.position, cam.rotation);

            Rigidbody grenadeLauncherProjectile = Instantiate(grenadeLauncherProjectilePrefab, glProjectilePos.position, cam.rotation);
            grenadeLauncherProjectile.velocity = cam.forward * 30f + new Vector3(0f, 1.5f, 0f);
            Destroy(grenadeLauncherProjectile.gameObject, 5);
        }
        else
        {
            casing = Instantiate(casingPrefab, casingPos.position, Random.rotation);
        }

        if (weaponIndex == 1)
        {
            StartCoroutine(ReloadRoutine());

            Rigidbody RPGProjectile = Instantiate(rpgProjectilePrefab, rpgProjectilePos.position, cam.rotation);
            RPGProjectile.velocity = cam.forward * 40f + new Vector3(0f, 0.5f, 0f);
            Destroy(RPGProjectile.gameObject, 5);
        }

        casing.velocity = casingPos.transform.parent.right * 1.2f + new Vector3(0f, 1f, 0f);
        Destroy(casing.gameObject, 3);
        Physics.IgnoreCollision(charController, casing.GetComponent<Collider>(), true);

        clipAmmo--;

        if (clipAmmo == 0 && reloading == false && reserveAmmo > 0)
        {
            StartCoroutine(ReloadRoutine());
        }

        RaycastHit hit;
        if (Physics.Raycast(cam.position, cam.forward, out hit, Mathf.Infinity, ~barrierLayer) && weaponIndex > 1)
        {
            if (hit.collider.tag == "TrainingTarget")
            {
                AudioSource impact = impactSounds[Random.Range(0, impactSounds.Length)];
                impact.Play();

                targetsHit++;
                scoreText.text = "SCORE " + targetsHit.ToString();

                hit.collider.gameObject.SetActive(false);
                targets[Random.Range(0, targets.Length)].SetActive(true);
            }

            if (hit.collider.name == "WorldSpaceCanvas")
            {
                if (minigameActive == false)
                {
                    StartCoroutine(MinigameRoutine());
                    StartCoroutine(TimerRoutine());
                }
                else
                {
                    StopCoroutine(MinigameRoutine());
                    resetTimer = true;
                    minigameTimerText.text = "";
                    minigameActive = false;
                    targetsHit = 0;
                    scoreText.text = "SCORE " + targetsHit.ToString();
                    minigameButtonText.text = "SHOOT TO START";
                    minigameButtonText.color = greenColour;
                }
            }
        }
    }

    string GetRecoilAnimationName()
    {
        switch (weaponIndex)
        {
            case 0:
                return "GrenadeLauncherRecoil";
            case 1:
                return "RPGRecoil";
            case 2:
                return "50calRecoil";
            case 3:
                return "LMGRecoil";
            case 4:
                return "Rifle1Recoil";
            case 5:
                return "Rifle2Recoil";
            case 6:
                return "Rifle3Recoil";
            case 7:
                return "Rifle4Recoil";
            case 8:
                return "ShotgunRecoil";
            case 9:
                return "SMG1Recoil";
            case 10:
                return "SMG2Recoil";
            case 11:
                return "DeagleRecoil";
        }

        return "";
    }

    string GetCamRecoilAnimationName()
    {
        switch (weaponIndex)
        {
            case 0:
                return "GrenadeLauncherCamRecoil";
            case 1:
                return "RPGCamRecoil";
            case 2:
                return "50calCamRecoil";
            case 3:
                return "LMGCamRecoil";
            case 4:
                return "RifleCamRecoil";
            case 5:
                return "RifleCamRecoil";
            case 6:
                return "RifleCamRecoil";
            case 7:
                return "RifleCamRecoil";
            case 8:
                return "ShotgunCamRecoil";
            case 9:
                return "SMGCamRecoil";
            case 10:
                return "SMGCamRecoil";
            case 11:
                return "DeagleCamRecoil";
        }

        return "";
    }

    IEnumerator ReloadRoutine()
    {
        reloading = true;
        reloadSound.Play();
        reloadingText.text = "RELOADING";
        rpgRocket.SetActive(false);
        yield return new WaitForSeconds(reloadSpeed);
        reloadingText.text = "";

        if (clipAmmo == 0)
        {
            if (reserveAmmo >= clipAmmoMax)
            {
                clipAmmo = clipAmmoMax;
                reserveAmmo -= clipAmmo;
            }
            else
            {
                clipAmmo = reserveAmmo;
                reserveAmmo = 0;
            }
        }

        else if (clipAmmo > 0)
        {
            int ammoNeeded = clipAmmoMax - clipAmmo;

            if (ammoNeeded >= reserveAmmo)
            {
                clipAmmo += reserveAmmo;
                reserveAmmo = 0;
            }
            else
            {
                clipAmmo = clipAmmoMax;
                reserveAmmo -= ammoNeeded;
            }
        }

        if (reserveAmmo < clipAmmoMax)
        {
            reserveAmmoText.color = redColour;
        }
        else
        {
            reserveAmmoText.color = whiteColour;
        }

        rpgRocket.SetActive(true);
        reloading = false;
    }

    IEnumerator MinigameRoutine()
    {
        minigameActive = true;
        minigameButtonText.text = "SHOOT TO STOP";
        minigameButtonText.color = redColour;

        targets[Random.Range(0, targets.Length)].SetActive(true);

        yield return new WaitForSeconds(60);

        foreach (GameObject tar in targets)
        {
            tar.SetActive(false);
        }

        minigameActive = false;
        targetsHit = 0;
        minigameButtonText.text = "SHOOT TO START";
        minigameButtonText.color = greenColour;
        scoreText.text = "SCORE " + targetsHit.ToString();
    }

    IEnumerator TimerRoutine()
    {
        for (int i = 60; i > -1; i--)
        {
            minigameTimerText.text = i.ToString();
            yield return new WaitForSeconds(1);

            if (resetTimer == true)
            {
                break;
            }
        }

        resetTimer = false;
    }
}
