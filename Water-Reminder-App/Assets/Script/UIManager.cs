using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    Animator myAnimator;
    private void Start()
    {
        myAnimator = ObjectReferenceContainer.Instance.MainScreenAnimator;
    }
    public void ButtonDelegates()
    {
        //passing reference to all UI buttons from Reference Container
        UIReferenceContainer.Instance.settingButton.onClick.AddListener(SettingButton);
        UIReferenceContainer.Instance.NotificationButton.onClick.AddListener(NotificationPanel);
        UIReferenceContainer.Instance.CalenderButton.onClick.AddListener(CalenderMenu);
        UIReferenceContainer.Instance.calculatorButton.onClick.AddListener(OpenCalculator);
        UIReferenceContainer.Instance.unitButton.onClick.AddListener(OpenUnitPanel);
        UIReferenceContainer.Instance.unitDoneButton.onClick.AddListener(CloseUnitPanel);
    }
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
}
