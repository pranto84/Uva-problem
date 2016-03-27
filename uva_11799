#include<stdio.h>
int main()
{
    int tcase, i, n, j, k;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d", &n);
        int ara[n+1], max = 0;
        ara[0] = n;
        for(j = 1; j <= n; j++){
            scanf("%d", &ara[j]);
        }
        for(k = 0; k <= n; k++){
            if(ara[k] > max)
                max = ara[k];
        }
        printf("Case %d: %d\n", i, max);
    }
}
