using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
public class NotificationManager : MonoBehaviour
{
    private DateTime dayStart, dayEnd,now;
    private void Start()
    {
        NotificationAlertDialoug();
        now = DateTime.Now;
        dayStart = new DateTime(now.Year, now.Month, now.Day, 9,0,0);
        dayEnd = new DateTime(now.Year, now.Month, now.Day, 19, 0, 0);
        Debug.Log("Current time is " + now);
        Debug.Log("Day start at" + dayStart);
        Debug.Log("Day end at"+ dayEnd);
    }
    public void NotificationAlertDialoug()
    {
#if UNITY_IOS
        UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
#endif
        //StartCoroutine(CallForAlert());
    }
    IEnumerator CallForAlert()
    {
        yield return null;

    }
    private void OnApplicationPause(bool pause)
    {
#if UNITY_IOS
        UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
        UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();
        if (pause)
        {
            List<UnityEngine.iOS.LocalNotification> notifications = new List<UnityEngine.iOS.LocalNotification>();

            DateTime _now = DateTime.Now.AddSeconds(10);
            DateTime nextFireTime = _now; // Initial next fire time
            int count = 1;
            //while (now >= dayStart && nextFireTime <= dayEnd) // Ensure notifications are scheduled until 11 PM
            while (count <= 10)
            {
                UnityEngine.iOS.LocalNotification notification = new UnityEngine.iOS.LocalNotification();
                //this line is producing error
                notification.applicationIconBadgeNumber = count;
                notification.fireDate = nextFireTime;
                notification.alertTitle = "Notification Title";
                notification.alertBody = "Notification Body";
                notification.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;

                notifications.Add(notification);

                // Update next fire time for the next notification
                nextFireTime = nextFireTime.AddMinutes(1);
                count++;
                Debug.Log("This time the count is " + count);
            }
            // Schedule all notifications
            foreach (UnityEngine.iOS.LocalNotification notif in notifications)
            {
                Debug.Log("Application get paused and a notification get schedule");
                UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
            }
        }
#endif
    }



    //private void SingleNotificationSetting()
    //{
    //    DateTime dateToNotify = DateTime.Now.AddSeconds(30);

    //    UnityEngine.iOS.LocalNotification notif = new UnityEngine.iOS.LocalNotification();
    //    notif.fireDate = dateToNotify;
    //    notif.alertTitle = "Water Reminder";
    //    notif.alertBody = "Go & drink water.";
    //    notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
    //    notif.repeatInterval = (UnityEngine.iOS.CalendarUnit)324;

    //    UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
    //}
    //private void MutipleNotificationSchedule()
    //{
    //    List<UnityEngine.iOS.LocalNotification> notifications = new List<UnityEngine.iOS.LocalNotification>();

    //    DateTime _now = DateTime.Now.AddSeconds(10);
    //    DateTime nextFireTime = _now; // Initial next fire time
    //    int count = 1;
    //    //while (now >= dayStart && nextFireTime <= dayEnd) // Ensure notifications are scheduled until 11 PM
    //    while (count <= 10)
    //    {
    //        UnityEngine.iOS.LocalNotification notification = new UnityEngine.iOS.LocalNotification();
    //        //this line is producing error
    //        //notification.applicationIconBadgeNumber = count;
    //        notification.fireDate = nextFireTime;
    //        notification.alertTitle = "Notification Title";
    //        notification.alertBody = "Notification Body";
    //        notification.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;

    //        notifications.Add(notification);

    //        // Update next fire time for the next notification
    //        nextFireTime = nextFireTime.AddMinutes(1);
    //        count++;
    //        Debug.Log("This time the count is " + count);
    //    }
    //    // Schedule all notifications
    //    foreach (UnityEngine.iOS.LocalNotification notif in notifications)
    //    {
    //        Debug.Log("Application get paused and a notification get schedule");
    //        UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
    //    }
    //}
}
