using UnityEngine;
using UnityEngine.UI;

public class CalenderEntity : MonoBehaviour
{
    public Text date, waterIntake, percentage;
    public Image fillImage;
    public float imageFillAmount;
    private void Start()
    {
        fillImage.fillAmount = imageFillAmount;
        Calculations();
    }
    public void Calculations()
    {
        if (fillImage.fillAmount ==0)
        {
            waterIntake.text = "zero water intake";
        }
    }
}
