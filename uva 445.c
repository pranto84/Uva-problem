#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, cnt, len;
    char str[1001];
    while(gets(str) != NULL ){
        len = strlen(str);
        cnt = 0;
        for(i = 0; i < len; i++){
        if(str[i] == '!')
            printf("\n");
        else if( str[i] > '0' && str[i] <= '9')
            cnt = cnt + (str[i] - 48);
        else if( (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '*'){
            for( j = 0; j < cnt; j++)
                printf("%c", str[i]);
            cnt = 0;
            }
            else if(str[i] == 'b'){
                for( j = 0; j < cnt; j++)
                    printf(" ");
                cnt = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
