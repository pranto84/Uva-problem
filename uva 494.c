#include <stdio.h>
#include <string.h>
int main()
{
    int i, len, temp, cnt;
    char str[1001];
    while(scanf(" %[^\n]", str) != EOF){
        len = strlen(str);
        temp = 0;
        cnt = 0;
        for(i = 0; i<len; i++){
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
                temp = 1;
            }
            else if(i == len-1 && temp == 1)
                cnt++;
            else{
                if(temp == 1)
                    cnt++;
                temp = 0;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
