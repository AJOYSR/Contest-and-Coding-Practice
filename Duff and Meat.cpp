#include <bits/stdc++.h>
using  namespace std;
#define    ll  long long int
ll fre[11];
int main( )
{
    ll N, i,k, mx = 1000000,sum=0, a,b,c,x,y;
    cin>>N;
    while(N--)
    {
        cin>>a>>b;
        mx=min(mx,b);
        sum+=(a*mx);
    }

    cout << sum<< endl;

    return 0;
}



