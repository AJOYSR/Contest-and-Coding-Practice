#include <bits/stdc++.h>
#define ll long long
#define N 100010
using namespace std;
ll n, k, q, point[N];
int main()
{
    cin>>n>>k>>q;
    for(ll i=1; i<=n; i++) point[i]=k;
    for(ll i=1; i<=q; i++)
    {
        ll x;cin>>x;
        point[x]++;
    }
    for(ll i=1;i<=n;i++)
    {
        if (point[i] - q > 0) puts("Yes");
        else puts("No");
    }
    return 0;
}

