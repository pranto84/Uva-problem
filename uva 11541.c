#include <stdio.h>
#include <string.h>
int main()
{
    char str[101], ch;
    int i, len, j, temp, tcase;
    scanf("%d", &tcase);
    for(j=1; j <= tcase; j++){
        scanf("%s", str);
        printf("Case %d: ", j);
        len = strlen(str);
        temp = 0;
        for(i=0; i<len; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                while(temp--)
                    printf("%c", ch);
                ch = str[i];
                temp = 0;
            }
            else{
                temp = temp*10 + (str[i]-'0') ;
            }
            if(i == len-1){
                while(temp--)
                    printf("%c", ch);
                ch = str[i];
                temp = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
