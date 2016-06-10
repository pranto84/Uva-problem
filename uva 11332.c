#include <stdio.h>
int sum_digit(int a)
{
    int rem, sum=0;
    while(a != 0){
        rem = a % 10;
        sum = sum + rem;
        a = a / 10;
    }
    return sum;
}
int main()
{
    int n;
    while(scanf("%d", &n) && n != 0){
        while(n > 9){
            n = sum_digit(n);
        }
        printf("%d\n", n);
    }
    return 0;
}
