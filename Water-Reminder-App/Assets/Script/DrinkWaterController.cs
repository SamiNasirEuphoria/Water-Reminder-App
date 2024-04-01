using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.EventSystems;

public class DrinkWaterController : MonoBehaviour
{
    private CanvasGroup waterLevelSliderCanves;
    Animator myAnimator;
    public float fadeInDuration = 2f;
    private bool check;
    public static int waterDrinkAmount;
    private string currentWaterUnit;
    private List<int> item = new List<int>();

    public WaterIntakeList obj;

    private void Start()
    {
        obj = new WaterIntakeList();
        SceneStartConfigurations();
        ButtonDelegates();
    }
    private void SceneStartConfigurations()
    {
        waterLevelSliderCanves = ObjectReferenceContainer.Instance.waterLimitSlider.GetComponent<CanvasGroup>();
        waterLevelSliderCanves.alpha = 0;
        waterLevelSliderCanves.blocksRaycasts = false;
        myAnimator = ObjectReferenceContainer.Instance.MainScreenAnimator;
       
        currentWaterUnit = PlayerPrefsHandler.WaterUnit;
        if (PlayerPrefsHandler.ReachedTodayGoal==0)
        {
            UIReferenceContainer.Instance.mainScreenText.text = "Today you need to drink water: ";
        }
        else
        {
            UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
        }

        if (LastSavedTime() == TodayTime())
        {
            //make current date check and assign water limit accordingly
            if (!string.IsNullOrEmpty(PlayerPrefsHandler.WaterLimit))
            {
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            }
            else
            {
                PlayerPrefsHandler.WaterLimit = PlayerPrefsHandler.WaterGoal;
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            }
        }
        else
        {
            //make sure to clear all related player prefs here
            //like water intake list, water limit , filler image
            //like scene get refreshed and assign scene start values to vars
            PlayerPrefsHandler.WaterLimit = PlayerPrefsHandler.WaterGoal;
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            PlayerPrefsHandler.ImageFillAmount = 0;
            PlayerPrefsHandler.ReachedTodayGoal = 0;
            var num = TodayTime();
            PlayerPrefsHandler.LastSavedDate = num.ToString();
        }
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = PlayerPrefsHandler.ImageFillAmount;
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
        if (UIReferenceContainer.Instance.defaultEntityButton != null)
        {
            UIReferenceContainer.Instance.defaultEntityButton.onClick.Invoke();
            ExecuteEvents.Execute(UIReferenceContainer.Instance.defaultEntityButton.gameObject, new PointerEventData(EventSystem.current), ExecuteEvents.pointerDownHandler);
            ExecuteEvents.Execute(UIReferenceContainer.Instance.defaultEntityButton.gameObject, new PointerEventData(EventSystem.current), ExecuteEvents.pointerUpHandler);
        }

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
    public int StringToIntConversion(string abc)
    {
        int num = int.Parse(abc.Replace("ml", ""));
        return num;
    }
    #region UndoOperation
   
    
    #endregion
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
        if (PlayerPrefsHandler.ReachedTodayGoal == 0)
        {
            total = total - consumed;
            if (total > 0)
            {
                PlayerPrefsHandler.WaterLimit = total.ToString() + "oz";
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            }
            else
            {
                PlayerPrefsHandler.ReachedTodayGoal = 1;
                var num = StringToIntConversion(PlayerPrefsHandler.WaterGoal);
                int _num = (int)UnitConversions.Instance.MillilitersToFluidOunces(num);
                PlayerPrefsHandler.WaterLimit = _num.ToString()+"oz";
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
                UIReferenceContainer.Instance.lastIntake.text = "Done Todays Goals";
                UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
            }
        }
        else
        {
            float number = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("oz", ""));
            number = number + consumed;
            PlayerPrefsHandler.WaterLimit = number.ToString() + "oz";
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
        }
    }
    public void _FillSprite(float result)
    {
        if (PlayerPrefsHandler.ImageFillAmount < 1)
        {
            float final = result / 100;
            PlayerPrefsHandler.ImageFillAmount += final;
            Debug.Log("The percentage we get is " + final);
            Debug.Log("The value saved in player prefs is " + PlayerPrefsHandler.ImageFillAmount);
            UIReferenceContainer.Instance.drinkWaterFiller.fillAmount += final;
        }
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
        if (PlayerPrefsHandler.ReachedTodayGoal ==0)
        {
            total = total - consumed;
            if (total >0)
            {
                PlayerPrefsHandler.WaterLimit = total.ToString() + "ml";
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            }
            else
            {
                PlayerPrefsHandler.ReachedTodayGoal = 1;
                PlayerPrefsHandler.WaterLimit = PlayerPrefsHandler.WaterGoal;
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
                UIReferenceContainer.Instance.lastIntake.text = "Done Todays Goals";
                UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
            }  
        }
        else
        {
            float number = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("ml",""));
            number = number + consumed;
            PlayerPrefsHandler.WaterLimit = number.ToString() + "ml";
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;  
        }
    }
    public void FillSprite(float result)
    {
        if (PlayerPrefsHandler.ImageFillAmount < 1)
        {
            float final = result / 100;
            PlayerPrefsHandler.ImageFillAmount += final;
            Debug.Log("The percentage we get is " + final);
            Debug.Log("The value saved in player prefs is " + PlayerPrefsHandler.ImageFillAmount);
            UIReferenceContainer.Instance.drinkWaterFiller.fillAmount += final;
        }
    }
    public int LastSavedTime()
    {
        Debug.Log("Last saved date is"+ PlayerPrefsHandler.LastSavedDate);
        int date = int.Parse(PlayerPrefsHandler.LastSavedDate);
        DateTime savedDate=  new DateTime(DateTime.Now.Year, DateTime.Now.Month, date);
        var _date = savedDate.Day;
        return _date;
    }
    public int TodayTime()
    {
       
        long unixTime = (long)(DateTime.UtcNow - new DateTime(1970, 1, 1)).TotalSeconds;
        DateTime dateTime = new DateTime(1970, 1, 1).AddSeconds(unixTime);
        var date = dateTime.Day;
        Debug.Log("today's date is "+date);
        return date;
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
