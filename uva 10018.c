#include <stdio.h>
long long int reverse(long long int num)
{
    long long int rev = 0, rem;
    while(num != 0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    return rev;
}
int main()
{
    int tcase, cnt;
    long long int num, rev;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%lld", &num);
        cnt = 1;
        num = num + reverse(num);
        while(num != reverse(num)){
            rev = reverse(num);
            num = num + rev;
            cnt++;
        }
        printf("%d %lld\n", cnt, num);
    }
    return 0;
}
