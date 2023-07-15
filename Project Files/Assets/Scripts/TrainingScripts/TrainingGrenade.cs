using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrainingGrenade : MonoBehaviour
{
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "LandingCollider")
        {
            Training.grenadeSuccessful = true;
        }
    }
}
