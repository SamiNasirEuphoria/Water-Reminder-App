using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Globalization;

public class WaterCalculator : MonoBehaviour
{
    public TMP_InputField weightField;
    public Text suggestedWater;
    public void CalculateWater()
    {
        if (weightField.text.ToString() != "")
        {
            if (!weightField.text.Contains("Kg"))
            {
                weightField.text = weightField.text + " Kg";
            }
            string str = weightField.text.Replace("Kg", "");
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
    }
}
