using UnityEngine;
using UnityEngine.UI;

public class UIReferenceContainer : MonoBehaviour
{
    private static UIReferenceContainer instance;
    public static UIReferenceContainer Instance
    {
        get
        {
            return instance;
        }
    }
    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(this.gameObject);
        }
    }
    public Button drinkWaterButton, sliderCancelButton, sliderOkButton,
        settingButton, NotificationButton, CalenderButton;
    public Image drinkWaterFiller;
    public Text waterLimit, lastIntake, lastIntakeObject;
    [Header("Setting Panel References")]
    public Button calculatorButton;
    public Button unitButton, unitDoneButton;
   
}
