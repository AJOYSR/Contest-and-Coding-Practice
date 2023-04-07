#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j,k,ts=1;
    while(cin>>n>>q)
    {
        if(n==0&&q==0)break;
        int flag,x;
        int ara[n];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        cout<<"CASE# "<<ts++<<": \n";
        for(i=0;i<q;i++)

        {
            flag=0;
            cin>>k;
            for(j=0;j<n;j++)
            {
                if(ara[j]==k)
                {
                  flag=1;
                  x=j+1;
                  break;
                }
                else
                    continue;
            }
            if(flag==1)
            cout<<k<<" found at "<<x<<endl;
            else
                cout<<k<<" not found"<<endl;

        }

    }
return 0;
    }


