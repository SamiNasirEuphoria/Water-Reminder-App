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
    public Button defaultEntityButton,
        settingButton,settingCloseButton, notificationButton,notifcationCloseButton,
        calenderButton,calenderCloseButton, undoButton, confettiCloseButton;
    public Image drinkWaterFiller;
    public Text waterLimit, lastIntake, lastIntakeObject,mainScreenText;
    [Header("Setting Panel References")]
    public Button calculatorButton, calculatorCloseButton;
    public Button unitButton, unitCloseButton;
   
}
