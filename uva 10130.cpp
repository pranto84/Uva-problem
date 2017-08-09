#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ts;
    cin >> ts;
    int n, p, w, g, mw;
    int wt[1005], value[1005];
    int result[1005][35];\
    int ans;
    while(ts--){
        ans = 0;
        cin >> n;
        for(int i = 0; i<n; i++){
            cin >> value[i] >> wt[i];
        }
        cin >> g;
        while(g--){
            cin >> mw;
            for(int i = 0; i <=n; i++){
                for(int j=0; j <= mw; j++){
                    if(i==0 || j==0)
                        result[i][j] = 0;
                    else if( wt[i-1] <= j ){
                        int temp = value[i-1]+ result[i-1][(j-wt[i-1])];
                        result[i][j] = max( temp , result[i-1][j]);
                    }
                    else
                        result[i][j] = result[i-1][j];
                }
            }
            ans+=result[n][mw];
        }
        cout << ans << endl;
    }
   return 0;
}
