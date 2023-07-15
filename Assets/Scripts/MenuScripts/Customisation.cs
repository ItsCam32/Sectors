using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Customisation : MonoBehaviour
{
    public TextMeshProUGUI customisationText;

    public GameObject[] headItems, miscItems;
    GameObject equippedHeadItem, equippedMiscItem;

    public GameObject[] hairItems, headwearItems, beardItems, shopItems;
    public Button previousItemButton, nextItemButton, equipItemButton;
    public Transform previousItemPosition, currentItemPosition, nextItemPosition;
    GameObject previousItem, currentItem, nextItem;
    int itemIndex = 1;

    public Button previousCategoryButton, nextCategoryButton;   
    string[] customisationCategories = new string[] { "HAIR", "HEADWEAR", "BEARDS" };
    GameObject[] equippedItems = new GameObject[4]; // same as category order
    int categoryIndex = 0;

    public Image previousSlotImage, currentSlotImage, nextSlotImage;
    public Color equippedSlotColour, defaultSlotColour, lockedColour;
    public TextMeshProUGUI equipButtonText;

    void Start()
    {
        previousItem = hairItems[0];
        currentItem = hairItems[1];
        nextItem = hairItems[2];

        previousItem.transform.position = previousItemPosition.position;
        currentItem.transform.position = currentItemPosition.position;
        nextItem.transform.position = nextItemPosition.position;

        CheckForEquippedAndLockedItem();
    }

    public void CategoryChanged(string direction)
    {
        if (direction == "Previous")
        {
            categoryIndex--;
            nextCategoryButton.interactable = true;

            if (categoryIndex == 0)
            {
                previousCategoryButton.interactable = false;
            }
        }
        else if (direction == "Next")
        {
            categoryIndex++;
            previousCategoryButton.interactable = true;

            if (categoryIndex == 2)
            {
                nextCategoryButton.interactable = false;
            }
        }

        customisationText.text = customisationCategories[categoryIndex];

        itemIndex = 1;
        previousItemButton.interactable = true;
        nextItemButton.interactable = true;

        // Show new items
        MoveItems(0, 1, 2);
    }

    GameObject[] GetCategoryArrayFromIndex(int index)
    {
        switch (index)
        {
            case 0:
                return hairItems;
            case 1:
                return headwearItems;
            case 2:
                return beardItems;
        }

        return hairItems;
    }

    public void ChangeItem(string direction)
    {
        GameObject[] category = GetCategoryArrayFromIndex(categoryIndex);

        if (direction == "Previous")
        {
            nextItemButton.interactable = true;
            itemIndex--;

            if (itemIndex == 0)
            {
                previousItemButton.interactable = false;
            }
        }
        else if (direction == "Next")
        {
            previousItemButton.interactable = true;
            itemIndex++;

            if (itemIndex + 1 == category.Length)
            {
                nextItemButton.interactable = false;
            }
        }

        MoveItems(itemIndex - 1, itemIndex, itemIndex + 1);
    }

    void MoveItems(int previousIndex, int currentIndex, int nextIndex)
    {
        // Move old items back
        if (previousItem != null)
        {
            previousItem.transform.position = Vector3.zero;
        }

        currentItem.transform.position = Vector3.zero;

        if (nextItem != null)
        {
            nextItem.transform.position = Vector3.zero;
        }

        // Set new items
        if (previousIndex >= 0)
        {
            previousItem = GetCategoryArrayFromIndex(categoryIndex)[previousIndex];
            previousItem.transform.position = new Vector3(previousItemPosition.position.x,
                                                      GameObject.Find(previousItem.transform.parent.name).transform.position.y,
                                                      previousItemPosition.position.z);
        }
        else
        {
            previousItem = null;
        }
  
        currentItem = GetCategoryArrayFromIndex(categoryIndex)[currentIndex];
        currentItem.transform.position = new Vector3(currentItemPosition.position.x,
                                                      GameObject.Find(currentItem.transform.parent.name).transform.position.y,
                                                      currentItemPosition.position.z);

        if (nextIndex < GetCategoryArrayFromIndex(categoryIndex).Length)
        {
            nextItem = GetCategoryArrayFromIndex(categoryIndex)[nextIndex];
            nextItem.transform.position = new Vector3(nextItemPosition.position.x,
                                                      GameObject.Find(nextItem.transform.parent.name).transform.position.y,
                                                      nextItemPosition.position.z);
        }
        else
        {
            nextItem = null;
        }

        CheckForEquippedAndLockedItem();
    }

    public void EquipAndUnequipItems()
    {
        switch (customisationText.text)
        {
            case "HAIR":
                equippedItems[0] = currentItem;
                break;
            case "HEADWEAR":
                equippedItems[1] = currentItem;
                break;
            case "BEARDS":
                equippedItems[2] = currentItem;
                break;
        }

        if (currentItem.tag == "Head")
        {
            foreach (GameObject item in headItems)
            {
                if (item.name == currentItem.name)
                {
                    item.GetComponent<MeshRenderer>().enabled = !item.GetComponent<MeshRenderer>().enabled;

                    if (item.GetComponent<MeshRenderer>().enabled == true)
                    {
                        equippedHeadItem = item;
                    }
                }
                else
                {
                    item.GetComponent<MeshRenderer>().enabled = false;
                }
            }
        }

        else if (currentItem.tag == "Misc")
        {
            foreach (GameObject item in miscItems)
            {
                if (item.name == currentItem.name)
                {
                    item.GetComponent<MeshRenderer>().enabled = !item.GetComponent<MeshRenderer>().enabled;

                    if (item.GetComponent<MeshRenderer>().enabled == true)
                    {
                        equippedMiscItem = item;
                    }
                }
                else
                {
                    item.GetComponent<MeshRenderer>().enabled = false;
                }
            }
        }

        CheckForEquippedAndLockedItem();
    }

    void CheckForEquippedAndLockedItem()
    {
        // Check if previous, current or next items are the currently equipped item, or locked
        if (equippedItems[categoryIndex] == currentItem)
        {
            if (equipButtonText.text == "UNEQUIP")
            {
                currentSlotImage.color = equippedSlotColour;
                goto here;
            }
        }

        previousSlotImage.color = defaultSlotColour;
        currentSlotImage.color = defaultSlotColour;
        nextSlotImage.color = defaultSlotColour;
        equipButtonText.text = "EQUIP";
        equipItemButton.interactable = true;

        here:

        foreach (GameObject shopItem in shopItems)
        {
            Color slotColour;
            GameObject itemParent = shopItem.transform.parent.gameObject;

            if (itemParent.transform.Find("Purchased").GetComponent<TextMeshProUGUI>().text == "PURCHASED")
            {
                slotColour = defaultSlotColour;
            }
            else
            {
                slotColour = lockedColour;
            }

            if (previousItem != null && previousItem.name == shopItem.name)
            {
                previousSlotImage.color = slotColour;
            }

            else if (currentItem.name == shopItem.name)
            {
                currentSlotImage.color = slotColour;

                if (slotColour == lockedColour)
                {
                    equipItemButton.interactable = false;
                    equipButtonText.text = "LOCKED";
                }  
            }

            else if (nextItem != null && nextItem.name == shopItem.name)
            {
                nextSlotImage.color = slotColour;
            }
        }

        if (previousItem != null && equippedItems[categoryIndex] == previousItem)
        {
            previousSlotImage.color = equippedSlotColour;
        }

        else if (equippedItems[categoryIndex] == currentItem)
        {
            if (equipButtonText.text == "EQUIP")
            {
                currentSlotImage.color = equippedSlotColour;
                equipButtonText.text = "UNEQUIP";
            }

            else if (equipButtonText.text == "UNEQUIP")
            {
                currentSlotImage.color = defaultSlotColour;
                equipButtonText.text = "EQUIP";
            }
        }

        else if (nextItem != null && equippedItems[categoryIndex] == nextItem)
        {
            nextSlotImage.color = equippedSlotColour;
        }
    }
}