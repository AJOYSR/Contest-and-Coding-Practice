#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    int i,flag,x,y;
    while(cin>>n>>r)
    {
        if(n!=r)
        {
        int ara[r];
        int ar[n];
        for(i=0;i<r;i++)
        {
            cin>>ara[i];
        }
          for(i=1;i<=n;i++)
          {
              ar[i]=i;
          }
          for(i=0;i<r;i++)
          {
              for(int j=1;j<=n;j++)
              {
                  if(ara[i]==ar[j])
                  {
                      ar[j]=0;
                  }
              }
          }
          for(i=1;i<=n;i++)
          {
              if(ar[i]!=0)
              {
                  printf("%d ",ar[i]);
              }
          }
          cout<<endl;
        }
        else
        {
           int ara[r];
            for(i=0;i<r;i++)cin>>ara[i];
            cout<<"*"<<endl;

        }
    }

}
