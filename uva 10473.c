#include <stdio.h>
#include <string.h>
int main()
{
    char num[1001], hex[101];
    int i, len, result, rem, j;
    while(scanf("%s", num)){
        if((num[0] - '0') < 0)
            break;
        len = strlen(num);
        j=0;
        result = 0;
        if(num[1] == 'x'){
            for(i=len-1; i > 1; i--){
                int ex;
                if(num[i] > '9')
                    ex = num[i] - '7';
                else
                    ex = num[i] - '0';
                result = result + (ex * pow(16, j) );
                j++;
            }
            printf("%d\n", result);
        }
        else{
            rem = 0;
            for(i=0; i<len; i++){
                rem = rem*10 + (num[i]-'0');
            }
            i = 0;
            while(rem != 0){
                result = rem % 16;
                rem = rem / 16;
                if(result > 9)
                    result += 55;
                else
                    result += 48;
                hex[i] = result;
                i++;
            }
            printf("0x");
            for(j=i-1; j>=0; j--)
                printf("%c", hex[j]);
            printf("\n");
        }
    }
    return 0;
}
