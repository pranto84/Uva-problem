#include<bits/stdc++.h>

using namespace std;

#define sci(a)              scanf("%d", &a)
#define sci2(a,b)           scanf("%d%d", &a, &b)
#define sci3(a, b, c)       scanf("%d%d%d", &a, &b, &c)
#define scll(a)             scanf("%lld",&a)
#define scll2(a,b)          scanf("%lld%lld",&a,&b)
#define scll3(a,b,c)        scanf("%lld%lld%lld",&a,&b,&c)
#define scd(a)              scanf("%lf", &a)
#define scd2(a,b)           scanf("%lf%lf",&a,&b)
#define scd3(a,b,c)       scanf("%lf%lf%lf", &a, &b, &c)

#define     gcd(a,b)  __gcd(a,b)
#define     pi      2.0*acos(0.0)
#define     pb      push_back
#define     mp      make_pair
#define     mod     998244353
#define     pii     pair<int, int>
#define     ff      first
#define     ss      second
#define     MAX     INT_MAX
#define     MIN     INT_MIN
#define     N       100005

#define input(); freopen("input.txt", "r", stdin);
#define output(); freopen("output.txt", "w", stdout);
#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;
int main()
{

    IOS;
    int csno=1,T;
    string str;
    int result[N];
    cin >> T;
    while(T--){
        memset(result, 0, sizeof(result));
        cin >> str;
        int len = str.length();
        stack<pair<char, int> > st;
        for(int i=0; i<len; i++){
            if(st.empty()){
                st.push(mp(str[i], i));
            }
            else if(str[i] == '(' || str[i] == '{' || str[i] == '[' || str[i] == '<' )
                st.push(mp(str[i], i));
            else{
                if(str[i] == ')'){
                    if(st.top().ff == '('){
                       int k = st.top().ss;
                       result[k] = i-k+1;
                       st.pop();
                    }
                    else
                        st.push(mp(str[i], i));
                }
                else if(str[i] == '}'){
                    if(st.top().ff == '{'){
                       int k = st.top().ss;
                       result[k] = i-k+1;
                       st.pop();
                    }
                    else
                        st.push(mp(str[i], i));
                }
                else if(str[i] == '>'){
                    if(st.top().ff == '<'){
                       int k = st.top().ss;
                       result[k] = i-k+1;
                       st.pop();
                    }
                    else
                        st.push(mp(str[i], i));
                }
                else if(str[i] == ']'){
                    if(st.top().ff == '['){
                       int k = st.top().ss;
                       result[k] = i-k+1;
                       st.pop();
                    }
                    else
                        st.push(mp(str[i], i));
                }
                else{
                    st.push(mp(str[i], i));
                }
            }
        }
        for(int i=len-1; i>=0; i--){
            if(result[i]!=0){
                int j=result[i];
                result[i] += result[i+j];
            }
        }
        cout << "Case "<< csno++ <<":\n";
        for(int i=0; i<len; i++)
            cout << result[i] << "\n";
    }
    return 0;
}


