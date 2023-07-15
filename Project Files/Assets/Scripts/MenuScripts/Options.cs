using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Options
{
    // Save options as persistent data

    // Dropdown indexes (dropdown.value)
    public int windowModeIndex;
    public int resolutionIndex;
    public int dynamicResolutionIndex;
    public int refreshRateIndex;
    public int vSyncIndex;
    public int motionBlurIndex;
    public int antiAliasingIndex;
    public int fpsCounterIndex;
    public int sensitivitySliderValue;
    public int fovSliderValue;
    public int volumeSliderValue;
    public int channelIndex;
    public int colourblindIndex;
    public int menuCameraSpeedIndex;
    public int gameCameraSpeedIndex;
}