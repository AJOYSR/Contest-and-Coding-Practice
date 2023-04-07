#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact(ll n)
{
    if(n==0)return 1;
    if(n==1) return 1;
    return n*fact(n-1);
}
ll dearrangement(ll n)
{
    if(n==0) return 1;
    if(n==1)return 0;
    if(n==2) return 1;
    return (n-1)*(dearrangement(n-1)+dearrangement(n-2));
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<dearrangement(n)<<"/"<<fact(n)<<endl;
    }
    return 0;
}
