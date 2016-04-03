#include <stdio.h>
#include <string.h>
int main()
{
    int len, i, j;
    char str[1001], Char[26] = {'A','V','X','S','W','D','F','G','U','H','J','K','N','B','I','O','Q','E','A','R','Y','C','Q','Z','T','Z'};
    while(gets(str) != NULL){
        len = strlen(str);
        for(i = 0; i < len; i++){
            if( str[i] == ' ' || str[i] == '`' )
                printf("%c", str[i]);
            else if(str[i] >= '2' && str[i] <= '9')
                printf("%c", str[i]-1);
            else if(str[i] >= 'A' && str[i] <= 'Z')
                printf("%c", Char[ str[i] - 65 ] );
            else if(str[i] == '1') printf("`");
            else if(str[i] == '0') printf("9");
            else if(str[i] == '-') printf("0");
            else if(str[i] == '=') printf("-");
            else if(str[i] == '[') printf("P");
            else if(str[i] == ']') printf("[");
            else if(str[i] == 92) printf("]");
            else if(str[i] == ';') printf("L");
            else if(str[i] == 39) printf(";");
            else if(str[i] == ',') printf("M");
            else if(str[i] == '.') printf(",");
            else if(str[i] == '/') printf(".");
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
