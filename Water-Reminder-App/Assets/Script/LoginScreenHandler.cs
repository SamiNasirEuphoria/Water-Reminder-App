using UnityEngine;
using UnityEngine.UI;
public class LoginScreenHandler : MonoBehaviour
{
    public Animator myAnimator;
    // Start is called before the first frame update
   
    void Start()
    {
        myAnimator.SetTrigger("Menu1");
        UIReferenceContainerMenu.Instance.backToMenu_1.onClick.AddListener(BacktoMenuOne);
        UIReferenceContainerMenu.Instance.backToMenu_2.onClick.AddListener(BacktoMenuTwo);
    }
    public void BacktoMenuOne()
    {
        myAnimator.SetTrigger("BackToMenu1");
    }
    public void BacktoMenuTwo()
    {
        myAnimator.SetTrigger("BackToMenu2");
    }
    public void SetAnimatorTrigger(string triggerName)
    {
        myAnimator.SetTrigger(triggerName);
    }
    public void SwitchScene(string sceneName)
    {
        SceneHandler.Instance.LoadScene(sceneName);
    }
    public void LoginAttempted()
    {
        PlayerPrefsHandler.FirstRun = 1;
    }
    public void WeightPlaceholder()
    {
        if (!(UIReferenceContainerMenu.Instance.weightField.text.Contains("Kg")))
        {
            UIReferenceContainerMenu.Instance.weightField.text = UIReferenceContainerMenu.Instance.weightField.text + "Kg";
        }
    }
    public void WaterPlaceholder()
    {
        if (!(UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text.Contains("ml")))
        {
            UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text = UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text + "ml";
        }
    }
    public void CheckforInputValueCallAnimation(string triggerName)
    {
       if(string.IsNullOrEmpty(UIReferenceContainerMenu.Instance.weightField.text))
        {
            iOSPlugin.ShowAlert("Please insert your weight","It is necessary to set a weight to continue.");
        }
        else
        {
            //use player prefs handler to store the value
            int weight = int.Parse(UIReferenceContainerMenu.Instance.weightField.text.Replace("Kg",""));
            int water = weight * 35;
            UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text = water.ToString()+" ml";
            myAnimator.SetTrigger(triggerName);
        }
    }
    public void PlayerPrefsSetter()
    {
        PlayerPrefsHandler.Weight = UIReferenceContainerMenu.Instance.weightField.text;
        PlayerPrefsHandler.WaterLimit = UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text;
    }
}
