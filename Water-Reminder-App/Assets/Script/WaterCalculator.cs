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
            //7-digits means 9000 kg
            if (weightField.text.Length>7)
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
    }
}
