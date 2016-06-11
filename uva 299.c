#include <stdio.h>
int main()
{
    int tcase, l, train[52];
    scanf("%d", &tcase);
    while(tcase--){
        int cnt = 0, i, j;
        scanf("%d", &l);
        for(i = 0; i<l; i++){
            scanf("%d", &train[i]);
        }
        for(i = 0; i<l; i++){
            for( j=i; j<l; j++){
                if(train[i] > train[j]){
                    int flag = train[i];
                    train[i] = train[j];
                    train[j] = flag;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cnt);
    }
    return 0;
}
