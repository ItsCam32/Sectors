using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ShopMenu : MonoBehaviour
{
    Shop shopObject = new Shop();
    string path;

    public Color boughtBGColour, boughtOutlineColour;
    public TextMeshProUGUI playerBalanceText;

    int balance;

    void Start()
    {
        // Load shop item states
        path = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "ShopData.json";
        if (File.Exists(path))
        {
            LoadData();
        }
    }

    void Update()
    {
        // Update player's balance
        balance = PlayerPrefs.GetInt("PlayerBalance", 1000);
        playerBalanceText.text = balance.ToString();
    }

    public void ItemClicked(GameObject itemParent)
    {
        if (balance >= int.Parse(itemParent.transform.Find("SPValue").GetComponent<TextMeshProUGUI>().text))
        {
            // Buy
            PlayerPrefs.SetInt("PlayerBalance", balance - int.Parse(itemParent.transform.Find("SPValue").GetComponent<TextMeshProUGUI>().text));

            itemParent.transform.Find("Button").GetComponent<Button>().interactable = false;
            itemParent.transform.Find("Outline").GetComponent<Image>().color = boughtOutlineColour;
            itemParent.transform.Find("BG").GetComponent<Image>().color = boughtBGColour;
            itemParent.transform.Find("SP").GetComponent<TextMeshProUGUI>().text = "";
            itemParent.transform.Find("SPValue").GetComponent<TextMeshProUGUI>().text = "";
            itemParent.transform.Find("Purchased").GetComponent<TextMeshProUGUI>().text = "PURCHASED";
            UpdateShopObject(itemParent);
        }
    }

    void UpdateShopObject(GameObject itemParent)
    {
        switch (itemParent.name)
        {
            case "Box1":
                shopObject.slotOnePurchased = true;
                break;
            case "Box2":
                shopObject.slotTwoPurchased = true;
                break;
            case "Box3":
                shopObject.slotThreePurchased = true;
                break;
            case "Box4":
                shopObject.slotFourPurchased = true;
                break;
            case "Box5":
                shopObject.slotFivePurchased = true;
                break;
            case "Box6":
                shopObject.slotSixPurchased = true;
                break;
            case "Box7":
                shopObject.slotSevenPurchased = true;
                break;
            case "Box8":
                shopObject.slotEightPurchased = true;
                break;
            case "Box9":
                shopObject.slotNinePurchased = true;
                break;
            case "Box10":
                shopObject.slotTenPurchased = true;
                break;
        }

        SaveData();
    }

    void SaveData()
    {
        string json = JsonUtility.ToJson(shopObject);

        using StreamWriter writer = new StreamWriter(path);
        writer.Write(json);

        Debug.Log($"Shop data updated. ({path})");
    }

    void LoadData()
    {
        using StreamReader reader = new StreamReader(path);
        string json = reader.ReadToEnd();

        Shop shop = JsonUtility.FromJson<Shop>(json);
        Debug.Log($"Shop data loaded from file. ({path})");

        UpdateShopFromFile(1, shop.slotOnePurchased);
        UpdateShopFromFile(2, shop.slotTwoPurchased);
        UpdateShopFromFile(3, shop.slotThreePurchased);
        UpdateShopFromFile(4, shop.slotFourPurchased);
        UpdateShopFromFile(5, shop.slotFivePurchased);
        UpdateShopFromFile(6, shop.slotSixPurchased);
        UpdateShopFromFile(7, shop.slotSevenPurchased);
        UpdateShopFromFile(8, shop.slotEightPurchased);
        UpdateShopFromFile(9, shop.slotNinePurchased);
        UpdateShopFromFile(10, shop.slotTenPurchased);
    }

    void UpdateShopFromFile(int slotNumber, bool purchasedState)
    {
        GameObject itemParent = GameObject.Find("Box" + slotNumber);

        if (purchasedState == true)
        {
            itemParent.transform.Find("Button").GetComponent<Button>().interactable = false;
            itemParent.transform.Find("Outline").GetComponent<Image>().color = boughtOutlineColour;
            itemParent.transform.Find("BG").GetComponent<Image>().color = boughtBGColour;
            itemParent.transform.Find("SP").GetComponent<TextMeshProUGUI>().text = "";
            itemParent.transform.Find("SPValue").GetComponent<TextMeshProUGUI>().text = "";
            itemParent.transform.Find("Purchased").GetComponent<TextMeshProUGUI>().text = "PURCHASED";
        }
    }
}
