using UnityEngine;

public static class PlayerPrefsHandler
{
    private static string weight = "Weight";
    public static string Weight
    {
        set
        {
            PlayerPrefs.SetString(weight, value);
        }
        get
        {
            return PlayerPrefs.GetString(weight);
        }
    }
    //this variable will represent daily water consumption
    private static string waterLimit = "WaterLimit";
    public static string WaterLimit
    {
        set
        {
            PlayerPrefs.SetString(waterLimit, value);
        }
        get
        {
            return PlayerPrefs.GetString(waterLimit);
        }
    }
    private static string waterUnit = "WaterUnit";
    public static string WaterUnit
    {
        set
        {
            PlayerPrefs.SetString(waterUnit,value);
        }
        get
        {
            return PlayerPrefs.GetString(waterUnit);
        }
    }
    private static string waterGoal = "WaterGoal";
    public static string WaterGoal
    {
        get
        {
            return PlayerPrefs.GetString(waterGoal);
        }
        set
        {
            PlayerPrefs.SetString(waterGoal,value);
        }
    }
    private static string weightUnit = "WeightUnit";
    public static string WeightUnit
    {
        set
        {
            PlayerPrefs.SetString(weightUnit, value);
        }
        get
        {
            return PlayerPrefs.GetString(weightUnit);
        }
    }
    private static string firstRun="FirstRun";
    public static int FirstRun
    {
        get
        {
            return PlayerPrefs.GetInt(firstRun);
        }
        set
        {
            PlayerPrefs.SetInt(firstRun, value);
        }
    }
    private static string dateTime = "DateTime";
    public static string DateTime
    {
        get
        {
            return PlayerPrefs.GetString(dateTime);
        }
        set
        {
            PlayerPrefs.SetString(dateTime, value);
        }
    }
    private static string imageFillAmount = "ImageFillAmount";
    public static float ImageFillAmount
    {
        get
        {
            return PlayerPrefs.GetFloat(imageFillAmount);
        }
        set
        {
            PlayerPrefs.SetFloat(imageFillAmount,value);
        }
    }
    //this prefs isn't get using anywhere
    private static string reachedGoal = "ReachedTodayGoal";
    public static int ReachedTodayGoal
    {
        get
        {
           return PlayerPrefs.GetInt(reachedGoal);
        }
        set
        {
            PlayerPrefs.SetInt(reachedGoal,value);
        }
    }
    private static string lastSavedDate = "LastSavedDate";
    public static string LastSavedDate
    {
        get
        {
            return PlayerPrefs.GetString(lastSavedDate);
        }
        set
        {
            PlayerPrefs.SetString(lastSavedDate,value);
        }
    }
    private static string wakeupHour = "WakeupHour";
    public static int WakeupHour
    {
        get
        {
           return PlayerPrefs.GetInt(wakeupHour);
        }
        set
        {
            PlayerPrefs.SetInt(wakeupHour, value);
        }
    }
    private static string sleepHour = "SleepHour";
    public static int SleepHour
    {
        get
        {
            return PlayerPrefs.GetInt(sleepHour);
        }
        set
        {
            PlayerPrefs.SetInt(sleepHour, value);
        }
    }
    private static string notificationInterval = "NotificationInterval";
    public static int NotificationInterval
    {
        get
        {
            return PlayerPrefs.GetInt(notificationInterval);
        }
        set
        {
            PlayerPrefs.SetInt(notificationInterval, value);
        }
    }
}
