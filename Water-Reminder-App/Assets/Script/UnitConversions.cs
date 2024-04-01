using UnityEngine;
using UnityEngine.UI;
public class UnitConversions : MonoBehaviour
{
    private static UnitConversions instance;
    public static UnitConversions Instance
    {
        get
        {
            return instance;
        }
    }
    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else if (instance !=this)
        {
            Destroy(this.gameObject);
        }
    }
    public Image kg, lb, ml, oz;
    public Button weightUnit_1, weightUnit_2, waterUnit_1, waterUnit_2;
    public bool check;
    private void Start()
    {
        EnableActive();
        ButtonDelegate();
    }
    public void ButtonDelegate()
    {
        weightUnit_1.onClick.AddListener(Weight);
        weightUnit_2.onClick.AddListener(Weight);
        waterUnit_1.onClick.AddListener(WaterConsumption);
        waterUnit_2.onClick.AddListener(WaterConsumption);
    }
    public void Weight()
    {
        if (kg.isActiveAndEnabled)
        {
            lb.gameObject.SetActive(true);
            kg.gameObject.SetActive(false);
            PlayerPrefsHandler.WeightUnit = "lb";

        }else if (lb.isActiveAndEnabled)
        {
            lb.gameObject.SetActive(false);
            kg.gameObject.SetActive(true);
            PlayerPrefsHandler.WeightUnit = "kg";
        }
        check = true;
    }
    public void WaterConsumption()
    {
        if (ml.isActiveAndEnabled)
        {
            oz.gameObject.SetActive(true);
            ml.gameObject.SetActive(false);
            PlayerPrefsHandler.WaterUnit = "oz";
            MLtoOz();
        }
        else if (oz.isActiveAndEnabled)
        {
            ml.gameObject.SetActive(true);
            oz.gameObject.SetActive(false);
            PlayerPrefsHandler.WaterUnit = "ml";
            OzToML();
        }
        check = true;
    }
    public void EnableActive()
    {
        if (PlayerPrefsHandler.WaterUnit== "ml")
        {
            ml.gameObject.SetActive(true);
            oz.gameObject.SetActive(false);
        }
        else 
        {
            ml.gameObject.SetActive(false);
            oz.gameObject.SetActive(true);
        }
        if (PlayerPrefsHandler.WeightUnit == "kg")
        {
            kg.gameObject.SetActive(true);
            lb.gameObject.SetActive(false);
        }
        else 
        {
            kg.gameObject.SetActive(false);
            lb.gameObject.SetActive(true);
        }
    }
    //public void WaterLimitConversion()
    //{
    //    int value;
    //    if (PlayerPrefsHandler.WaterUnit == "oz")
    //        {
    //            value = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("ml", ""));
    //            value = (int)UnitConversions.Instance.MillilitersToFluidOunces(value);
    //            UIReferenceContainer.Instance.waterLimit.text = value.ToString() + "oz";
    //            PlayerPrefsHandler.WaterLimit = UIReferenceContainer.Instance.waterLimit.text;
    //        }
    //        else if (PlayerPrefsHandler.WaterUnit == "ml")
    //        {
    //            Debug.Log("Now the water will be in ML");
    //            value = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("oz", ""));
    //            value = (int)UnitConversions.Instance.FluidOuncesToMilliliters(value);
    //            UIReferenceContainer.Instance.waterLimit.text = value.ToString() + "ml";
    //            PlayerPrefsHandler.WaterLimit = UIReferenceContainer.Instance.waterLimit.text;
    //        }
    //}
    public void MLtoOz()
    {
        int value;
        value = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("ml", ""));
        value = (int)MillilitersToFluidOunces(value);
        PlayerPrefsHandler.WaterLimit = value.ToString() + "oz";

        int _value;
        _value = int.Parse(PlayerPrefsHandler.WaterGoal.Replace("ml",""));
        _value = (int)MillilitersToFluidOunces(_value);
        PlayerPrefsHandler.WaterGoal = _value.ToString() + "oz";
    }
    public void OzToML()
    {
        int value;
        value = int.Parse(PlayerPrefsHandler.WaterLimit.Replace("oz", ""));
        value = (int)FluidOuncesToMilliliters(value);
        PlayerPrefsHandler.WaterLimit = value.ToString() + "ml";

        int _value;
        _value = int.Parse(PlayerPrefsHandler.WaterGoal.Replace("oz", ""));
        _value = (int)MillilitersToFluidOunces(_value);
        PlayerPrefsHandler.WaterGoal = _value.ToString() + "ml";
    } 
    public double MillilitersToFluidOunces(int milliliters)
    {
        return milliliters / 29.5735;
    }
    public double FluidOuncesToMilliliters(int fluidOunces)
    {
        return fluidOunces * 29.5735;
    }
}
