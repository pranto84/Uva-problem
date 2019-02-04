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
int getSum(char *num){
    int digit = strlen(num);
    int sum=0;
    for(int i=0; i<digit; i++){
        sum += (num[i] - '0');
    }
    return sum;
}

int main()
{
   // output();
    IOS;
    int csno=1,T;
    sci(T);
    char num[1005];
    int fre[10];
    while(T--){
        scanf(" %s", num);
        memset(fre,0, sizeof(fre));
        int sum = getSum(num);
        int flag = 1;
        for(int i=0; i<strlen(num); i++){
            fre[num[i]-'0']++;
        }
        while(true){
            int i;
            for(i=sum%3; i<10; i += 3){
                if(fre[i]!= 0){
                    fre[i]--;
                    sum -= i;
                    break;
                }
            }

            if(i>=10)
                break;
            flag = 1-flag;
        }
        printf("Case %d: %c\n", csno++, flag==1 ? 'T' : 'S');
    }
    return 0;
}


