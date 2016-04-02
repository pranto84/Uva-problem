#include <stdio.h>
int main()
{
    int t, c, d, i;
    double cF, f;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d %d", &c, &d);
        cF = ( 1.8 * c) + 32;
        cF = cF + d;
        f = ( (double)5 / (double)9 ) * (cF - 32);
        printf("Case %d: %.2lf\n", i, f);
    }
    return 0;
}
