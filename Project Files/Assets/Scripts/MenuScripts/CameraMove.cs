using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMove : MonoBehaviour
{
    public static float rotationTime = 0.5f;
    public Animator gamemodeAnimator;

    public IEnumerator RotateCam(Vector3 rotationAngle)
    {
      var fromAngle = Camera.main.transform.rotation;
      var toAngle = Quaternion.Euler(Camera.main.transform.eulerAngles + rotationAngle);

      for (var t = 0f; t < 1; t += Time.deltaTime / rotationTime)
      {
        Camera.main.transform.rotation = Quaternion.Lerp(fromAngle, toAngle, t);
        yield return null;
      }
    }

    public void MoveCamera(Transform angle)
    {
      StartCoroutine(RotateCam(angle.eulerAngles));
    }

    public void PlayClicked()
    {
        gamemodeAnimator.Play("GamemodeSelection");
    }
}
