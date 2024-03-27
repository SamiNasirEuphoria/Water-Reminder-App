using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectReferenceContainer : MonoBehaviour
{
    private static ObjectReferenceContainer instance;
    public static ObjectReferenceContainer Instance
    {
        get
        {
            return instance;
        }
    }
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(this.gameObject);
        }
    }
    public GameObject waterLimitSlider;
    public Animator MainScreenAnimator;
}
