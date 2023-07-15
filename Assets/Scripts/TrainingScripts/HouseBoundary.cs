using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HouseBoundary : MonoBehaviour
{
    bool inHouse = false;
    public AudioSource ambientSound;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Player")
        {
            inHouse = !inHouse;

            if (inHouse == true)
            {
                ambientSound.volume = 0.0225f;
                PlayerMovement.insideHouse = true;
            }
            else
            {
                ambientSound.volume = 0.055f;
                PlayerMovement.insideHouse = false;
            }
        }
    }
}
