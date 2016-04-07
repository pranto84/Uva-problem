#include <stdio.h>
int main()
{
    int num, cnt, binary[101], temp, i, j;
    while(scanf("%d", &num) == 1 && num != 0){
        printf("The parity of ");
        i = 0;
        temp = num;
        while(temp != 0){
            binary[i] = temp % 2;
            temp = temp / 2;
            i++;
        }
        cnt = 0;
        for(j = i-1; j >= 0; j--){
            printf("%d", binary[j]);
            if(binary[j] == 1)
                cnt++;
        }
        printf(" is %d (mod 2).\n", cnt);
    }
    return 0;
}
