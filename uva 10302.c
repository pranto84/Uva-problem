#include <stdio.h>
int main()
{
    long long int sum, x, i;
    while(scanf("%lld", &x) != EOF){
        sum = 0;
        for(i=0; i <= x; i++){
            sum = sum + (i*i*i);
        }
        printf("%lld\n", sum);
    }
    return 0;
}
