#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n,i,j,x=0,y=0,mid,k;
    vector<ll>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        v.pb(k);
    }
    sort(v.begin(),v.end());
    mid=n/2;
    for(i=0; i<mid; i++)
    {
        x+=v[i];
    }

    for(j=mid; j<n; j++)
    {
        y+=v[j];
    }
    cout<<x*x+y*y<<endl;
    return 0;
}

