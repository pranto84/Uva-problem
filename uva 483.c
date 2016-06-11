#include <stdio.h>
int main()
{
    char line[1001], str[1001] ;
    while(scanf(" %[^\n]", line) != EOF){
        int i, j=0, len;
        len = strlen(line);
        for(i=0; i<len; i++){
            if(line[i] == 32 ){
                for(j = j-1 ; j>=0; j--){
                    printf("%c", str[j]);
                }
                str[0] = '\0';
                if(line[i] == 32)
                    printf(" ");
                j = 0;
            }
            else if(i == len-1){
                printf("%c", line[i]);
                for(j=j-1 ; j>=0; j--){
                    printf("%c", str[j]);
                }
                str[0] = '\0';
                printf("\n");
            }
            else{
                str[j] = line[i];
                j++;
            }
        }
    }
    return 0;
}
