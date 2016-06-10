#include <stdio.h>
#include <string.h>
int main()
{
    int len, i;
    char num[101];
    while(scanf("%s", num) && num[0] != '0'){
        len = strlen(num);
        int rem = 0;
        for(i = 0; i<len; i++){
           rem = (rem*10) + (num[i]-'0');
           rem = rem % 17;
        }
        if(rem == 0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
