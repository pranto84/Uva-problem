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
    int n, x1, x2, a, b;
    while(cin >> n){
        if(n==0)
            return 0;
        map<int , pii> M;
        map<int , pii>:: iterator it;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            x1 = max(0, a-b);
            x2 = min(10000, a+b);
            M[x1].ff++;
            M[x2].ss++;
        }
        int cnt = 0, ans = 0;
        for(it = M.begin() ; it != M.end(); it++){
            a = it->ff;
            cnt += M[a].ff;
            ans = max(ans, cnt);
            cnt -= M[a].ss;
        }
        cout << ans << endl;
    }
    return 0;
}


