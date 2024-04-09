using UnityEngine;
using System.Collections.Generic;
using TMPro;

public class NotificationInterval : MonoBehaviour
{
    public TMP_Dropdown dropDown;
    public GameObject onscreenText;
    public TMP_Text screenText;
    public int durationSelected;
    private List<int> selectedOptionValues = new List<int>();
    private void Start()
    {
        AddOptions();
        SetData();
        dropDown.onValueChanged.AddListener(OnDropdownValueChanged);
        dropDown.value = 0;
        OnDropdownValueChanged(0);
    }
    private void OnDropdownValueChanged(int index)
    {
        durationSelected = selectedOptionValues[index];
        PlayerPrefsHandler.NotificationInterval = durationSelected;
        Debug.Log("the value set here is " + durationSelected);
    }
    public void SetData()
    {
        selectedOptionValues.Add(5);
        selectedOptionValues.Add(15);
        selectedOptionValues.Add(30);
        selectedOptionValues.Add(45);
        selectedOptionValues.Add(59);
    }
    private void AddOptions()
    {
        List<TMP_Dropdown.OptionData> options = new List<TMP_Dropdown.OptionData>();

        options.Add(new TMP_Dropdown.OptionData("05 minutes"));
        options.Add(new TMP_Dropdown.OptionData("15 minutes"));
        options.Add(new TMP_Dropdown.OptionData("30 minutes"));
        options.Add(new TMP_Dropdown.OptionData("45 minutes"));
        options.Add(new TMP_Dropdown.OptionData("59 minutes"));
        dropDown.options = options;
    }
}
