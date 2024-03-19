using UnityEngine;

public class MainMenuHandler : MonoBehaviour
{
    public Animator myAnimator;
    // Start is called before the first frame update
    void Start()
    {
        myAnimator.SetTrigger("Menu_1");
    }
    public void SetAnimatorTrigger(string triggerName)
    {
        myAnimator.SetTrigger(triggerName);
    }
    public void SwitchScene(string sceneName)
    {
        SceneHandler.Instance.LoadScene(sceneName);
    }
}
