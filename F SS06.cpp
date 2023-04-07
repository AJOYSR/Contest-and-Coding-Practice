#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k, a;
    cin>>n>>k;
    a = 99999999999;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n - k + 1; i++)
        {a = min(a, v[i+k- 1]-v[i]);}

    cout<<a<<endl;

}
