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
        currentGoalText.text = PlayerPrefsHandler.WaterGoal;
    }
    public void IntialMethod()
    {
        myCanvesGroup.alpha = 0;
        myCanvesGroup.blocksRaycasts = false;
    }
    public void OpenPanel()
    {
        StartCoroutine(FadeScreenIn());
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
        }
        ClosePanel();
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
