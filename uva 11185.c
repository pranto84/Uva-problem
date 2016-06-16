#include <stdio.h>
int main()
{
    int number, j;
    while(scanf("%d", &number) && number >= 0){
        int i = 0, ternary[101];
        if(number == 0)
            printf("0");
        while(number != 0){
            ternary[i] = number % 3;
            number = number/3;
            i++;
        }
        for(j = i-1; j >= 0; j--)
            printf("%d", ternary[j]);
        printf("\n");
    }
    return 0;
}
