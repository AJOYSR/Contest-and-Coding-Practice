#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag=0;
    cin>>t;
    while(t--)
    {
        flag=0;
        int n;
        cin>>n;
        int ara[n+1];
        for(int i=1; i<=n; i++)
            cin>>ara[i];
        sort(ara+1,ara+1+n);
        for(int j=2; j<=n; j++)
        {
            if(ara[j]-ara[j-1]==1)
            {
                cout<<"2\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"1\n";
    }
    ///kaj shes hahaha
}
