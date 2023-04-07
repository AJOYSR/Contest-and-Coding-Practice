#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int i,j,x,count;
    while(cin>>n>>m)
    {
        count=0;
        if(n==0&&m==0)
            break;
        map <int ,int>mp;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            mp[x]=1;

        }

        for(i=1;i<=m;i++)
        {
            cin>>x;
            if(mp[x]==1)
                count++;

        }
        cout<<count<<endl;
    }

}
