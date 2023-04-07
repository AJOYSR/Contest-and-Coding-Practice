#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ar[3659],n,p,i,x,sum,t,j;
        cin>>t;
        while(t--)
        {
            cin>>n>>p;
             for(i=1;i<=n;i++)
             ar[i]=0;
            for(i=1; i<=p; i++)
            {
                cin>>x;
                for(j=x;j<=n;j+=x)
                {

                        ar[j]=1;
                }
            }
            sum=0;
            for(i=1; i<=n; i++)
            {
               if(i%7!=0&&i%7!=6)
                sum++;
            }
            cout<<sum<<endl;
        }
    return 0;
}
