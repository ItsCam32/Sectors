using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ClaimReward : MonoBehaviour
{
    public TextMeshProUGUI rewardButtonText;
    public GameObject rewardButtonBG;
    public Button rewardButton;
    public static bool rewardItemOwned = false;
    Shop shopObject = new Shop();
    string path;

    void Start()
    {
        path = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "ShopData.json";

        if (File.Exists(path))
        {
            LoadData();
        }
    }

    void LoadData()
    {
        using StreamReader reader = new StreamReader(path);
        string json = reader.ReadToEnd();

        Shop shopItems = JsonUtility.FromJson<Shop>(json);

        rewardItemOwned = shopItems.slotSixPurchased;
    }

    void SaveData()
    {
        string json = JsonUtility.ToJson(shopObject);

        using StreamWriter writer = new StreamWriter(path);
        writer.Write(json);
    }

    public void ClaimRewardClicked()
    {
        rewardButtonText.text = "CLAIMED";
        rewardButton.interactable = false;
        rewardButtonBG.SetActive(false);

        shopObject.slotSixPurchased = true;
        SaveData();
    }
}
