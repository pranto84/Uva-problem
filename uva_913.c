#include<stdio.h>
int main()
{
    long long int a, n, last;
    while(scanf("%lld", &a) == 1){
        n = (a + 1) / 2;
        last = 2*(n*n)-1;
        last = (3 * last) - 6;
        printf("%lld\n", last);
    }
    return 0;
}
