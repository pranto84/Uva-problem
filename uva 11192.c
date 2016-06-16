#include <stdio.h>
#include <string.h>
int main()
{
    char line[1001];
    int group, len, element, i, j;
    while(scanf("%d", &group) && group != 0){
        scanf("%s", line);
        len = strlen(line);
        element = len/group;
        for(i = 0; i<len; i += element){
            for(j = i + element - 1; j >= i; j--)
                printf("%c", line[j]);
        }
        printf("\n");
    }
    return 0;
}
