#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, sn, l_s, x, sum;
    while(scanf("%lld", &a) == 1 && a > 1){
        x = (a - 1) / 2;
        sn = x*x;                 // sn number are included before my input (a এর আগে  sn  সংখ্যক  নাম্বার আছে)
        l_s = (sn * 2) + 1;       //line start with the number
        sum = (l_s + (a - 1) * 2);           // last number of line
        sum = (sum*3) - 6;
        printf("%lld\n", sum);
    }
    return 0;
}
