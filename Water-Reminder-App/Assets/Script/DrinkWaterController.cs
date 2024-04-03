using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.EventSystems;
using System.IO;
using Newtonsoft.Json;

public class DrinkWaterController : MonoBehaviour
{
    private CanvasGroup waterLevelSliderCanves;
    
    public float fadeInDuration = 2f;
    private bool check;
    public static int waterDrinkAmount;
    private string currentWaterUnit;
    private string jsonFilePath;
    public DataHolder dataHolder;

    private void Start()
    {
        dataHolder = new DataHolder();
        jsonFilePath = Application.dataPath + "/UndoOperation.json";
        SceneStartConfigurations();
        ReadDataFromJson();
        UndoButtonStatus();
    }
    public void ClearAllDataFromJsonFile()
    {
        //to clear data from file
        File.WriteAllText(jsonFilePath, "{}");
        //to complete delete file
        File.Delete(jsonFilePath);
    }
    private void SceneStartConfigurations()
    {
        waterLevelSliderCanves = ObjectReferenceContainer.Instance.waterLimitSlider.GetComponent<CanvasGroup>();
        waterLevelSliderCanves.alpha = 0;
        waterLevelSliderCanves.blocksRaycasts = false;
      
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
                PlayerPrefsHandler.ImageFillAmount = 0;
            }
        }
        else
        {
            //make sure to clear all related player prefs here
            //like water intake list, water limit , filler image
            //like scene get refreshed and assign scene start values to vars
            //clear Json files to load/unload new data 1`    
            PlayerPrefsHandler.WaterLimit = PlayerPrefsHandler.WaterGoal;
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            PlayerPrefsHandler.ImageFillAmount = 0;
            PlayerPrefsHandler.ReachedTodayGoal = 0;
            var num = TodayTime();
            PlayerPrefsHandler.LastSavedDate = num.ToString();
            // clear all data stored in Json class
            DataHolder emptyObject = new DataHolder();
            SaveDataIntoJson(emptyObject);
        }
        if (PlayerPrefsHandler.ReachedTodayGoal == 0)
        {
            UIReferenceContainer.Instance.mainScreenText.text = "Today you need to drink water: ";
        }
        else
        {
            UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
            PlayerPrefsHandler.ImageFillAmount = 1;
        }
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = PlayerPrefsHandler.ImageFillAmount;
        currentWaterUnit = PlayerPrefsHandler.WaterUnit;
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
    public void SetDataToJson()
    {
        Debug.Log("set the values at the start of the day");
        dataHolder.waterIntakeAmount.Push(int.Parse(PlayerPrefsHandler.WaterLimit.Replace("ml","").Replace("oz","")));
        dataHolder.currentTime.Push(PlayerPrefsHandler.DateTime);
        dataHolder.imageFiller.Push(PlayerPrefsHandler.ImageFillAmount);
        SaveDataIntoJson(dataHolder);
    }
    public void UndoButtonStatus()
    {
        if (dataHolder.waterIntakeAmount.Count ==0)
        {
            UIReferenceContainer.Instance.undoButton.gameObject.SetActive(false);
            UIReferenceContainer.Instance.lastIntakeObject.gameObject.SetActive(false);
        }
        else
        {
            UIReferenceContainer.Instance.undoButton.gameObject.SetActive(true);
            UIReferenceContainer.Instance.lastIntakeObject.gameObject.SetActive(true);
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
        int num = int.Parse(abc.Replace("ml", "").Replace("oz",""));
        return num;
    }
    #region UndoOperation
    public void UndoOperation()
    {
        if (dataHolder.waterIntakeAmount.Count>0)
        {
            //now update app data according to json file
            //Update all the playerprefs
            int limit = dataHolder.waterIntakeAmount.Pop();
            PlayerPrefsHandler.WaterLimit = limit.ToString();
            PlayerPrefsHandler.DateTime = dataHolder.currentTime.Pop();
            float initial = PlayerPrefsHandler.ImageFillAmount;
            PlayerPrefsHandler.ImageFillAmount = dataHolder.imageFiller.Pop();
            float final = PlayerPrefsHandler.ImageFillAmount;
            SaveDataIntoJson(dataHolder);
            //now update UI references
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString()+ PlayerPrefsHandler.WaterUnit;
            UIReferenceContainer.Instance.lastIntake.text = PlayerPrefsHandler.DateTime;
            //UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = PlayerPrefsHandler.ImageFillAmount;
            StartCoroutine(AnimateFill(initial,final, 0.25f));
            UndoButtonStatus();
            UpdateScreenText();
        } 
    }
    public void SaveDataIntoJson(DataHolder data)
    {
        string json = JsonConvert.SerializeObject(data);
        if (string.IsNullOrEmpty(jsonFilePath))
        {
            jsonFilePath = Application.dataPath + "/UndoOperation.json";
        }
        File.WriteAllText(jsonFilePath, json);
    }
    public void ReadDataFromJson()
    {
        if (File.Exists(jsonFilePath))
        {
            string jsonString = File.ReadAllText(jsonFilePath);
            DataHolder deserializedData = JsonConvert.DeserializeObject<DataHolder>(jsonString);
            if (deserializedData != null)
            {
                //old method
                //dataHolder = deserializedData;
                //new method
                dataHolder.waterIntakeAmount = new Stack<int>(deserializedData.waterIntakeAmount);
                dataHolder.currentTime = new Stack<string>(deserializedData.currentTime);
                dataHolder.imageFiller = new Stack<float>(deserializedData.imageFiller);

                Debug.Log("Reading data from file: " + string.Join(", ", dataHolder.waterIntakeAmount));
                Debug.Log("Reading data from file: " + string.Join(", ", dataHolder.currentTime));
                Debug.Log("Reading data from file: " + string.Join(", ", dataHolder.imageFiller));
            }
            else
            {
                Debug.LogWarning("Failed to deserialize JSON data.");
            }
        }
        else
        {
            Debug.LogWarning("JSON file not found at path: " + jsonFilePath);
        }
    }
    #endregion
    //in this method drink water button action has performed
    public void DrinkWaterOkButton()
    {
        SetDataToJson();
        StartCoroutine(WaterFlowDown());
        StartCoroutine(WaterLevelRaise());
        UndoButtonStatus();
    }
    IEnumerator WaterLevelRaise()
    {
         yield return new WaitWhile(() => check);
         yield return new WaitForSeconds(0.75f);
         PlayerPrefsHandler.DateTime = DateTime.Now.ToString("h:mm tt");
         UIReferenceContainer.Instance.lastIntake.text = PlayerPrefsHandler.DateTime;
         UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
         CalculatePercentage(currentWaterUnit);
    }
    //these method specified for Oz water unit
    public void CalculatePercentage(string unit)
    {
        string abc = (PlayerPrefsHandler.WaterLimit).Replace(unit, "");
        int x = int.Parse(abc);
        int y = waterDrinkAmount;
        UpdateRemainingAmount(x, y,unit);
        FillSprite();
    }
    public void UpdateRemainingAmount(float total, float consumed, string unit)
    {
        if (PlayerPrefsHandler.ReachedTodayGoal == 0)
        {
            total = total - consumed;
            if (total > 0)
            {
                PlayerPrefsHandler.WaterLimit = total.ToString() + unit;
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            }
            else
            {
                PlayerPrefsHandler.ReachedTodayGoal = 1;
                PlayerPrefsHandler.WaterLimit = PlayerPrefsHandler.WaterGoal;
                UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
                UIReferenceContainer.Instance.lastIntake.text = "Done Todays Goals";
                UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
                PlayerPrefsHandler.ImageFillAmount = 1;
                UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = PlayerPrefsHandler.ImageFillAmount;
            }
        }
        else
        {
            float number = int.Parse(PlayerPrefsHandler.WaterLimit.Replace(unit, ""));
            number = number + consumed;
            PlayerPrefsHandler.WaterLimit = number.ToString() + unit;
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
        }
    }
    public void FillSprite()
    {
        string divider = PlayerPrefsHandler.WaterGoal.Replace("ml", "").Replace("oz", "");
        int divided = int.Parse(divider);
        int _divider = waterDrinkAmount;
        float per = (_divider  *100f) / divided;
        float final = (per / 100f)*1f;
        float cal = Mathf.Round(final * 100f) / 100;
        float initial = PlayerPrefsHandler.ImageFillAmount;
        PlayerPrefsHandler.ImageFillAmount += cal;
        float _final = PlayerPrefsHandler.ImageFillAmount;
        // UIReferenceContainer.Instance.drinkWaterFiller.fillAmount= PlayerPrefsHandler.ImageFillAmount;
        StartCoroutine(AnimateFill(initial, _final, 0.25f));
    }
    private IEnumerator AnimateFill(float startFillAmount, float targetFillAmount, float duration)
    {
        float startTime = Time.time;
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            elapsedTime = Time.time - startTime;
            float t = Mathf.Clamp01(elapsedTime / duration);
            float fillAmount = Mathf.Lerp(startFillAmount, targetFillAmount, t);
            UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = fillAmount;
            yield return null;
        }

        // Ensure the fill amount reaches the target value precisely
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = targetFillAmount;
    }
    public void UpdateScreenText()
    {
        if (dataHolder.waterIntakeAmount.Count>0)
        {
            string total = PlayerPrefsHandler.WaterGoal.Replace("ml", "").Replace("oz", "");
            int _total = int.Parse(total);
            string limit = PlayerPrefsHandler.WaterLimit.Replace("ml", "").Replace("oz", "");
            int _limit = int.Parse(limit);
            if (_limit < _total)
            {
                UIReferenceContainer.Instance.mainScreenText.text = "Today you need to drink water: ";
                PlayerPrefsHandler.ReachedTodayGoal = 0;
            }
            else
            {
                UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
                PlayerPrefsHandler.ReachedTodayGoal = 1;
            }
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
}
