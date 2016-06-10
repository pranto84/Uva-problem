#include <stdio.h>
void main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) && !(a == 0 && b == 0 && c == 0)){
        if(a*a + b*b == c*c)
            printf("right\n");
        else if (c*c + b*b == a*a)
            printf("right\n");
        else if (c*c + a*a == b*b)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
