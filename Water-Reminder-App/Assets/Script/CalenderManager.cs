using UnityEngine;
using System.IO;

public class CalenderManager : MonoBehaviour
{
    public GameObject calenderEntity, contentObject, emptyFileText;
    private CalenderEntity entity;
    public string jsonFilePath;
    private RectTransform contentObjectTransorm;
    private void Start()
    {
        jsonFilePath = StringConcatenation.JsonCalenderFilePath;
        ReadDataFromJson();
    }
    public void ReadDataFromJson()
    {
        if (File.Exists(jsonFilePath))
        {
            string jsonString = File.ReadAllText(jsonFilePath);
            CalenderRoot deserializedData = JsonUtility.FromJson<CalenderRoot>(jsonString);
            if (deserializedData != null)
            {
                CheckNullObject(deserializedData);
                Debug.Log("the num of entries in calender class is " + deserializedData.root.Count);
                AdjustContentHeight(deserializedData.root.Count);
                var num = deserializedData.root.Count-1;
                for (int i=num; i>= 0; i--) 
                {
                  GameObject ob =  Instantiate(calenderEntity, contentObject.transform);
                  entity = ob.GetComponent<CalenderEntity>();
                  entity.date.text = deserializedData.root[i].date;
                  entity.waterIntake.text = deserializedData.root[i].waterIntakeAmount;
                  entity.percentage.text = deserializedData.root[i].percentage;
                  entity.imageFillAmount = deserializedData.root[i].imageFillAmount;
                }
            }
            else
            {
                emptyFileText.gameObject.SetActive(true);
                Debug.LogWarning("Failed to deserialize JSON data.");
            }
        }
        else
        {
            emptyFileText.gameObject.SetActive(true);
            Debug.LogWarning("JSON file not found at path: " + jsonFilePath);
        }
    }
    public void AdjustContentHeight(int count)
    {
        contentObjectTransorm = contentObject.GetComponent<RectTransform>();
        Vector2 offset = contentObjectTransorm.localScale;
        offset.y = count * 280;
        contentObjectTransorm.sizeDelta = offset;

    }
    public void CheckNullObject(CalenderRoot obj)
    {
        if (obj.root.Count == 0)
        {
            emptyFileText.gameObject.SetActive(true);
        }
        else
        {
            emptyFileText.gameObject.SetActive(false);
        }
    }
}
