#include <stdio.h>
int main()
{
    int tcase, r, length, width, right, i, left;
    scanf("%d", &tcase);
    for(i=1; i <= tcase; i++){
        scanf("%d", &r);
        length = r*5;
        width = r*3;
        left = (length * 9) / 20;
        right = (length * 11) / 20;
        width /= 2;
        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n", i, left, width, right, width, right, width, left, width);
    }
    return 0;
}

