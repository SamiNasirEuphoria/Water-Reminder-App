using System.Collections;
using UnityEngine;
using System;

public class DrinkWaterController : MonoBehaviour
{

    private CanvasGroup waterLevelSliderCanves;
    Animator myAnimator;
    public float fadeInDuration = 2f;
    private bool check;
    public static int waterDrinkAmount;
    private string currentWaterUnit;
    private void Start()
    {
        SceneStartConfigurations();
        ButtonDelegates();
    }
    private void SceneStartConfigurations()
    {
        waterLevelSliderCanves = ObjectReferenceContainer.Instance.waterLimitSlider.GetComponent<CanvasGroup>();
        waterLevelSliderCanves.alpha = 0;
        waterLevelSliderCanves.blocksRaycasts = false;
        if (UIReferenceContainer.Instance.waterLimit.text != null)
        {
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
        }
        myAnimator = ObjectReferenceContainer.Instance.MainScreenAnimator;
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = PlayerPrefsHandler.ImageFillAmount;
        currentWaterUnit = PlayerPrefsHandler.WaterUnit;
    }
    public void ButtonDelegates()
    {
        //passing reference to all UI buttons from Reference Container
        UIReferenceContainer.Instance.drinkWaterButton.onClick.AddListener(DrinkWater);
        UIReferenceContainer.Instance.sliderCancelButton.onClick.AddListener(CloseButton);
        UIReferenceContainer.Instance.sliderOkButton.onClick.AddListener(DrinkWaterOkButton);
        UIReferenceContainer.Instance.settingButton.onClick.AddListener(SettingButton);
        UIReferenceContainer.Instance.NotificationButton.onClick.AddListener(NotificationPanel);
        UIReferenceContainer.Instance.CalenderButton.onClick.AddListener(CalenderMenu);
        UIReferenceContainer.Instance.calculatorButton.onClick.AddListener(OpenCalculator);
        UIReferenceContainer.Instance.unitButton.onClick.AddListener(OpenUnitPanel);
        UIReferenceContainer.Instance.unitDoneButton.onClick.AddListener(CloseUnitPanel);
    }

    #region WaterSliderMenu
    //Drink water button basically open slider
    public void DrinkWater()
    {
        StartCoroutine(WaterFlowLevel());   
    }
    IEnumerator WaterFlowLevel()
    {
        var elapsedTime = 0f;
        while (fadeInDuration > elapsedTime)
        {
            elapsedTime += Time.deltaTime / fadeInDuration;
            waterLevelSliderCanves.alpha = Mathf.Lerp(0,1, elapsedTime);
            yield return null;
        }
        waterLevelSliderCanves.alpha = 1;
        waterLevelSliderCanves.blocksRaycasts = true;
    }
    public void CloseButton()
    {
        StartCoroutine(WaterFlowDown());
    }
    IEnumerator WaterFlowDown()
    {
        check = true;
       var  elapsedTime = 0f;
        while (fadeInDuration > elapsedTime)
        {
            elapsedTime += Time.deltaTime/fadeInDuration;
            waterLevelSliderCanves.alpha = Mathf.Lerp(1,0,elapsedTime);
            yield return null;
        }
        waterLevelSliderCanves.alpha = 0;
        waterLevelSliderCanves.blocksRaycasts = false;
        check = false;
    }
    //in this method drink water button action has performed
    public void DrinkWaterOkButton()
    {
        StartCoroutine(WaterFlowDown());
        StartCoroutine(WaterLevelRaise());
    }
    IEnumerator WaterLevelRaise()
    {
        yield return new WaitWhile(() => check);
        yield return new WaitForSeconds(0.75f);
        if (PlayerPrefsHandler.ImageFillAmount < 1)
        { 
            PlayerPrefsHandler.DateTime = DateTime.Now.ToString("h:mm tt");
            UIReferenceContainer.Instance.lastIntake.text = PlayerPrefsHandler.DateTime;
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
            if (currentWaterUnit == "ml")
            {
                CalculatePercentageML();
            }
            else if (currentWaterUnit == "oz")
            {
                CalculatePercentageOZ();
            }
        }
        else
        {
            UIReferenceContainer.Instance.lastIntake.text = "Done Todays Goals";
            UIReferenceContainer.Instance.waterLimit.text = "Done";
        }
    }
    //these method specified for Oz water unit
    public void CalculatePercentageOZ()
    {
        string abc = (PlayerPrefsHandler.WaterLimit).Replace("oz", "");
        int x = int.Parse(abc);
        int y = waterDrinkAmount;
        float result = y * 100;
        float percentage = result / x;
        Debug.Log("You drink of water" + percentage);
        _UpdateRemainingAmount(x, y);
        _FillSprite(percentage);
    }
    public void _UpdateRemainingAmount(float total, float consumed)
    {
        total = total - consumed;
        //implement a method here, where it checks if it reaches daily goals then it perform ceratin actions upon
        PlayerPrefsHandler.WaterLimit = total.ToString() + "oz";
        UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
    }
    public void _FillSprite(float result)
    {
        float final = result / 100;
        PlayerPrefsHandler.ImageFillAmount += final;
        Debug.Log("The percentage we get is " + final);
        Debug.Log("The value saved in player prefs is " + PlayerPrefsHandler.ImageFillAmount);
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount += final;
    }
    // these method specified for Millilitter water unit
    public void CalculatePercentageML()
    {
        string abc = (PlayerPrefsHandler.WaterLimit).Replace("ml","");
        int x = int.Parse(abc);
        int y = waterDrinkAmount;
        float result = y * 100;
        float percentage = result / x;
        Debug.Log("You drink of water"+ percentage);
        UpdateRemainingAmount(x,y);
        FillSprite(percentage);
    }
    public void UpdateRemainingAmount(float total, float consumed)
    {
        total = total - consumed;
        PlayerPrefsHandler.WaterLimit = total.ToString() + "ml";
        UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
    }
    public void FillSprite(float result)
    {
        float final = result / 100;
        PlayerPrefsHandler.ImageFillAmount += final;
        Debug.Log("The percentage we get is "+ final);
        Debug.Log("The value saved in player prefs is " + PlayerPrefsHandler.ImageFillAmount);
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount += final;
    }
    #endregion
    #region BottomMenu
    public void SettingButton()
    {
        myAnimator.SetTrigger("Setting");
    }
    public void SettingDone()
    {
        myAnimator.SetTrigger("SettingClose");
    }
    public void NotificationPanel()
    {
        myAnimator.SetTrigger("Notification");
    }
    public void NotificationPanelDone()
    {
        myAnimator.SetTrigger("NotificationClose");
    }
    public void CalenderMenu()
    {
        myAnimator.SetTrigger("Calender");
    }
    public void CalenderDone()
    {
        myAnimator.SetTrigger("CalenderClose");
    }
    public void OpenCalculator()
    {
        myAnimator.SetTrigger("CalculatorOpen");
    }
    public void CloseCalculator()
    {
        myAnimator.SetTrigger("CalculatorClose");
    }
    public void OpenUnitPanel()
    {
        myAnimator.SetTrigger("UnitOpen");
        UnitConversions.Instance.check = false;
    }
    public void CloseUnitPanel()
    {
        myAnimator.SetTrigger("UnitClose");
        if (UnitConversions.Instance.check)
        {
            SceneHandler.Instance.LoadScene("Splash");
        }   
    }
    #endregion
}