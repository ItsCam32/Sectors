using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GLCollision : MonoBehaviour
{
    public ParticleSystem explosion;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.name != "GrenadeLauncher")
        {
            explosion.gameObject.SetActive(true);

            gameObject.transform.DetachChildren();
            Destroy(gameObject);
        }
    }
}
