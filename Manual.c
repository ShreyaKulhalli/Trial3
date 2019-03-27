#define LOW 1
#define MEDIUM 2
#define HIGH 3
int Manual(int Wiper_Off_M,int Input)
{
    int PWM2;

    //else
    {
        if(Input==LOW)
            PWM2=1;
        else if(Input==MEDIUM)
            PWM2=2;
        else if(Input==HIGH)
            PWM2=3;
    }
    return PWM2;
}
