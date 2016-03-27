#include<stdio.h>
int main()
{
    int num1, num2, i, j, ans, sum;
    while(scanf("%d %d", &num1, &num2)==2 && num1>0 && num2>0){
           sum = 0;
        printf("%d %d ", num1, num2);
        if(num1 > num2){
            int temp = num2;
            num2 = num1;
            num1 = temp;
            }
        for(i = num1; i <= num2; i++){
            ans = 1;
            for(j = i; j != 1; j = j){
            if(j % 2 == 0)
                j = j / 2;
            else
                j = 3 * j + 1;
               ans = ans + 1;
            }
        if( ans >= sum )
                sum = ans;
            }
        printf("%d\n", sum);
    }
    return 0;
}
