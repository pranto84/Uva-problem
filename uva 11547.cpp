#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main()
{
    //freopen("in.txt","r", stdin);
    //freopen("out.txt", "w", stdout);
    int tcase;
    cin >> tcase;
    long long n;
    while(tcase-- ){
        cin >> n;
        long long result;
        result = n * 567;
        result /= 9;
        result += 7492;
        result *= 235;
        result /= 47;
        result -= 498;
        result = abs(result);
        result %= 100;
        result /= 10;
        cout << result << endl;
    }
    return 0;
}
