#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
#define ll long long
ll sumdig(ll n)
{
    ll sum=0;
    while(n>1)
    {
        ll r = n%10;
        n/=10;
        sum+=r;
    }
    return sum;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int ans = n;
        while(1)
        {
            if(__gcd(ans,sumdig(ans))>1)
        {
            cout <<  ans << endl;
            break;
        }
        ans++;
    }
   }
}


