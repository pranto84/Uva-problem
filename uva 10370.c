#include <stdio.h>
int main()
{
    int t, n, i, arr[1001];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int sum=0, count = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        double avrg = (double)sum / (double)n;
        for(i = 0; i < n; i++){
            if(arr[i] > avrg)
                count++;
        }
      double result = ((double)count / (double)n ) * 100;
      printf("%.3lf%%\n", result);
    }
    return 0;
}
