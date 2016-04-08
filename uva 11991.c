#include <stdio.h>
int main()
{
    int n, m, v, k, arra[100010], check[1000001] = {0}, i;
    while(scanf("%d %d", &n, &m) == 2){
        i = 0;
        while(i < n){
            scanf("%d", &arra[i]);
            check[arra[i]]++;
            i++;
        }
        while(m--){
            scanf("%d %d", &k, &v);
            int count = 0;
             if(check[v] >= k){
                for( i = 0; i < n; i++){
                    if(arra[i] == v)
                        count++;
                    if(count == k)
                        break;
                }
                printf("%d\n", i+1);
             }
             else
                printf("0\n");
        }
    }
    return 0;
}
