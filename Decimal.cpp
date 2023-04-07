#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i,x;
   int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ara[n];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        x=(ara[n-1])/2;
       cout<<ara[x]<<endl;

    }
    return 0;
}

