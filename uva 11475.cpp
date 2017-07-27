#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int kmp(int n, string str){
    int cnt = 0;
    int result[n];
    for(int i = 0; i<n; i++){
        result[i] = 0;
    }
    int j=0;
    for(int i = 1; i<n; i++){
        if(str[j] == str[i]){
            result[i] = j+1;
            j++;
        }
        else if(str[j] != str[i]){
            while(j!=0){
                j = result[j-1];
                if(str[j] == str[i]){
                  result[i]= j+1;
                  j++;
                  break;
                }

            }
        }
    }
    return result[n-1];

}
string Reverse(string str){
    int n = str.size();
    int len  = n/2;
    for(int i = 0; i <len; i++){
        swap(str[i], str[n-i-1]);
    }
    return str;
}
int main()
{

    string str1, str2, str;
    while(cin>> str1 ){
        str = Reverse(str1);
        str2 = str+ "#" + str1;
        int len = str1.size();
        int result  = kmp(2*len+1, str2);
        if(result == len)
            cout << str1;
        else{
            cout << str1;
            result = len - result;
            for(int i = result-1; i>=0; i--)
                cout << str1.at(i);
        }
        cout << endl;
    }


    return 0;
}

