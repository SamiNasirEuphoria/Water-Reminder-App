using UnityEngine;

public class AnimationEvent : MonoBehaviour
{
    public AudioSource myAudio;
    public void PlaySound()
    {
        myAudio.Play();
    }
}
