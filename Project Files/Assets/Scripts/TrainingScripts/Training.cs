using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Training : MonoBehaviour
{
    public CharacterController charController;
    public Transform cam, grenadePos, casingPos;
    public ParticleSystem gunShot, explosion1, explosion2, explosion3;
    public Animator welcomeTextsAnimator, bgAnimator, deagleAnimator, camDeagleRecoilAnimator;
    public AudioSource parachutePulledSound, parachuteDropSound, deagleShotSound, grenadeSound, trainingCompleteSound,
                       emptyShotSound, reloadSound;
    public AudioSource[] impactSounds;

    public Rigidbody grenade;
    public Button claimButton;
    public Rigidbody casingPrefab;
    public GameObject task1, task1PT2, task2, task3, task4, task5, task6, bg, parachute, smoke, drop,
                      pickupUI, barrier1, barrier2, gun, gunUI, debris, explodedDebris, marker, endUI, rewardUI,
                      noRewardText, rewardBG, grenadeClip, grenadePin;

    public TextMeshProUGUI task1Title, wText, aText, sText, dText, task1PT2Title,
                           jumpText, crouchText, sprintText,
                           task2Title, task2Text, task3Title, task3Text,
                           task4Title, task4Text, task4Counter, clipAmmoText, reserveAmmoText, reloadingText, oneText,
                           task5Title, task5Text, task6Title, task6Text, timeText, claimText;

    public Color greenColour, redColour;

    bool checkingForMovement = false;
    bool checkingForSecondaryMovement = false;
    bool checkingForCallIn = false;
    bool checkingForPickup = false;
    bool checkingForShooting = false;
    bool checkingForGrenadeThrow = false;
    public static bool grenadeSuccessful = false;
    bool waitingForExplosion = false;
    bool checkingForExtraction = false;
    bool extracted = false;
    int targetsDestroyed = 0;
    int clipAmmoMax = 7;
    int clipAmmo = 7;
    int reserveAmmo = 70;
    float fireRate = 0.25f;
    float nextFire = 0.0f;
    bool reloading = false;
    public static bool counting = true;
    float trainingTime = 0f;

    void Start()
    {
        PauseMenu.menuOpen = false;
        MouseLook.playerCanLook = true;
        PlayerMovement.playerCanMove = true;
        Crosshair.crosshairEnabled = true;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;

        StartCoroutine(IntroRoutine());
    }

    void Update()
    {
        if (counting == true)
        {
            trainingTime += Time.deltaTime;
        }

        if (gunUI.activeSelf == true)
        {
            clipAmmoText.text = clipAmmo.ToString();
            reserveAmmoText.text = reserveAmmo.ToString();
        }

        if (checkingForMovement == true)
        {
            CheckForMovement();
        }

        if (checkingForSecondaryMovement == true)
        {
            CheckForSecondaryMovement();
        }

        if (checkingForCallIn == true)
        {
            CheckForCallIn();
        }

        if (checkingForPickup == true)
        {
            CheckForPickup();
        }

        if (checkingForShooting == true)
        {
            CheckForShooting();
        }

        if (checkingForGrenadeThrow == true)
        {
            CheckForGrenadeThrow();
        }

        if (checkingForExtraction == true)
        {
            CheckForExtraction();
        }
    }

    IEnumerator IntroRoutine()
    {
        yield return new WaitForSeconds(1);
        welcomeTextsAnimator.Play("WelcomeTexts");
        yield return new WaitForSeconds(3);
        bg.SetActive(true);
        bgAnimator.Play("BGFlash", -1, 0);
        task1.SetActive(true);

        // Show task 1
        task1.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForMovement = true;
    }

    IEnumerator MovementRoutine()
    {
        yield return new WaitForSeconds(2);
        task1.SetActive(false);
        bgAnimator.Play("BGFlash", -1, 0);

        // Show task 1 PT2
        task1PT2.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForSecondaryMovement = true;
    }

    IEnumerator CallInRoutine()
    {
        yield return new WaitForSeconds(2);
        task1PT2.SetActive(false);
        bgAnimator.Play("BGFlash", -1, 0);

        // Show task 1 PT2
        task2.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForCallIn = true;
    }

    IEnumerator DropRoutine()
    {
        yield return new WaitForSeconds(8);
        smoke.SetActive(false);
        parachute.SetActive(false);
        drop.SetActive(true);
        yield return new WaitForSeconds(0.25f);
        parachuteDropSound.Play();
        task2.SetActive(false);
        bgAnimator.Play("BGFlash", -1, 0);

        // Show task 3
        task3.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForPickup = true;
    }

    IEnumerator ShootingRoutine()
    {
        yield return new WaitForSeconds(2);
        task3.SetActive(false);
        barrier1.SetActive(true);
        barrier2.SetActive(false);
        bgAnimator.Play("BGFlash", -1, 0);

        // Show task 4
        task4.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForShooting = true;
    }

    IEnumerator ReloadRoutine()
    {
        reloading = true;
        reloadSound.Play();
        oneText.text = "";
        reloadingText.text = "RELOADING";
        yield return new WaitForSeconds(2);
        reloadingText.text = "";
        oneText.text = "(1)";

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
            reserveAmmoText.color = greenColour;
        }

        reloading = false;
    }

    IEnumerator GrenadeRoutine()
    {
        yield return new WaitForSeconds(0.2f);
        trainingCompleteSound.Play();
        yield return new WaitForSeconds(2);
        gunUI.SetActive(false);
        gun.SetActive(false);
        task4.SetActive(false);
        barrier1.SetActive(false);
        bgAnimator.Play("BGFlash", -1, 0);
        grenade.gameObject.SetActive(true);

        // Show task 5
        task5.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForGrenadeThrow = true;
    }

    IEnumerator GrenadeTimer()
    {
        waitingForExplosion = true;
        yield return new WaitForSeconds(1.5f);

        if (grenadeSuccessful == true)
        {
            grenadeSound.Play();
            yield return new WaitForSeconds(0.1f);
            explosion1.gameObject.SetActive(true);
            explosion1.Play();
            explosion2.gameObject.SetActive(true);
            explosion2.Play();
            explosion3.gameObject.SetActive(true);
            explosion3.Play();
            
            yield return new WaitForSeconds(0.2f);
            debris.SetActive(false);
            explodedDebris.SetActive(true);
            marker.SetActive(false);
            grenade.gameObject.SetActive(false);

            checkingForGrenadeThrow = false;
            task5Title.color = greenColour;
            task5Text.color = greenColour;
            yield return new WaitForSeconds(0.3f);
            trainingCompleteSound.Play();

            StartCoroutine(ExtractionRoutine());
        }

        else
        {
            grenade.useGravity = false;
            grenade.freezeRotation = true;
            grenade.constraints = RigidbodyConstraints.FreezeAll;
            grenade.gameObject.layer = 12;
            grenadeClip.layer = 12;
            grenadePin.layer = 12;
            grenade.transform.parent = GameObject.Find("Camera").transform;
            grenade.transform.position = grenadePos.position;
            grenade.transform.rotation = new Quaternion(0, 0, 0, 0);
        }

        waitingForExplosion = false;
    }

    IEnumerator ExtractionRoutine()
    {
        yield return new WaitForSeconds(2);
        task5.SetActive(false);
        bgAnimator.Play("BGFlash", -1, 0);

        // Show task 6
        task6.SetActive(true);

        yield return new WaitForSeconds(1);
        checkingForExtraction = true;
    }

    IEnumerator EndingRoutine()
    {
        yield return new WaitForSeconds(1);
        task6.SetActive(false);
        bg.SetActive(false);
        counting = false;
        Crosshair.crosshairEnabled = false;
        MouseLook.playerCanLook = false;
        PlayerMovement.playerCanMove = false;

        trainingCompleteSound.Play();
        endUI.SetActive(true);
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;

        int minutes = (int)trainingTime / 60;
        int seconds = (int)(trainingTime % 60);

        timeText.text = minutes.ToString("00") + ":" + seconds.ToString("00");

        if (minutes < 1)
        {
            rewardUI.SetActive(true);

            if (ClaimReward.rewardItemOwned == true)
            {
                claimButton.interactable = false;
                rewardBG.SetActive(false);
                claimText.text = "REWARD CLAIMED";
            }
        }
        else
        {
            noRewardText.SetActive(true);
        }
    }

    void CheckForMovement()
    {
        if (wText.color != greenColour || aText.color != greenColour || sText.color != greenColour || dText.color != greenColour)
        {
            if (Input.GetKeyDown(KeyCode.W))
            {
                wText.color = greenColour;
            }

            else if (Input.GetKeyDown(KeyCode.A))
            {
                aText.color = greenColour;
            }

            else if (Input.GetKeyDown(KeyCode.S))
            {
                sText.color = greenColour;
            }

            else if (Input.GetKeyDown(KeyCode.D))
            {
                dText.color = greenColour;
            }
        }

        else
        {
            task1Title.color = greenColour;
            checkingForMovement = false;
            trainingCompleteSound.Play();

            StartCoroutine(MovementRoutine());
        }
    }

    void CheckForSecondaryMovement()
    {
        if (jumpText.color != greenColour || crouchText.color != greenColour || sprintText.color != greenColour)
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                jumpText.color = greenColour;
            }

            else if (Input.GetKeyDown(KeyCode.LeftShift))
            {
                crouchText.color = greenColour;
            }

            else if (Input.GetKeyDown(KeyCode.LeftControl))
            {
                sprintText.color = greenColour;
            }
        }

        else
        {
            task1PT2Title.color = greenColour;
            checkingForSecondaryMovement = false;
            trainingCompleteSound.Play();

            StartCoroutine(CallInRoutine());
        }
    }

    void CheckForCallIn()
    {
        if (task2Title.color != greenColour)
        {
            if (Input.GetKeyDown(KeyCode.Alpha5))
            {
                task2Title.color = greenColour;
                task2Text.color = greenColour;

                parachute.SetActive(true);
                smoke.SetActive(true);
                parachutePulledSound.Play();
            }
        }

        else
        {
            checkingForCallIn = false;
            trainingCompleteSound.Play();

            StartCoroutine(DropRoutine());
        }
    }

    void CheckForPickup()
    {
        if (task3Title.color != greenColour)
        {
            RaycastHit hit;
            if (Physics.Raycast(cam.position, cam.forward, out hit, 3))
            {
                if (hit.collider.name == "Drop")
                {
                    pickupUI.SetActive(true);

                    if (Input.GetKeyDown(KeyCode.E))
                    {
                        pickupUI.SetActive(false);
                        drop.SetActive(false);
                        gun.SetActive(true);
                        deagleAnimator.Play("DeagleEquip", -1, 0);
                        gunUI.SetActive(true);
                        task3Title.color = greenColour;
                        task3Text.color = greenColour;
                    }
                }
                else
                {
                    pickupUI.SetActive(false);
                }
            }
            else
            {
                pickupUI.SetActive(false);
            }
        }

        else
        {
            checkingForPickup = false;
            trainingCompleteSound.Play();

            StartCoroutine(ShootingRoutine());
        }
    }

    void CheckForShooting()
    {
        if (targetsDestroyed != 5)
        {
            if (clipAmmo < 5)
            {
                clipAmmoText.color = redColour;
            }
            else
            {
                clipAmmoText.color = greenColour;
            }

            if (Input.GetKeyDown(KeyCode.R) && clipAmmo < clipAmmoMax && reserveAmmo > 0 && reloading == false)
            {
                StartCoroutine(ReloadRoutine());
            }

            if (Input.GetKeyDown(KeyCode.Mouse0) && clipAmmo == 0 && reserveAmmo == 0)
            {
                emptyShotSound.Play();
            }

            if (Input.GetKeyDown(KeyCode.Mouse0) && Time.time > nextFire && clipAmmo > 0 && reloading == false)
            {
                nextFire = Time.time + fireRate;
                gunShot.gameObject.SetActive(true);
                gunShot.Play();
                deagleShotSound.Play();
                deagleAnimator.Play("DeagleRecoil", -1, 0);
                camDeagleRecoilAnimator.Play("CamDeagleRecoil", -1, 0);

                Rigidbody casing = Instantiate(casingPrefab, casingPos.position, Random.rotation);
                casing.velocity = casingPos.transform.parent.right * 1.2f + new Vector3(0f, 1f, 0f);
                Destroy(casing.gameObject, 3);
                Physics.IgnoreCollision(charController, casing.GetComponent<Collider>(), true);

                clipAmmo--;

                if (clipAmmo == 0 && reloading == false && reserveAmmo > 0)
                {
                    StartCoroutine(ReloadRoutine());
                }

                RaycastHit hit;
                if (Physics.Raycast(cam.position, cam.forward, out hit, Mathf.Infinity))
                {
                    if (hit.collider.tag == "TrainingTarget")
                    {
                        AudioSource impact = impactSounds[Random.Range(0, impactSounds.Length)];
                        impact.Play();

                        GameObject target = hit.collider.gameObject.transform.Find("HPText").gameObject;

                        int newHp = int.Parse(target.GetComponent<TextMeshProUGUI>().text) - Random.Range(32, 38);

                        if (newHp > 0)
                        {
                            target.GetComponent<TextMeshProUGUI>().text = newHp.ToString();
                        }

                        else if (newHp <= 0)
                        {
                            target.GetComponent<TextMeshProUGUI>().text = "DEAD";
                            target.GetComponent<TextMeshProUGUI>().color = redColour;
                            target.transform.parent.tag = "Untagged";
                            targetsDestroyed++;
                            task4Counter.text = $"[{targetsDestroyed} / 5]";
                        }
                    }
                }
            }
        }

        else
        {
            checkingForShooting = false;
            task4Title.color = greenColour;
            task4Text.color = greenColour;
            task4Counter.color = greenColour;

            StartCoroutine(GrenadeRoutine());
        }
    }

    void CheckForGrenadeThrow()
    {
        if (grenadeSuccessful == false)
        {
            if (Input.GetKeyUp(KeyCode.Mouse0))
            {
                // throw
                grenade.gameObject.layer = 0;
                grenadeClip.layer = 0;
                grenadePin.layer = 0;
                grenade.transform.parent = null;
                grenade.freezeRotation = false;
                grenade.constraints = RigidbodyConstraints.None;
                grenade.useGravity = true;

                Vector3 throwForce = new Vector3(cam.forward.x, 0.2f, cam.forward.z);
                grenade.AddForce(throwForce * 800);

                if (waitingForExplosion == false)
                {
                    StartCoroutine(GrenadeTimer());
                }
            }
        }
    }

    void CheckForExtraction()
    {
        if (extracted == false)
        {
            if (cam.position.z < -123f)
            {
                extracted = true;
            }
        }

        else
        {
            checkingForExtraction = false;
            task6Title.color = greenColour;
            task6Text.color = greenColour;
            StartCoroutine(EndingRoutine());
        }
    }
}
