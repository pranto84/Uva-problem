#include<bits/stdc++.h>
using namespace std;

#define MAX 1000001
#define N 100000001
#define max3(a,b,c) max( max(a,b),c)
#define sci(a) scanf("%d", &a)
#define sci2(a,b) scanf("%d%d", &a, &b)
#define segment 10005
#define inf 0x7fffffff
#define input(); freopen("input.txt", "r", stdin);
#define output(); freopen("output.txt", "w", stdout);
#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
int ara[segment], tree[4*segment], lazy[4*segment];
void propagate(int node, int l, int r)
{
    tree[node] += lazy[node];
    if(l != r){
        lazy[node*2] = (lazy[node*2]+ lazy[node]);
        lazy[node*2+1] = (lazy[node*2+1]+ lazy[node]);
    }
    lazy[node] = 0;
    return;
}
void update(int node, int Start, int End, int l, int r)
{
    if(lazy[node] != 0)
        propagate(node, Start, End);
    if(l > End || r < Start || Start > End)
        return;
    if(l <= Start && End <= r){
        tree[node] += 1;
        if(Start != End){
            lazy[node*2] += 1;
            lazy[1+node*2] += 1;
        }
        return;
    }
    int mid = (Start + End) /2;
    update(node*2,Start, mid, l, r);
    update(1+node*2, mid+1, End, l, r);
    tree[node] = max(tree[node*2], tree[1+(node*2)]);
    return;
}
int query_tree(int node, int Start, int End, int l, int r){
    if(lazy[node] != 0)
        propagate(node, Start, End);
    if(Start > End || Start > r || End < l)
        return -1;
    if(Start >= l && End <= r)
        return tree[node];
    int mid = (Start+End)/2;
    int q1 = query_tree(node*2, Start, mid, l, r);
    int q2 = query_tree(1+(node*2), mid+1, End, l, r);
    return max(q1, q2);
}
int main()
{
    //input();
    int n, x1, x2, a, b, r=10001;
    while(cin >> n){
        if(n==0)
            return 0;
        memset(tree, 0, sizeof(tree));
        memset(lazy, 0, sizeof(lazy));
        for(int i=0; i<n; ++i){
            cin >> a >> b;
            x1 = max(0, a-b);
            x2 = min(10000, a+b);
            x1++; x2++;
            update(1,1,r,x1,x2);
        }
        cout << query_tree(1, 1, r, 1, r) << endl;

    }
    return 0;
}
