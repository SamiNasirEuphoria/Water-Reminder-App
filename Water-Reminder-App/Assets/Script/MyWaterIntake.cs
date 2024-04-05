using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;
[RequireComponent(typeof(CanvasGroup))]

public class MyWaterIntake : MonoBehaviour
{
    private CanvasGroup myCanvesGroup;
    public float fadeTimer;
    private float elapsedTime;
    public TMP_InputField inputField;
    public Text currentGoalText;
    private void Start()
    {
        myCanvesGroup = GetComponent<CanvasGroup>();
        IntialMethod();
    }
    public void IntialMethod()
    {
        myCanvesGroup.alpha = 0;
        myCanvesGroup.blocksRaycasts = false;
    }
    public void OpenPanel()
    {
        StartCoroutine(FadeScreenIn());
        inputField.text = "";
        currentGoalText.text = PlayerPrefsHandler.WaterGoal;
    }
    public void ClosePanel()
    {
        StartCoroutine(FadeScreenOut());
    }
    public void OkButton()
    {
        if (!string.IsNullOrEmpty(inputField.text))
        {
            PlayerPrefsHandler.WaterGoal = inputField.text.ToString()+ PlayerPrefsHandler.WaterUnit;
            Debug.Log("hence the new water goal is "+ PlayerPrefsHandler.WaterGoal);
        }
        //before closing update all text and values
        //update water goal
        //update on screen text
        UpdateNormsAndValues();
        ClosePanel();
    }
    public void UpdateNormsAndValues()
    {
        //also sync image fill amount will total percentage (optional)
        int previousGoal = int.Parse(currentGoalText.text.ToString().Replace("ml", "").Replace("oz", ""));
        int waterLimit = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("ml","").Replace("oz",""));
        int LatestGoal = int.Parse(PlayerPrefsHandler.WaterGoal.Replace("ml", "").Replace("oz", ""));
        int intakeAmount = previousGoal - waterLimit;
        int latestAmount = LatestGoal - intakeAmount;
        if (latestAmount > 0)
        {
            PlayerPrefsHandler.WaterLimit = latestAmount.ToString() + PlayerPrefsHandler.WaterUnit;
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            UIReferenceContainer.Instance.mainScreenText.text = "Today you need to drink water: ";
        }
        else
        {
            PlayerPrefsHandler.WaterLimit = PlayerPrefsHandler.WaterGoal;
            UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit;
            UIReferenceContainer.Instance.mainScreenText.text = "You've reached today's goal";
        }
        FillSprite(intakeAmount, LatestGoal);
    }

    public void FillSprite(int Dividend, int Divider)
    {
        float per = (Dividend * 100f) / Divider;
        float final = (per / 100f) * 1f;
        PlayerPrefsHandler.ImageFillAmount = final;
        UIReferenceContainer.Instance.drinkWaterFiller.fillAmount= PlayerPrefsHandler.ImageFillAmount;
    }
        IEnumerator FadeScreenIn()
    {
        elapsedTime = 0;
       while(elapsedTime < fadeTimer)
        {
            elapsedTime += Time.deltaTime/fadeTimer;
            myCanvesGroup.alpha = Mathf.Lerp(0, 1, elapsedTime);
            yield return null;
        }
        myCanvesGroup.alpha = 1;
        myCanvesGroup.blocksRaycasts = true;
    }
    IEnumerator FadeScreenOut()
    {
        elapsedTime = 0;
        while (elapsedTime < fadeTimer)
        {
            elapsedTime += Time.deltaTime / fadeTimer;
            myCanvesGroup.alpha = Mathf.Lerp(1, 0, elapsedTime);
            yield return null;
        }
        myCanvesGroup.alpha = 0;
        myCanvesGroup.blocksRaycasts = false;
    }
}
