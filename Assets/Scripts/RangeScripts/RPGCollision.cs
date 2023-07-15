using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGCollision : MonoBehaviour
{
    public ParticleSystem explosion;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.name != "RPG")
        {
            explosion.gameObject.SetActive(true);

            gameObject.transform.DetachChildren();
            Destroy(gameObject);
        }
    }
}
