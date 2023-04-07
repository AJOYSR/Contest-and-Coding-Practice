#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t,n,tc=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ara[n];
        ara[0]=2;
        ara[1]=3;
        for(int i=2;i<n;i++)
        {
            ara[i]=ara[i-1]+ara[i-2];
        }
        cout<<"Scenario #"<<tc++<<":"<<endl;
        cout<<ara[n-1]<<endl;

    }
}
