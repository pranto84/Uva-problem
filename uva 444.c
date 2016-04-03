#include <stdio.h>
#include <string.h>
int main()
{
    int ara[3001], len, i, j;
    char str[1001];
    while(gets(str) != NULL ){
        len = strlen(str);
        if(str[0] >= '0' && str[0] <= '9' ){
                j = 0;
            for(i = len-1; i >= 0;  i -= 2 ){
                ara[j] = (str[i] - 48)*10 + (str[i-1] - 48);
                    if(ara[j] < 32){
                        ara[j] = (str[i] - 48)*100 + (str[i-1] - 48)*10 + (str[i-2] - 48);
                        i--;
                    }
                printf("%c", ara[j]);
                j++;
            }
        }
        else {
                j=0;
            for(i = 0; i < len; i++){
                if(str[i] < 10){
                    ara[j] = str[i];
                    j++;
                }
                else if(str[i] >= 10 && str[i] <= 99){
                    ara[j] = str[i] / 10;
                    ara[j+1] = str[i] % 10;
                    j += 2;
                }
                else if(str[i >= 100]){
                    ara[j] = str[i] / 100;
                    str[i] = str[i] % 100;
                    ara[j+1] = str[i] /10;
                    ara[j+2] = str[i] % 10;
                    j += 3;
                }
            }
        for(i = j-1; i >= 0; i--)
            printf("%d", ara[i]);
        }
        printf("\n");
    }
    return 0;
}
