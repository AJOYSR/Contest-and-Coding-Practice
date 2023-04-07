#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string brand[n]; int mx[n],mn[n];
       for(i=0;i<n;i++)
       {
           cin>>brand[i]>>mn[i]>>mx[i];

       }
       cin>>x;
       for(i=0;i<x;i++)
       {
       int fl=0;int inx=-1;
           cin>>p;
       for(j=0;j<n;j++)
       {
           if(mn[j]<=p && p<=mx[j])
           {
               fl++;
               inx=j;
           }
       }
       if(fl==1)
       {
           cout<<brand[inx]<<endl;
       }
       else
        cout<<"UNDETERMINED\n";
    }
      if(t>0)
        cout<<endl;
    }
    return 0;
}
