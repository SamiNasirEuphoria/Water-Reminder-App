using System.Collections.Generic;
using System;
[Serializable]
public class CalenderDataHolder 
{
    public string date, waterIntakeAmount, percentage;
    public float imageFillAmount;
}

[Serializable]
public class CalenderRoot
{
    public List<CalenderDataHolder> root;
}