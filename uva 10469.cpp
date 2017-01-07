#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a, b;
    while(cin>> a >> b){
        int binary1[100] = {0}, binary2[100] = {0};
        int result[100] = {0};
        int i = 0, j = 0;
        while(a){
            binary1[i++] = a % 2;
            a /= 2;
        }
        while(b){
            binary2[j++] = b %2;
            b /= 2;
        }
        int p = max(i,j);
        i = 0, j = 0;
        int r = 0;
        while(p){
            if(binary1[i] == binary2[j])
                result[r++] = 0;
            else
                result[r++] = 1;
            i++;
            j++;
            p--;
        }
        p = r-1;
        int rslt = 0;
        for(i = r-1; i >=0; i--){
            int temp = result[i] * pow(2, p);
            p--;
            rslt += temp;
        }
        cout << rslt << endl;
    }
    return 0;
}
