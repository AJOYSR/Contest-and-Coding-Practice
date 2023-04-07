#include<bits/stdc++.h>
using namespace std;
int ara[100010];
int main()
{
    int n,t,ts=1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ara[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        int max=-1000000000;
        for(i=1;i<=n;i++)
        {
            if(ara[i]-ara[i-1]>max)
                max=ara[i]-ara[i-1];
        }
        int res=max;
        for(i=1;i<=n;i++)
        {
            if(ara[i]-ara[i-1]>max)
            {
                res++;
                break;
            }
            if(ara[i]-ara[i-1]==max)
                {max--;}
        }
               cout<<"Case "<<ts++<<": "<<res<<endl;

    }
    return 0;
}
