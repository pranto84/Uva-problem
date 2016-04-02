#include <stdio.h>
int main()
{
    long long int num1, num2;
    while( scanf("%lld %lld", &num1, &num2) == 2 ){
            if(num1 == 0 && num2 ==0)
                break;
        int rest = 0, count = 0;
        while((num1 != 0) || (num2 != 0)){
            rest = ((num1%10) + (num2%10) + rest) / 10;
            count = count + rest;
            num1 = num1 / 10;
            num2 = num2 / 10;
        }
        if( count == 0)
            printf("No carry operation.\n");
        else if(count == 1)
            printf("1 carry operation.\n", count);
        else
            printf("%d carry operations.\n", count);
    }
    return 0;
}
