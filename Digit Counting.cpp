#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,j;
    cin>>t;
    while(t--)
    {
        map<int,int>m;
        for(i=0;i<=9;i++)
        {
            m[i]=0;
        }
        cin>>x;
        string s;
        for(i=1;i<=x;i++)
        {
            s+=(i+'0');
        }
        for(i=0;i<s.size();i++)
        {
            m[s[i]-'0']++;
        }
        for(i=0;i<10;i++)
        {
           i==9?cout<<m[i]<<endl:cout<<m[i]<<" ";
        }

    }
}
