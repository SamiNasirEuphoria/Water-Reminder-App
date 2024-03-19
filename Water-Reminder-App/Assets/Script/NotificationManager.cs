using UnityEngine;
using System;
using System.Collections;
public class NotificationManager : MonoBehaviour
{
    public void NotificationAlertDialoug()
    {
        StartCoroutine(CallForAlert());
    }
    IEnumerator CallForAlert()
    {
        yield return new WaitForSeconds(2.5f);
#if UNITY_IOS
        UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
#endif
    }
    private void OnApplicationPause(bool pause)
    {
#if UNITY_IOS

        UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
        UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();

        if (pause)
        {
            DateTime dateToNotify = DateTime.Now.AddSeconds(30);

            UnityEngine.iOS.LocalNotification notif = new UnityEngine.iOS.LocalNotification();
            notif.fireDate = dateToNotify;
            notif.alertTitle = "Water Reminder";
            notif.alertBody = "Go & drink water.";
            notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
            notif.repeatInterval = UnityEngine.iOS.CalendarUnit.Minute;

            UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
        }
#endif

    }


}
