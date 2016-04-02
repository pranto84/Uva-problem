#include <stdio.h>
int main()
{
    int t, i, ara[10];
    scanf("%d", &t);
    printf("Lumberjacks:\n");
    while(t--){
        for(i = 0; i < 10; i++)
            scanf("%d", &ara[i]);
            int m=0, c=0;
            if(ara[0] > ara[9]){
            for(i = 9; i >= 0; i--){
                if(m < ara[i])
                    c++;
                m = ara[i];
            }
        }
        else if(ara[0] < ara[9]){
            for(i = 0; i <= 9; i++){
                if(m < ara[i])
                    c++;
                m = ara[i];
            }
        }
        if(c == 10)
           printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
