#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i,x,y;
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
        sort(ara,ara+n);
        x=(ara[0]+ara[n-1])/2;
       for(i=0;i<n;i++)
       {
           if(ara[i]==x)
            y=ara[i];
       }
       cout<<y<<endl;
    }
    return 0;
}
