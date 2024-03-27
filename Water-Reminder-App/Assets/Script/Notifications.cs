using UnityEngine;
using System;

public class Notifications : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
#if UNITY_IOS
        UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound | UnityEngine.iOS.NotificationType.Alert);

#endif
    }
    private void OnApplicationPause(bool pause)
    {
#if UNITY_IOS

        UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
        UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();
        //UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(); ;
        if (pause)
        {
            DateTime dateToNotify = DateTime.Now.AddSeconds(30);

            UnityEngine.iOS.LocalNotification notif = new UnityEngine.iOS.LocalNotification();
            notif.applicationIconBadgeNumber = 1;
            notif.fireDate = dateToNotify;
            notif.alertTitle = "Water Reminder";
            notif.alertBody = "Go & drink water.";
            notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
            //notif.repeatInterval = (UnityEngine.iOS.CalendarUnit.Minute);


            UnityEngine.iOS.LocalNotification notif_1 = new UnityEngine.iOS.LocalNotification();
            notif.applicationIconBadgeNumber = 2;
            notif.fireDate = DateTime.Now.AddSeconds(60);
            notif.alertTitle = "Water Reminder";
            notif.alertBody = "Go & drink water.";
            notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
            //notif.repeatInterval = (UnityEngine.iOS.CalendarUnit.Minute);

            UnityEngine.iOS.LocalNotification notif_2 = new UnityEngine.iOS.LocalNotification();
            notif.applicationIconBadgeNumber = 3;
            notif.fireDate = DateTime.Now.AddSeconds(120);
            notif.alertTitle = "Water Reminder";
            notif.alertBody = "Go & drink water.";
            notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
            notif.repeatInterval = (UnityEngine.iOS.CalendarUnit.Minute);


            UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
            UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif_1);
            UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif_2);

        }
#endif
    }
}
