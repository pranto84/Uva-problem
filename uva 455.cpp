#include <iostream>
#include <string>

using namespace std;

int PrefixSearchArray(int n, string str){
    int result[n] = {0};
    int j=0;
    for(int i=1; i<n; i++){
        if(str[i] == str[j]){
            result[i] = j+1;
            j++;
        }
        else{
            while(j!=0){
                j = result[j-1];
                if(str[i] == str[j]){
                    result[i] = j+1;
                    j++;
                    break;
                }
            }
        }
    }
    return result[n-1];
}

int main(){
    string str;
    int ts;
    cin >> ts;
    while(ts--){
        cin >> str;
        int len = str.size();
        int ans = PrefixSearchArray(len, str);
        if(ans >= (len-ans)){
            int temp = len - ans;
            int a = len / temp;
            if(a*temp == len)
                cout << temp << endl;
            else
                cout << len << endl;
        }
        else{
            cout << len << endl;
        }
        if(ts!=0)
            cout << endl;
    }
    return 0;
}

