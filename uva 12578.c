#include <stdio.h>
#define pi acos(-1)
int main()
{
    int L, tcase;
    double w, r, A;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d", &L);
        r = (double)L/(double)5;
        w = (double)(L * 3)/(double)5;
        r = pi * r * r;
        A = (L * w) - r;
        printf("%.2lf %.2lf\n", r, A);
    }
    return 0;
}
