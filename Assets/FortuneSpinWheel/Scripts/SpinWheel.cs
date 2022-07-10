using UnityEngine;

public class SpinWheel : MonoBehaviour
{
    [Header("The random Wheel spin force between :")]
    [Range(10f, 200f)]
    public float MinWheelSpinForce = 35;
    [Range(10f, 200f)]
    public float MaxWheelSpinForce = 70;
    [Header("Wheel light when hitting box")]
    public bool DesactiveWheelLight;
    [Header("Wheel audio")]
    public AudioClip WheelHit;
    public AudioClip WheelHitWin;

    [Header("Don't touch anything below")]
    public Rigidbody2D Wheel;
    public HingeJoint2D Pointer;
    public SpriteRenderer WheelLight;
    public AudioSource WheelAudio;
    public int UniqueWheelId;

    private CustomWheelBox customWheelBox;
    private BoxWinPrice boxWinPrice;
    private BoxWinPriceDemoScene boxWinPriceDemo;
    private SpriteRenderer wheelLightSprite;
    private Color32 lightColor;
    private bool turnRight;
    private bool canSpin = false;
    private bool canPushWheel;
    private int boxAngleSpace;
    private float startWheelAngle;
    private bool canAnimToCenter;
    private float centerValue;
    private int boxNum;
    private bool playSound;

    // Start is called before the first frame update
    void Start()
    {
        canSpin = true;
        WheelAudio.clip = WheelHit;
        SetWheelAngleSize(UniqueWheelId);
        wheelLightSprite = GameObject.Find("wheelLight").GetComponent<SpriteRenderer>();
        lightColor = wheelLightSprite.color;
        customWheelBox = GetComponent<CustomWheelBox>();
        boxWinPrice = GetComponent<BoxWinPrice>();

        if (boxWinPrice == null)
        {
            boxWinPriceDemo = GetComponent<BoxWinPriceDemoScene>();
        }
    }

    public int TakeTheID() => UniqueWheelId;

    public void SpinTheWheel()
    {
        if (canSpin || Wheel.bodyType == RigidbodyType2D.Static) {
            if (Pointer.transform.localPosition.y != 5.86f || Pointer.transform.localPosition.x != 0)
                Pointer.transform.localPosition = new Vector3(0, 5.86f, 0);
            WheelLight.color = lightColor;
            Wheel.bodyType = RigidbodyType2D.Dynamic;
            var force = Random.Range(MinWheelSpinForce, MaxWheelSpinForce) * transform.localScale.x;
            JointAngleLimits2D limits = Pointer.limits;
            WheelAudio.clip = WheelHit;
            if (!turnRight) {
                limits.min = 50f;
                limits.max = 0f;
                Pointer.limits = limits;
                Wheel.AddTorque(force, ForceMode2D.Impulse);
                turnRight = true;
            } else
            {
                limits.min = 0f;
                limits.max = -50f;
                Pointer.limits = limits;
                Wheel.AddTorque(-force, ForceMode2D.Impulse);
                turnRight = false;
            }
            canPushWheel = false;
            canSpin = false;
        }
    }

    private void SetWheelAngleSize(int caseNum)
    {
        if (caseNum == 0)
        {
            startWheelAngle = 30;
            boxAngleSpace = 60;
        }
        if (caseNum == 1)
        {
            startWheelAngle = 22.5f;
            boxAngleSpace = 45;
        }
        if (caseNum == 2)
        {
            startWheelAngle = 54;
            boxAngleSpace = 36;
        }
    }


    public void WinningPrice(int caseNumber)
    {
        boxNum = caseNumber - 1;
        centerValue = (boxAngleSpace * caseNumber) + startWheelAngle - boxAngleSpace;
        if (centerValue > 360)
            centerValue = centerValue - 360;
        canAnimToCenter = true;
    }

    private bool myApproximation(float a, float b, float tolerance)
    {
        return (Mathf.Abs(a - b) < tolerance);
    }

    // Update is called once per frame
    void Update()
    {
        PlayingWheelSound();
        if (!canPushWheel)
        {
            Wheel.transform.localPosition = new Vector3(0, 0, 0);
        }
        if (canAnimToCenter)
        {
            var actualZValue = Wheel.transform.localEulerAngles.z;
            if (actualZValue < centerValue)
            {
                Wheel.transform.localEulerAngles = new Vector3(0, 0, Mathf.Lerp(actualZValue, centerValue, 0.1f));
            } 
            else
            {
                Wheel.transform.localEulerAngles = new Vector3(0, 0, Mathf.Lerp(actualZValue, centerValue, 0.1f));
            }
            if (myApproximation(actualZValue, centerValue, 2f))
            {
                WheelAudio.clip = WheelHitWin;
                LaunchWinPrice();
            }
        }
        if (!canSpin)
        {
            if (Wheel.angularVelocity == 0 && !canPushWheel && Wheel.bodyType == RigidbodyType2D.Dynamic)
            {
                Invoke("AddForceToWheel", 0.3f);
                canPushWheel = true;
            }
        }
    }

    private void PlayingWheelSound()
    {
        if (!turnRight) {
            if (!playSound && Pointer.transform.localRotation.z > 0.35f)
            {
                playSound = true;
            }
            if (playSound && Pointer.transform.localRotation.z <= 0.35f)
            {
                //play sound
                WheelAudio.Play();
                playSound = false;
            }
        } else
        {
            if (!playSound && Pointer.transform.localRotation.z < -0.35f)
            {
                playSound = true;
            }
            if (playSound && Pointer.transform.localRotation.z >= -0.35f)
            {
                //play sound
                WheelAudio.Play();
                playSound = false;
            }
        }
    }

    private void LaunchWinPrice()
    {
        WheelAudio.Play();
        Wheel.bodyType = RigidbodyType2D.Static;
        Wheel.transform.localEulerAngles = new Vector3(0, 0, centerValue);
        canAnimToCenter = false;
        canSpin = true;
        if (!DesactiveWheelLight)
            WheelLight.color = customWheelBox.WheelBoxs[boxNum].BoxColor;
        if (boxWinPrice != null)
            boxWinPrice.PlayerReward(customWheelBox.WheelBoxs[boxNum].boxID);
        else if (boxWinPriceDemo != null)
            boxWinPriceDemo.PlayerReward(customWheelBox.WheelBoxs[boxNum].boxID);
    }

    void AddForceToWheel()
    {
        if (!turnRight)
        {
            Wheel.AddTorque(3f, ForceMode2D.Impulse);
        }
        else
        {
            Wheel.AddTorque(-3f, ForceMode2D.Impulse);
        }
    }
}
