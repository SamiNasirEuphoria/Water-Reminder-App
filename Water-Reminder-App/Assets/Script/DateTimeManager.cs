using UnityEngine;
using VoxelBusters.EssentialKit;
using System;

public class DateTimeManager : MonoBehaviour
{
    public DateTime currentDateTime, _currentDateTime, selectedTime, _selectedTime;
    public int dayStart, dayEnd;
    public void ShowTimePicker(bool wakeUpTime)
    {
        if (wakeUpTime)
        {
            DatePicker datePicker = DatePicker.CreateInstance(DatePickerMode.Time);
            datePicker.SetOnValueChange((time) =>
            {
                Debug.Log("Time change : " + time);
                currentDateTime = (DateTime)time;
                Debug.Log("The selected time is " + currentDateTime);
            });
            datePicker.SetOnCloseCallback((result) =>
            {
                Debug.Log("Dismissed the picker with selected time : " + result.SelectedDate);
                selectedTime = result.SelectedDate.Value;
                dayStart = selectedTime.Hour;
                PlayerPrefsHandler.WakeupHour = dayStart;
                Debug.Log("hence the time selected is" + selectedTime + "the hour is" + selectedTime.Hour + " and the minute is " + selectedTime.Minute);
            });
            datePicker.Show();
        }
        else
        {
            DatePicker datePicker = DatePicker.CreateInstance(DatePickerMode.Time);
            datePicker.SetOnValueChange((_time) =>
            {
                Debug.Log("Time change : " + _time);
                _currentDateTime = (DateTime)_time;
                Debug.Log("The selected time is " + _currentDateTime);
            });
            datePicker.SetOnCloseCallback((_result) =>
            {
                Debug.Log("Dismissed the picker with selected time : " + _result.SelectedDate);
                _selectedTime = _result.SelectedDate.Value;
                dayEnd = _selectedTime.Hour;
                PlayerPrefsHandler.SleepHour = dayEnd;
                Debug.Log("hence the time selected is" + _selectedTime + "the hour is" + _selectedTime.Hour + " and the minute is " + _selectedTime.Minute);
            });
            datePicker.Show();
        }
           
    }
}
