#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,l;
    cin>>n>>k;
    if(n%2==0)
    {
        i=n/2;
    }
    else
    {
        i=(n/2)+1;
    }
    if(k<=i)
    {
        l=(2*k)-1;
    }
    else
    {
        l=(k-i)*2;
    }

    cout<<l<<endl;
    return 0;
}
