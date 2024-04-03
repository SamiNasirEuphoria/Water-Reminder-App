using UnityEngine;
using System;
using System.Collections.Generic;

[Serializable]
public class DataHolder
{
    public Stack<int> waterIntakeAmount= new Stack<int>();
    public Stack<float> imageFiller = new Stack<float>();
    public Stack<string> currentTime = new Stack<string>();
    public string dataUnit;
}
