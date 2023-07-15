using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering.PostProcessing;
using TMPro;

public class OptionsMenu : MonoBehaviour
{
    Options optionsObject = new Options();
    string path;
    bool loadingOptions = false;

    public TextMeshProUGUI[] textToScale;
    List<float> originalTextSizes = new List<float>();

    public Image controlsOutline, videoOutline, audioOutline, accessibilityOutline;
    public TextMeshProUGUI fpsCounterText, sensitivityText, fovText, volumeText;
    public Color defaultColour, selectedColour, disabledColour;

    public TMP_Dropdown windowDropdown, resolutionDropdown, refreshRateDropdown, vsyncDropdown,
                        aaDropdown, dynamicResolutionDropdown, motionBlurDropdown, fpsCounterDropdown,
                        channelDropdown, colourblindDropdown, menuCameraSpeedDropdown, gameCameraSpeedDropdown, uiScaleDropdown;

    public Slider sensitivitySlider, fovSlider, volumeSlider;

    public PostProcessVolume volume;
    MotionBlur motionBlur = null;

    List<string> resolutionsList = new List<string>();
    List<string> refreshRatesList = new List<string>();

    void Start()
    {
        Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.ExclusiveFullScreen, Screen.currentResolution.refreshRate);
        StartCoroutine(FPSCounterTimer());
        GetResolutions();
        GetRefreshRates();
        volume.profile.TryGetSettings(out motionBlur);

        path = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "OptionsData.json";

        if (File.Exists(path))
        {
            LoadData();
        }

        foreach (TextMeshProUGUI uiText in textToScale)
        {
            originalTextSizes.Add(uiText.fontSize);
        } 
    }

    public void ExitToDesktop()
    {
        Application.Quit();
    }

    IEnumerator FPSCounterTimer()
    {
        while (true)
        {
            if (fpsCounterText.gameObject.activeSelf == true)
            {
                fpsCounterText.text = ((int)(1f / Time.unscaledDeltaTime)).ToString();
            }

            yield return new WaitForSeconds(0.075f);
        }
    }

    public void TitleClicked(Image clickedTitle)
    {
        controlsOutline.color = defaultColour;
        videoOutline.color = defaultColour;
        audioOutline.color = defaultColour;
        accessibilityOutline.color = defaultColour;
        clickedTitle.color = selectedColour;
    }

    void GetResolutions()
    {
        Resolution[] resolutions = Screen.resolutions;

        foreach (var res in resolutions)
        {
            string resToCheck = res.width + "x" + res.height;

            if (!resolutionsList.Contains(resToCheck))
            {
                resolutionsList.Add(res.width + "x" + res.height);
            }
        }

        resolutionsList.Reverse();
        resolutionDropdown.AddOptions(resolutionsList);
    }

    void GetRefreshRates()
    {
        int refreshRate = Screen.currentResolution.refreshRate;

        if (refreshRate == 60)
        {
            refreshRatesList.Add("60hz");
        }

        else if (refreshRate == 75)
        {
            refreshRatesList.Add("75hz");
            refreshRatesList.Add("60hz");
        }

        else if (refreshRate == 144)
        {
            refreshRatesList.Add("144hz");
            refreshRatesList.Add("75hz");
            refreshRatesList.Add("60hz");
        }

        else if (refreshRate == 240)
        {
            refreshRatesList.Add("240hz");
            refreshRatesList.Add("144hz");
            refreshRatesList.Add("75hz");
            refreshRatesList.Add("60hz");
        }

        else if (refreshRate > 245)
        {
            refreshRatesList.Add("360hz");
            refreshRatesList.Add("240hz");
            refreshRatesList.Add("144hz");
            refreshRatesList.Add("75hz");
            refreshRatesList.Add("60hz");
        }

        refreshRateDropdown.AddOptions(refreshRatesList);
    }

    public void WindowModeChanged()
    {
        if (windowDropdown.value == 0)
        {
            // Fullscreen
            Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.ExclusiveFullScreen, int.Parse(refreshRateDropdown.options[refreshRateDropdown.value].text.Split('h')[0]));
            refreshRateDropdown.enabled = true;
            refreshRateDropdown.GetComponent<Image>().color = selectedColour;
        }

        else if (windowDropdown.value == 1)
        {
            // Windowed
            Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.Windowed);
            refreshRateDropdown.enabled = false;
            refreshRateDropdown.GetComponent<Image>().color = disabledColour;
        }

        optionsObject.windowModeIndex = windowDropdown.value;
        SaveData();
    }

    public void ResolutionChanged()
    {
        int width = int.Parse(resolutionDropdown.options[resolutionDropdown.value].text.Split('x')[0]);
        int height = int.Parse(resolutionDropdown.options[resolutionDropdown.value].text.Split('x')[1]);
        Screen.SetResolution(width, height, Screen.fullScreen, int.Parse(refreshRateDropdown.value.ToString().Split('h')[0]));

        optionsObject.resolutionIndex = resolutionDropdown.value;
        SaveData();
    }

    public void DynamicResolutionChanged()
    {
        if (dynamicResolutionDropdown.value == 0)
        {
            Camera.main.allowDynamicResolution = true;
        }

        else if (dynamicResolutionDropdown.value == 1)
        {
            Camera.main.allowDynamicResolution = false;
        }

        optionsObject.dynamicResolutionIndex = dynamicResolutionDropdown.value;
        SaveData();
    }

    public void RefreshRateChanged()
    {
        Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.ExclusiveFullScreen, int.Parse(refreshRateDropdown.options[refreshRateDropdown.value].text.Split('h')[0]));

        optionsObject.refreshRateIndex = refreshRateDropdown.value;
        SaveData();
    }

    public void VsyncChanged()
    {
        if (vsyncDropdown.value == 0)
        {
            QualitySettings.vSyncCount = 1;
        }

        else if (vsyncDropdown.value == 1)
        {
            QualitySettings.vSyncCount = 0;
        }

        optionsObject.vSyncIndex = vsyncDropdown.value;
        SaveData();
    }

    public void MotionBlurChanged()
    {
        if (motionBlur != null)
        {
            if (motionBlurDropdown.value == 0)
            {
                motionBlur.enabled.value = enabled;
            }

            else if (motionBlurDropdown.value == 1)
            {
                motionBlur.enabled.value = false;
            }
        }
        
        optionsObject.motionBlurIndex = motionBlurDropdown.value;
        SaveData();
    }

    public void AAChanged()
    {
        switch (aaDropdown.value)
        {
            case 0:
                QualitySettings.antiAliasing = 0;
                break;
            case 1:
                QualitySettings.antiAliasing = 2;
                break;
            case 2:
                QualitySettings.antiAliasing = 4;
                break;
            case 3:
                QualitySettings.antiAliasing = 8;
                break;
            case 4:
                QualitySettings.antiAliasing = 16;
                break;
        }

        optionsObject.antiAliasingIndex = aaDropdown.value;
        SaveData();
    }

    public void FPSCounterChanged()
    {
        if (fpsCounterDropdown.value == 0)
        {
            fpsCounterText.gameObject.SetActive(true);
        }

        else if (fpsCounterDropdown.value == 1)
        {
            fpsCounterText.gameObject.SetActive(false);
        }

        optionsObject.fpsCounterIndex = fpsCounterDropdown.value;
        SaveData();
    }

    public void SensitivitySliderChanged()
    {
        sensitivityText.text = sensitivitySlider.value.ToString();

        MouseLook.mouseSensitivity = sensitivitySlider.value;

        optionsObject.sensitivitySliderValue = (int)sensitivitySlider.value;
        SaveData();
    }

    public void FOVSliderChanged()
    {
        fovText.text = fovSlider.value.ToString();

        optionsObject.fovSliderValue = (int)fovSlider.value;
        SaveData();
    }

    public void VolumeSliderChanged()
    {
        volumeText.text = volumeSlider.value.ToString();

        AudioListener.volume = volumeSlider.value / 100f;

        optionsObject.volumeSliderValue = (int)volumeSlider.value;
        SaveData();
    }

    public void ChannelChanged()
    {
        if (channelDropdown.value == 0)
        {
            AudioSettings.speakerMode = AudioSpeakerMode.Stereo;
        }

        else if (channelDropdown.value == 1)
        {
            AudioSettings.speakerMode = AudioSpeakerMode.Mono;
        }

        optionsObject.channelIndex = channelDropdown.value;
        SaveData();
    }

    public void ColourblindModeChanged()
    {
        GameObject.Find("CVDFilter").GetComponent<CVDFilter>().ChangeMode(colourblindDropdown.value);

        optionsObject.colourblindIndex = colourblindDropdown.value;
        SaveData();
    }

    public void MenuCameraSpeedChanged()
    {
        switch (menuCameraSpeedDropdown.value)
        {
            case 0:
                CameraMove.rotationTime = 0.5f;
                break;
            case 1:
                CameraMove.rotationTime = 2.5f;
                break;
            case 2:
                CameraMove.rotationTime = 5f;
                break;
        }

        optionsObject.menuCameraSpeedIndex = menuCameraSpeedDropdown.value;
        SaveData();
    }

    public void GameCameraSpeedChanged()
    {
        switch (gameCameraSpeedDropdown.value)
        {
            case 0:
                Time.timeScale = 1f;
                break;
            case 1:
                Time.timeScale = 0.75f;
                break;
            case 2:
                Time.timeScale = 0.4f;
                break;
        }

        optionsObject.gameCameraSpeedIndex = gameCameraSpeedDropdown.value;
        SaveData();
    }

    public void UIScaleChanged()
    {
        switch (uiScaleDropdown.value)
        {
            case 0:
                ScaleUIText(0f);
                break;
            case 1:
                ScaleUIText(0.05f);
                break;
            case 2:
                ScaleUIText(0.075f);
                break;
        }
    }

    void ScaleUIText(float fontIncreaseValue)
    {
        // Use increase value instead of absolute value because not all texts are same font size
        for (int i = 0; i < textToScale.Length - 1; i++)
        {
            // Set to default sizes then increase
            textToScale[i].fontSize = originalTextSizes[i];
            textToScale[i].fontSize += fontIncreaseValue;
        }
    }

    void SaveData()
    {
        if (loadingOptions == false)
        {
            string json = JsonUtility.ToJson(optionsObject);

            using StreamWriter writer = new StreamWriter(path);
            writer.Write(json);

            Debug.Log($"Options data updated. ({path})");
        }
    }

    void LoadData()
    {
        using StreamReader reader = new StreamReader(path);
        string json = reader.ReadToEnd();

        Options options = JsonUtility.FromJson<Options>(json);
        Debug.Log($"Options data loaded from file. ({path})");

        // Change settings
        loadingOptions = true;

        windowDropdown.value = options.windowModeIndex;
        resolutionDropdown.value = options.resolutionIndex;
        dynamicResolutionDropdown.value = options.dynamicResolutionIndex;
        refreshRateDropdown.value = options.refreshRateIndex;
        vsyncDropdown.value = options.vSyncIndex;
        motionBlurDropdown.value = options.motionBlurIndex;
        aaDropdown.value = options.antiAliasingIndex;
        fpsCounterDropdown.value = options.fpsCounterIndex;
        sensitivitySlider.value = options.sensitivitySliderValue;
        fovSlider.value = options.fovSliderValue;
        volumeSlider.value = options.volumeSliderValue;
        channelDropdown.value = options.channelIndex;
        colourblindDropdown.value = options.colourblindIndex;
        menuCameraSpeedDropdown.value = options.menuCameraSpeedIndex;
        gameCameraSpeedDropdown.value = options.gameCameraSpeedIndex;

        loadingOptions = false;
    }
}