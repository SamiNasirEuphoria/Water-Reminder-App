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
    private static string waterUnit = "WaterString";
    public static string WaterUnit
    {
        set
        {
            PlayerPrefs.SetString(waterUnit,value);
        }
        get
        {
            return PlayerPrefs.GetString(waterLimit);
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
}
