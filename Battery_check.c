int Battery_check(int level)
{
    int LED;
    if(level>=3)
        LED=0;
    else
        LED=1;
    return LED;
}
