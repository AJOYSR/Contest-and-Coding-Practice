#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,deb,cr,val,b,n;
    int ara[22];
   while( cin>>b>>n)
   {
       if(b==0&&n==0)break;
    for(i=1;i<=b;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=n;i++)
    {
    cin>>deb>>cr>>val;
        ara[deb]-=val;
        ara[cr]+=val;
    }
    int flag=0;
    for(i=1;i<=b;i++)
    {
        if(ara[i]<0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

   }

        return 0;
}
