#include <stdio.h>
#include <math.h>
int main()
{
    int hr, mn;
    double hd, md;
    while(scanf("%d:%d", &hr, &mn) ==2){
        if(hr == 0 && mn ==0)
            break;
        if(hr==12)
            hd = mn*.5;
        else
            hd = hr*30 + mn*.5;
        md = mn*6;
        double tt;
        if(hd > md)
            tt = hd - md;
        else
            tt=  md -hd;
        if(tt > 180)
            tt = 360 - tt;
        printf("%.3lf\n", tt);
    }
    return 0;
}
