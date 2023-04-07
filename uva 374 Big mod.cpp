#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll bigmod(ll b,ll p, ll m)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        ll ret=bigmod(b,p/2,m);
         return ((ret%m)*(ret%m))%m;
    }
    else
        return ((b%m)*bigmod(b,p-1,m)%m)%m;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<bigmod(a,b,c)<<endl;
    }
    return 0;
}
