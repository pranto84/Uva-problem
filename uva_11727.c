#include<stdio.h>
int main()
{
    int t, a, b, c, i;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d %d %d", &a, &b, &c);
        if((b < a && b > c) || (b < c && b > a))
            printf("Case %d: %d\n", i, b);
        else if((a < b && a > c) || (a > b && a < c))
        printf("Case %d: %d\n", i, a);
        else if((c < a && c > b) || (c < b && c > a))
            printf("Case %d: %d\n", i, c);
        }
    return 0;
}

