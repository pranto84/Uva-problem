#include <iostream>
using namespace std;
int main()
{
    int tcase, a, b;
    cin >> tcase;
    int t_c = 1;
    while(tcase--){
        cin >> a >> b;
        int ans = 0;
        int i = min(a, b);
        int j = max(a, b);
        if(i % 2 == 0)
            i++;
        if(j %2 == 0)
            j--;
        while(i <= j){
            ans += i;
            i += 2;
        }
        cout <<  "Case " << t_c++  << ": " <<ans << endl;
    }
    return 0;
}
