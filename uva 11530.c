#include <stdio.h>
#include <string.h>
int main()
{
    int  len, T, i, num[26] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
    char str[101];
    scanf("%d", &T);
    getchar();
    for(i = 1; i <= T; i++){
        gets(str);
        len = strlen(str);
        int j, sum = 0;
        for( j = 0; j < len ; j++){
            if(str[j] == 32)
                sum = sum + 1;
            else{
                int x = str[j] - 97;
                sum = sum + num[x];
            }
        }
        printf("Case #%d: %d\n", i, sum);
    }
    return  0;
}
