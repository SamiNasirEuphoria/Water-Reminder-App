using UnityEngine;
using System.Collections;
using TMPro;


[RequireComponent(typeof(CanvasGroup))]
public class MyWeight : MonoBehaviour
{
    private CanvasGroup myCanvesGroup;
    public float fadeTimer;
    private float elapsedTime;
    public TMP_InputField inputField;
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
    }
    public void ClosePanel()
    {
        StartCoroutine(FadeScreenOut());
    }
    public void OkButton()
    {
        if (!string.IsNullOrEmpty(inputField.text))
        {
            PlayerPrefsHandler.Weight = inputField.text.ToString() + PlayerPrefsHandler.WeightUnit;
        }
        ClosePanel();
    }
    IEnumerator FadeScreenIn()
    {
        elapsedTime = 0;
        while (elapsedTime < fadeTimer)
        {
            elapsedTime += Time.deltaTime / fadeTimer;
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
