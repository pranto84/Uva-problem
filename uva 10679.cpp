#include <iostream>
#include <string>

using namespace std;
#define MAX 100000006
int result[MAX];
bool PatternSearch(string str1, string str2){
    bool temp = false;
    int len1, len2;
    len1 = str1.size();
    len2 = str2.size();
    string str3 = str2 +"#" +str1;
    int n = len1+len2 +1;
    int j = 0;
    for(int i = len2; i<n; i++){
        if(str3[i] == str3[j]){
            result[i] = j+1;
            j++;
        }
        else{
            while(j!=0){
                j = result[j-1];
                if(str3[i] == str3[j]){
                    result[i] = j+1;
                    j++;
                    break;
                }
            }
        }
        if(result[i] == len2){
            temp = true;
            break;
        }
    }
    return temp;
}

int main()
{
    int ts;
    cin >> ts;
    while (ts--){
        string str;
        int q;
        cin >> str;
        cin >> q;
        while(q--){
            string str1;
            cin >> str1;
            bool result = PatternSearch(str, str1);
            if(result){
                cout << "y" << endl;
            }
            else
                cout << "n" << endl;
        }
    }
    return 0;
}
