int Auto(int RS_val)
{
    int PWM1;
    if(RS_val>=0&&RS_val<50)
        PWM1=0;
    else if(RS_val>=50&&RS_val<250)
        PWM1=1;
    else if(RS_val>=250&&RS_val<1000)
        PWM1=2;
    else
        PWM1=3;
    return PWM1;
}
