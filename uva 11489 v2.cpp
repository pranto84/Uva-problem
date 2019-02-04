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
int DivisibleBy3(char *num , int sum){
    int digit = strlen(num), cnt=0;
    for(int i=0; i<digit; i++)
        if((num[i]-'0')%3==0)
            cnt++;
    return cnt;
}
bool CanDivisible(char *num, int sum){
    int digit = strlen(num);
    bool r = false;
    for(int i=0; i<digit; i++)
        if((sum-num[i]-'0')%3==0)
            r = true;
    return r;
}

int main()
{
    //output();
    IOS;
    int csno=1,T;
    sci(T);
    char num[1005];
    while(T--){
        scanf(" %s", num);
        int sum = getSum(num);
        if(sum%3==0)
            printf("Case %d: %c\n", csno++, DivisibleBy3(num,sum)%2==1 ? 'S' : 'T');
        else if(CanDivisible(num,sum)){
            printf("Case %d: %c\n", csno++, DivisibleBy3(num,sum)%2==1 ? 'T' : 'S');
        }
        else
            printf("Case %d: %c\n", csno++, 'T');
    }
    return 0;
}



