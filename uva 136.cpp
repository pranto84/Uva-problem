#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    long long int a=1, b=1, c = 1;
    long long int x = 2, y = 3, z = 5;
    long long int t = 2;
    long long int ugly[6000]={0};
    ugly[1] = 1;
    while( t <= 5000){
        if(x < y && x < z){
            ugly[t] = x;
            a++;
            t++;
            x = ugly[a] * 2;

        }
        else if(y < x && y < z){
            ugly[t] = y;
            b++;
            t++;
            y = ugly[b] * 3;
        }
        else if(z < x && z < y){
            ugly[t] = z;
            c++;
            t++;
            z = ugly[c] * 5;
        }
        if(x==y) {
             a++;
             x=ugly[a]*2;
            }
        else if(y==z){
             b++;
             y=ugly[b]*3;
        }
        else if(z==x){
            c++;
            z=ugly[c]*5;
        }
    }
    cout << "The 15'th ugly number is " << ugly[1500] << "." << endl;
    //cout << "The 1500'th ugly number is 859963392." << endl;
    return 0;
}
