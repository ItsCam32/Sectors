using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoadRangeScene : MonoBehaviour
{
    // Load from range loading scene to range scene

    public Slider progressBar;

    void Start()
    {
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene()
    {
        yield return null;

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync("RangeScene");
        asyncOperation.allowSceneActivation = false;

        while (!asyncOperation.isDone)
        {
            if (asyncOperation.progress >= 0.9f)
            {
                yield return new WaitForSeconds(Random.Range(0.5f, 1));
                progressBar.value = Random.Range(5, 20);
                yield return new WaitForSeconds(Random.Range(0.5f, 1));
                progressBar.value = Random.Range(21, 70);
                yield return new WaitForSeconds(Random.Range(0.5f, 1));
                progressBar.value = Random.Range(71, 95);
                yield return new WaitForSeconds(3);
                progressBar.value = 100;

                asyncOperation.allowSceneActivation = true;
            }

            yield return null;
        }
    }
}
