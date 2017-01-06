#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int l, n;
    while(cin >> l >> n){
        char check[20][101], check2[20][101];
        char word[101];
        string str;
        for(int i = 0; i<l; i++){
            scanf("%s %s", check[i], check2[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%s", word);
            int temp = 0;
            for(int j = 0; j < l; j++){
                int r = strcmp(word, check[j]);
                if(r == 0){
                    cout << check2[j] << endl;
                    temp = 1;
                    break;
                }
            }
            if(temp == 1)
                continue;
            int len = strlen(word);
            if(word[len-1] == 'y' ){
                if(word[len-2] == 97 || word[len-2] == 101 || word[len-2] == 105 || word[len-2] == 111 ||word[len-2] == 117){
                    str = "s";
                }
                else{
                    word[len-1] = 'i';
                    str = "es";
                }
            }
            else if(word[len-1] == 'o' || word[len-1] == 's'|| word[len-1] == 'x'){
                str = "es";
            }
            else if(word[len-1] == 'h' && (word[len-2] == 'c' || word[len-2] == 's') ){
                str = "es";
            }
            else
                str = "s";
            cout << word << str << endl;
        }

    }
    return 0;
}
