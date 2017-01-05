#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long Bigmod(long long b, long long p, long long m )
{
    if(p == 0)
        return 1;
    else if(p % 2 == 0){
        long long temp = Bigmod(b, p/2, m);
        return (temp * temp) % m;
    }


    else if(p%2 != 0)
        return (((b%m) * Bigmod(b, p-1, m)) % m);
}
int main()
{
    long long b, p, m;
    while(cin >> b >> p >> m){
        cout << Bigmod(b, p, m) << endl;
    }
    return 0;
}
