using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class MouseLook : MonoBehaviour
{
    public Camera cam;
    public Transform player;

    public static float mouseSensitivity = 10f;

    string path;
    public static bool playerCanLook = true;
    float xRotation = 0f;

    void Start()
    {
        path = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "OptionsData.json";

        if (File.Exists(path))
        {
            LoadData();
        }

        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    void Update()
    {
        if (playerCanLook == true)
        {
            float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity / 10f;
            float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity / 10f;

            xRotation -= mouseY;
            xRotation = Mathf.Clamp(xRotation, -90f, 90f);

            transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
            player.Rotate(Vector3.up * mouseX);
        }
    }

    void LoadData()
    {
        using StreamReader reader = new StreamReader(path);
        string json = reader.ReadToEnd();

        Options options = JsonUtility.FromJson<Options>(json);
        Debug.Log($"FOV and Volume loaded from file.");

        cam.fieldOfView = options.fovSliderValue;
        AudioListener.volume = options.volumeSliderValue / 100f;
    }
}
