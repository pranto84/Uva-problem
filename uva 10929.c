#include <stdio.h>
#include <string.h>
int main()
{
    char num[1001];
    int len, i;
    while( scanf("%s", num)){
        len = strlen(num);
        if(len == 1 && num[0] == '0')
            break;
        int rem = 0;
        for(i = 0; i < len; i++){
            rem =rem*10 + (num[i] - '0');
            rem = rem % 11;
        }
        if(rem == 0)
            printf("%s is a multiple of 11.\n", num);
        else
            printf("%s is not a multiple of 11.\n", num);
    }
    return 0;
}
