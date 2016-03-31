#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, j, k, len, max, count[26] = {0};
    char str[101];
    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", str);
        len = strlen(str);
    for(i = 0; i < len; i++){
            if(str[i] >= 97 && str[i] <= 122)
                str[i]=str[i]-32;
        }
    for(i = 0; i < len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            count[str[i]-'A']++;
        }
    }
    max=0;
    for(i = 0; i < 26; i++){
        if(count[i] > max)
            max = count[i];
            }
   for(k = max; k > 0; k--){
        for(i = 0, j = 65; i < 26; i++){
            if(count[i] == k)
                printf("%c %d\n", j, k);
            j++;
        }
    }
    return 0;
}
