using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Globalization;

public class WaterCalculator : MonoBehaviour
{
    public TMP_InputField weightField;
    public Text suggestedWater;
    private int playerPrefsValue;
    private void Start()
    {
        CalculatorSwitchCase();
    }
    public void CalculateWater()
    {
        switch (playerPrefsValue)
        {
            case 1:
                if (weightField.text.ToString() != "")
                {
                    //7-digits means 9000 kg
                    if (weightField.text.Length > 6)
                    {
                        weightField.text = weightField.text.Substring(0, 4);
                    }
                    if (!weightField.text.Contains("Kg"))
                    {
                        weightField.text = weightField.text + " Kg";
                    }
                    string str = weightField.text.Replace(" Kg", "");
                    if (str == "")
                    {
                        int num = 0;
                        suggestedWater.text = (num * 35).ToString();
                        suggestedWater.text = suggestedWater.text + " ml";
                    }
                    else
                    {
                        int num = int.Parse(str, CultureInfo.InvariantCulture);
                        suggestedWater.text = (num * 35).ToString();
                        suggestedWater.text = suggestedWater.text + " ml";
                    }
                }
                break;
            case 2:
                //for this simply convert ml to oz , 1 kg/35ml ,, 1kg = 0.033814fl.oz
                if (weightField.text.ToString() != "")
                {
                    //7-digits means 9000 kg
                    if (weightField.text.Length > 6)
                    {
                        weightField.text = weightField.text.Substring(0, 4);
                    }
                    if (!weightField.text.Contains("Kg"))
                    {
                        weightField.text = weightField.text + " Kg";
                    }
                    string str = weightField.text.Replace(" Kg", "");
                    if (str == "")
                    {
                        int num = 0;
                        suggestedWater.text = (num * 0.033814).ToString();
                        suggestedWater.text = suggestedWater.text + "oz";
                    }
                    else
                    {
                        float num = int.Parse(str, CultureInfo.InvariantCulture);
                        suggestedWater.text = (num * 0.033814).ToString();
                        suggestedWater.text = suggestedWater.text + " oz";
                    }
                }
                break;
            case 3:
                if (weightField.text.ToString() != "")
                {
                    //7-digits means 9000 kg
                    if (weightField.text.Length > 6)
                    {
                        weightField.text = weightField.text.Substring(0, 4);
                    }
                    if (!weightField.text.Contains("lb"))
                    {
                        weightField.text = weightField.text + " lb";
                    }
                    string str = weightField.text.Replace(" lb", "");
                    if (str == "")
                    {
                        int num = 0;
                        suggestedWater.text = (num * 16).ToString();
                        suggestedWater.text = suggestedWater.text + "ml";
                    }
                    else
                    {
                        float num = int.Parse(str, CultureInfo.InvariantCulture);
                        suggestedWater.text = (num * 16).ToString();
                        suggestedWater.text = suggestedWater.text + " ml";
                    }
                }
                break;
            case 4:
                //1 lb weight consume 0.035ml of water
                if (weightField.text.ToString() != "")
                {
                    //7-digits means 9000 kg
                    if (weightField.text.Length > 6)
                    {
                        weightField.text = weightField.text.Substring(0, 4);
                    }
                    if (!weightField.text.Contains("lb"))
                    {
                        weightField.text = weightField.text + " lb";
                    }
                    string str = weightField.text.Replace(" lb", "");
                    if (str == "")
                    {
                        int num = 0;
                        suggestedWater.text = (num * 0.035).ToString();
                        suggestedWater.text = suggestedWater.text + "oz";
                    }
                    else
                    {
                        float num = int.Parse(str, CultureInfo.InvariantCulture);
                        suggestedWater.text = (num * 0.035).ToString();
                        suggestedWater.text = suggestedWater.text + " oz";
                    }
                }
                break;
        }
    }
    public void CalculatorSwitchCase()
    {
        if (PlayerPrefsHandler.WeightUnit == "kg" && PlayerPrefsHandler.WaterUnit == "ml")
        {
            playerPrefsValue = 1;
        }
        else if (PlayerPrefsHandler.WeightUnit == "kg" && PlayerPrefsHandler.WaterUnit == "oz")
        {
            playerPrefsValue = 2;
        }
        else if (PlayerPrefsHandler.WeightUnit == "lb" && PlayerPrefsHandler.WaterUnit == "ml")
        {
            playerPrefsValue = 3;
        }
        else if (PlayerPrefsHandler.WeightUnit == "lb" && PlayerPrefsHandler.WaterUnit == "oz")
        {
            playerPrefsValue = 4;
        }
    }
}
