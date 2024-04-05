using UnityEngine;

public class AnimationEvent : MonoBehaviour
{
    public AudioSource myAudio;
    private void Start()
    {
        
    }
    public void PlaySound()
    {
        myAudio.Play();
        Debug.Log("Sound is playing");
    }
}
