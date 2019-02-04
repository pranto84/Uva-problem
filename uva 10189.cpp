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
int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {1, 1, 1, 0, -1, -1, -1, 0};

typedef long long ll;
int main()
{
    //output();
    int n,m,csno=0;
    char str[105][105];
    int arr[105][105];
    memset(arr, 0, sizeof(arr));
    while(sci2(n,m)==2 && (n!=0 && m!=0)){
        if(csno!=0)
            printf("\n");
        for(int i=0; i<n; i++){
            scanf(" %s", str[i]);
        }
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                if(str[i][j] != '.')
                    continue;
                int cnt=0, x,y,p=0;
                for(int r=0; r<8; r++){
                    y = i+dy[r];
                    x= j+dx[r];
                    if( (x>=0&& x<m) && (y>=0&&y<n) ){
                        p++;
                        if(str[y][x] == '*')
                            cnt++;
                    }

                }
                //cout << i << j << " -> "<< p << endl;
                arr[i][j] = cnt;
            }
        }
        printf("Field #%d:\n",++csno);
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                if(str[i][j]!= '*')
                    printf("%d",arr[i][j]);
                else
                    printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}


