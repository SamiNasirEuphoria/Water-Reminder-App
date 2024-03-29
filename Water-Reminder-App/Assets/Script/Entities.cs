using UnityEngine;
using UnityEngine.UI;
[RequireComponent(typeof(Button))]
public class Entities : MonoBehaviour
{
    public int waterLevel;
    public Text waterLevelText;
    private Button myButton;

    private void Start()
    {
        waterLevelConverter();
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(SelectAmount);
    }
    public void SelectAmount()
    {
        DrinkWaterController.waterDrinkAmount = waterLevel;
    }
    public void waterLevelConverter()
    {
            if (PlayerPrefsHandler.WaterUnit == "oz")
            {
                Debug.Log("If water unit set to ounce");
                waterLevel = (int)UnitConversions.Instance.MillilitersToFluidOunces(waterLevel);
                waterLevelText.text = waterLevel.ToString() + "fl.oz";
            }
    }
}
