#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll a,ll n)
{
    if(n==0)
        return 1;
    if(n==1) return a;
    else
    {
        ll r=power (a,n/2);
        if(n%2==0)
            return  r*r;
        else
            return r*a*r;
    }
}
int main()
{
    ll x,y;
    cin>>x>>y;
    if(x<10&&y<10)
    {
        if(power(x,y)>power(y,x))
            cout<<">\n";
        else if(power(x,y)<power(y,x))
            cout<<"<\n";
        else cout<<"=\n";
        return 0;
    }
    if(x==y)
    {
        cout<<"="<<endl;
        return 0;
    }
    if(x==1)
    {
        cout<<"<"<<endl;
        return 0;
    }
    if(y==1)
    {
        cout<<">"<<endl;
        return 0;
    }
    else
    {
        if(y>x)
            cout<<">"<<endl;
        else
            cout<<"<"<<endl;
    }
}
