#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n, p, k;
    while(cin >> n >> p){
        k = exp(log(p) / n);
        int ans = round(k);
        cout << ans << endl;
    }
    return 0;
}
