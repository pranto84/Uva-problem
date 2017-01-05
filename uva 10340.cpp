#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s , t ;
    int len1, len2;
    while(cin >> s >> t){
        len1 = s.size();
        len2 = t.size();
        int cnt = 0;
        for(int i = 0; i < len2 && cnt != len1; i++){
            if(t[i] == s[cnt])
                cnt++;
        }
        if(cnt == len1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
