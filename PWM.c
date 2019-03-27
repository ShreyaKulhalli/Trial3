#include<stdio.h>
void PWM(int pwm)
{
    switch(pwm)
    {
        case 0:printf("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n");break;
        case 1:printf("1 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n");break;
        case 2:printf("1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0\n");break;
        case 3:printf("1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1\n");break;
        default:printf("* * * * * * * * * * * * * * * * * * * *\n");break;
    }

}
