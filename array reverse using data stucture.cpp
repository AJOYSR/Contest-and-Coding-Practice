#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int i,ara[20];
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];

    }
        for(i=1;i<n;i++)
        {
            ara[i+1]=ara[i];
        }
        for(int j=9;j>=1;j--)
        {
            ara[j]=ara[j+1];
        }

            for(i=1;i<=n;i++)
            {
                cout<<ara[i]<<" ";
            }



}
