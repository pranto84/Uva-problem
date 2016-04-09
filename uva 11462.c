#include <stdio.h>
int main()
{
    int n, ara[2000001], i, j, max;
    while(scanf("%d", &n) == 1 && n != 0){
        int age[101] = {0};
        i = 0, max = 0;
        while(i < n){
            scanf("%d", &ara[i]);
            age[ara[i]]++;
            if(ara[i] > max)
                max = ara[i];
            i++;
        }
        for(i = 0; i <= max; i++){
            if(age[i] == 0)
              continue;
            else{
                for( j = 1; j <= age[i]; j++){
                    printf("%d", i);
                if(i == max && j == age[max])
                    printf("\n");
                else
                    printf(" ");
                }
            }
        }
    }
    return 0;
}
