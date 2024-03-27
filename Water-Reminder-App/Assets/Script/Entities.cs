using UnityEngine;
using UnityEngine.UI;
[RequireComponent(typeof(Button))]
public class Entities : MonoBehaviour
{
    public int waterLevel;
    private Button myButton;
    private void Start()
    {
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(SelectAmount);
    }
    public void SelectAmount()
    {
        DrinkWaterController.waterDrinkAmount = waterLevel;
    }
}
