#include <iostream>
using namespace std;
int main()
{
    int tcase, f_n;
    cin >> tcase;
    while(tcase--){
        int ans = 0;
        int area, a_n, f_f;
        cin >> f_n;
        for(int i = 1; i <= f_n; i++){
            cin >> area >> a_n >> f_f;
            ans+= area * f_f;
        }
        cout << ans << endl;
    }
    return 0;
}
