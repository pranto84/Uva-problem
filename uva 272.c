#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    int len, i, temp=0;
    while(gets(str) != NULL){
        len = strlen(str);
        for(i = 0; i<len; i++){
            if(str[i] == '"'){
                if(temp == 0){
                    printf("``");
                    temp = 1;
                }
                else{
                    printf("''");
                    temp = 0;
                }
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
