#include <stdio.h>
int prime(n)
{
    int i, r;
    int flag = 0;
    r = sqrt(n);
    for(i = 2; i <= r; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(n == 1)
        return 0;
    else if(flag == 1)
        return 0;
    else
        return n;
}
int main()
{
    int i, num, prime1, prime2, len, test;
    while(scanf("%d", &num) && num != 0){
        len = num / 2;
        for(i = 0; i<=len; i++){
            test = prime(i);
            if(test != 0)
                prime1 = test;
            test = prime(num-i);
            if(test != 0)
                prime2 = test;
            if(prime1 + prime2 ==  num)
                break;
        }
        printf("%d = %d + %d\n", num, prime1, prime2);
    }
    return 0;
}

