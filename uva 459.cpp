// code ok
// need to break the loop
// then for 1 to n need to use find_r for check all representative
// then count how many representative
// uva 459
//https://ideone.com/E6iSlF
#include <bits/stdc++.h>

using namespace std;
char rep[26];
char find_r(char r)
{
	if(rep[r-'A'] == r)
        return r;
    else
        return rep[r-'A']=find_r(rep[r-'A']);
}
void Union(char a, char b)
{
    char u, v;
    u = rep[a-'A'];
    v = rep[b-'A'];
    if(a == u && b == v){
        rep[b-'A'] = rep[a-'A'];

    }

    else if(a == u && b != v){
        v = find_r(b);
        rep[a-'A'] = rep[v-'A'];
    }

    else if(a != u && b == v){
        u = find_r(a);
        rep[b-'A'] = rep[u-'A'];
    }
    else if(a != u && b != v){
        if(rep[a-'A'] == rep[b-'A'])
            return;
        u = find_r(a);
        v = find_r(b);
        if(u == v)
            return;
        else
            rep[v-'A'] = rep[u-'A'];
    }
}
void show(int siz)
{
    for(int i=0; i<siz; i++){
        printf("%c",  i+'A');
        cout << " == " << rep[i] << endl;
    }
    cout << endl;
    return;
}
void make_set(int len)
{
    char temp = 'A';
    for(int i=0; i < len; i++){
        rep[i] = temp;
        temp++;
    }
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);
    int no;
    scanf("%d\n\n", &no);
    for(int tc=1; tc <=no; tc++){
        string s;
        char ch;
        getline(cin, s);
        ch = s[0];
        int siz = ch - 'A' +1;
        make_set(siz);
        char a, b;
        while(1){
            if( !getline(cin,s)|| s.empty())
                break;
            a = s[0];
            b = s[1];
            Union(a,b);
            //show(siz);
        }
        char temp = 'A';
        int result[26] = {0};
        int cnt=0;
        for(int i=0; i<siz; i++){
            a = find_r(temp++);
            if(result[a-'A'] == 0){
                result[rep[i]-'A'] = 1;
                cnt++;
            }
        }
        if(tc!=1)
            cout << endl;
        cout << cnt << endl;
    }

    return 0;
}

