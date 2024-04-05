using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Collections.Generic;
using Newtonsoft.Json;
public class UnitConversions : MonoBehaviour
{
    private static UnitConversions instance;
    public static UnitConversions Instance
    {
        get
        {
            return instance;
        }
    }
    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else if (instance !=this)
        {
            Destroy(this.gameObject);
        }
    }
    public Image kg, lb, ml, oz;
    public Button weightUnit_1, weightUnit_2, waterUnit_1, waterUnit_2;
    public bool check;
    public string jsonFilePath;
    private void Start()
    {
        EnableActive();
        ButtonDelegate();
    }
    public void ButtonDelegate()
    {
        weightUnit_1.onClick.AddListener(Weight);
        weightUnit_2.onClick.AddListener(Weight);
        waterUnit_1.onClick.AddListener(WaterConsumption);
        waterUnit_2.onClick.AddListener(WaterConsumption);
    }
    public void Weight()
    {
        if (kg.isActiveAndEnabled)
        {
            lb.gameObject.SetActive(true);
            kg.gameObject.SetActive(false);
            PlayerPrefsHandler.WeightUnit = "lb";
            KgtoLb();

        }else if (lb.isActiveAndEnabled)
        {
            lb.gameObject.SetActive(false);
            kg.gameObject.SetActive(true);
            PlayerPrefsHandler.WeightUnit = "kg";
            LbToKg();
        }
        check = true;
    }
    public void WaterConsumption()
    {
        if (ml.isActiveAndEnabled)
        {
            oz.gameObject.SetActive(true);
            ml.gameObject.SetActive(false);
            PlayerPrefsHandler.WaterUnit = "oz";
            MLtoOz();
        }
        else if (oz.isActiveAndEnabled)
        {
            ml.gameObject.SetActive(true);
            oz.gameObject.SetActive(false);
            PlayerPrefsHandler.WaterUnit = "ml";
            OzToML();
        }
        check = true;
    }
    public void EnableActive()
    {
        if (PlayerPrefsHandler.WaterUnit== "ml")
        {
            ml.gameObject.SetActive(true);
            oz.gameObject.SetActive(false);
        }
        else 
        {
            ml.gameObject.SetActive(false);
            oz.gameObject.SetActive(true);
        }
        if (PlayerPrefsHandler.WeightUnit == "kg")
        {
            kg.gameObject.SetActive(true);
            lb.gameObject.SetActive(false);
        }
        else 
        {
            kg.gameObject.SetActive(false);
            lb.gameObject.SetActive(true);
        }
    }
    
    public void KgtoLb()
    {
        int value;
        value = int.Parse(PlayerPrefsHandler.Weight.Replace(" Kg", ""));
        value = KilogramsToPounds(value);
        PlayerPrefsHandler.Weight = value.ToString() + " lb";
    }
    public void LbToKg()
    {
        int value;
        value = int.Parse(PlayerPrefsHandler.Weight.Replace(" lb", ""));
        value = PoundsToKilograms(value);
        PlayerPrefsHandler.Weight = value.ToString() + " Kg";

    }
    public int KilogramsToPounds(int kilograms)
    {
        int num = (int)Mathf.Round(kilograms * 2.20462f);
        return  num;
    }

    public int PoundsToKilograms(int pounds)
    {
        int num = (int)Mathf.Round(pounds * 0.453592f);
        // 1 pound is approximately equal to 0.453592 kilograms
        return num;
    }
    public void MLtoOz()
    {
        int value;
        value = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("ml", ""));
        value = MillilitersToFluidOunces(value);
        PlayerPrefsHandler.WaterLimit = value.ToString() + "oz";

        int _value;
        _value = int.Parse(PlayerPrefsHandler.WaterGoal.Replace("ml",""));
        _value = MillilitersToFluidOunces(_value);
        PlayerPrefsHandler.WaterGoal = _value.ToString() + "oz";
    }
    public void OzToML()
    {
        int value;
        value = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("oz", ""));
        value = FluidOuncesToMilliliters(value);
        PlayerPrefsHandler.WaterLimit = value.ToString() + "ml";

        int _value;
        _value = int.Parse(PlayerPrefsHandler.WaterGoal.Replace("oz", ""));
        _value = FluidOuncesToMilliliters(_value);
        PlayerPrefsHandler.WaterGoal = _value.ToString() + "ml";
    } 
    public int MillilitersToFluidOunces(int milliliters)
    {
        int num = (int)Mathf.Round(milliliters / 29.5735f);
        return num;
    }
    public int FluidOuncesToMilliliters(int fluidOunces)
    {
        int num = (int)Mathf.Round(fluidOunces * 29.5735f);
        return num;
    }


    ///json data conversion
    public void ConvertWaterIntakeData(DataHolder data)
    {
        if (data.dataUnit != PlayerPrefsHandler.WaterUnit)
        {
           // Convert water intake amounts to the selected unit
            Stack<int> convertedIntakeAmounts = new Stack<int>();
           // Convert each water intake amount
           foreach (int intakeAmount in data.waterIntakeAmount)
           {
               Debug.Log("the values getting out of the stack is " + intakeAmount);
               int convertedAmount = 0;
               if (data.dataUnit == "oz")
               {
                   convertedAmount = (int)FluidOuncesToMilliliters(intakeAmount);
               }
               else if (data.dataUnit == "ml")
               {
                   convertedAmount = (int)MillilitersToFluidOunces(intakeAmount);
               }
               convertedIntakeAmounts.Push(convertedAmount);
               Debug.Log("Hence the new values comes is " + convertedAmount);
           }
            if (PlayerPrefsHandler.WaterUnit == "ml")
            {
                data.dataUnit = "ml";
            }
            else
            {
                data.dataUnit = "oz";
            }
            while (data.waterIntakeAmount.Count>0)
            {
                data.waterIntakeAmount.Pop();
            }
            while (convertedIntakeAmounts.Count>0)
            {
                data.waterIntakeAmount.Push(convertedIntakeAmounts.Pop());
            }
            // Save the updated data back to JSON
            SaveDataIntoJson(data);
        }
    }

    // Method to save data to JSON file
    private void SaveDataIntoJson(DataHolder data)
    {
        string json = JsonConvert.SerializeObject(data);
        File.WriteAllText(jsonFilePath, json);
    }
}
