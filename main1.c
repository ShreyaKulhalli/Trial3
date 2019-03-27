#define LOW 1
#define MEDIUM 2
#define HIGH 3
#include"Wiper_functions.h"

int main()
{
    int BAT_LEVEL,Light,RAIN_SENSE_VAL,MODE,WiperOff,Manual_In,PWM_signal;
    printf("BATTERY STATUS\n");
    scanf("%d",&BAT_LEVEL);
    Light=Battery_check(BAT_LEVEL);
    if(Light==1)
    {
        printf("*****RED LED*****\nBattery Low. Wiper cannot be turned on\n");
        exit(0);
    }
    else
    {
        printf("Mode Switch Value\n");
        scanf("%d",&MODE);
        if(MODE==1)
        {
            printf("Rain sense value\n");
            scanf("%d",&RAIN_SENSE_VAL);
            PWM_signal=Auto(RAIN_SENSE_VAL);
        }
        else
        {
            printf("Wiper Off button\n");
            scanf("%d",&WiperOff);
            if(WiperOff==1)
               {
                  printf("WIPER TURNED OFF MANUALLY\n");
                  exit(0);
               }
            printf("Manual input\n");
            scanf("%d",&Manual_In);
            PWM_signal=Manual(WiperOff,Manual_In);
        }
        PWM(PWM_signal);
    }
}

