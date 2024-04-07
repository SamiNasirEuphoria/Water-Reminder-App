using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    Animator myAnimator;
    private void Start()
    {
        myAnimator = ObjectReferenceContainer.Instance.MainScreenAnimator;
        ButtonDelegates();
    }
    public void ButtonDelegates()
    {
        //passing reference to all UI buttons from Reference Container
        UIReferenceContainer.Instance.settingButton.onClick.AddListener(SettingButton);
        UIReferenceContainer.Instance.settingCloseButton.onClick.AddListener(SettingDone);
        UIReferenceContainer.Instance.notificationButton.onClick.AddListener(NotificationPanel);
        UIReferenceContainer.Instance.notifcationCloseButton.onClick.AddListener(NotificationPanelDone);
        UIReferenceContainer.Instance.calenderButton.onClick.AddListener(CalenderMenu);
        UIReferenceContainer.Instance.calenderCloseButton.onClick.AddListener(CalenderDone);
        UIReferenceContainer.Instance.calculatorButton.onClick.AddListener(OpenCalculator);
        UIReferenceContainer.Instance.calculatorCloseButton.onClick.AddListener(CloseCalculator);
        UIReferenceContainer.Instance.unitButton.onClick.AddListener(OpenUnitPanel);
        UIReferenceContainer.Instance.unitCloseButton.onClick.AddListener(CloseUnitPanel);
        UIReferenceContainer.Instance.confettiCloseButton.onClick.AddListener(CloseConfetti);
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
    public void Confetti()
    {
        myAnimator.SetTrigger("Confetti");
    }
    public void CloseConfetti()
    {
        myAnimator.SetTrigger("ConfettiClose");
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
