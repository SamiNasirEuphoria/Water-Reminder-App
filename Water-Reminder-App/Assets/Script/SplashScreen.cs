using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SplashScreen : MonoBehaviour
{
    public GameObject loadingIcon;
    public GameObject logoImage;
    public Image colorFilledImage;
    private CanvasGroup logoImagecanves;
    public float fadeInDuration, fillAmountDuration, sceneChangeTimer;
    private void Awake()
    {
        logoImagecanves = logoImage.GetComponent<CanvasGroup>();
        logoImagecanves.alpha = 0;
        colorFilledImage.fillAmount = 0;
        loadingIcon.SetActive(true);
    }
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(FadeInAndFill());
    }
    private IEnumerator FadeInAndFill()
    {
        float elapsedTime = 0f;
        float startAlpha = 0f;
        float targetAlpha = 1f;

        while (elapsedTime < fadeInDuration)
        {
            float currentAlpha = Mathf.Lerp(startAlpha, targetAlpha, elapsedTime / fadeInDuration);
            logoImagecanves.alpha = currentAlpha;
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        logoImagecanves.alpha = targetAlpha;

     
        elapsedTime = 0f;
        float startFillAmount = 0f;
        float targetFillAmount = 1f;

        while (elapsedTime < fillAmountDuration)
        {
            float currentFillAmount = Mathf.Lerp(startFillAmount, targetFillAmount, elapsedTime / fillAmountDuration);
            colorFilledImage.fillAmount = currentFillAmount;
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        colorFilledImage.fillAmount = targetFillAmount;

        yield return new WaitForSeconds(sceneChangeTimer);

        if(PlayerPrefsHandler.FirstRun == 1)
        {
            SceneHandler.Instance.LoadScene("WaterReminder");
        }
        else
        {
            SceneHandler.Instance.LoadScene("MainMenu");
        }
       
    }
}
