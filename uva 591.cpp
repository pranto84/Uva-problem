#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int cas = 1;
    while(cin >> n){

        if(n == 0)
            break;
        int ara[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> ara[i];
            sum += ara[i];
        }
        int avg = sum/n;
        sum = 0;
        for(int i = 0; i < n; i++){
            sum += abs(ara[i] - avg);
        }
        cout << "Set #" << cas++ <<  endl;
        cout << "The minimum number of moves is " << sum/2 << "." << endl << endl;;
    }
    return 0;
}
