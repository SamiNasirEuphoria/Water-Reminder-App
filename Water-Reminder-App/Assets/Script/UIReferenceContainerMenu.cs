using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class UIReferenceContainerMenu : MonoBehaviour
{
    private static UIReferenceContainerMenu instance;
    public static UIReferenceContainerMenu Instance
    {
        get
        {
            return instance;
        }
    }
    private void Start()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance !=this)
        {
            Destroy(this.gameObject);
        }
    }
    public TMP_InputField weightField;
    public TMP_InputField quantityOfWaterToShow;
}
