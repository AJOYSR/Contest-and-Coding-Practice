#include<bits/stdc++.h>
using namespace std;
#define ll long
#define pb push_back
bool sorted(ll ara[],ll n)
{
    ll f=0;
    for(ll i=1; i<=n; i++)
    {
        if(ara[i+1]<ara[i])
        {
            f=1;
            break;
        }
    }
    if(f==0) return 1;
    else return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,n,y,x=1;
    cin>>n;
    ll ara[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>ara[i];
    }
    if(sorted(ara,n)==1)
    {
        cout<<"yes\n";
        cout<<"1"<<" "<<"1"<<endl;
        return 0;
    }
    for(ll i=1; i<n; i++)
    {
        if(ara[i]>ara[i+1])
        {
            a=ara[i];
            x=i;
            break;
        }
    }
    ll mx=-11111111;
    for(ll i=x+1; i<=n; i++)
    {
        //cout<<ara[x]<<" "<<ara[i]<<endl;
        b=a-ara[i];
        if(b>mx)
        {
            mx=b;
            y=i;
        }
    }
    ll tmp=ara[y];
    ara[y]=ara[x];
    ara[x]=tmp;
   // for(int i=1; i<=n; i++)
       // cout<<ara[i]<< " ";
    if(sorted(ara,n)==1)
    {
        cout<<"yes\n";
        cout<<x<<" "<<y<<endl;
        return 0;

    }
    else
        cout<<"no\n";

}

