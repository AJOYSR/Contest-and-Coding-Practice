#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ts=1,i,j,m,n,t,c=0;
    while(cin>>s)
    {
        cin>>t;
        printf("Case %d:\n", ts++);
        while(t--)
        {
            c=0;
            cin>>n>>m;
            for(i=min(n,m); i<max(n,m); i++)
            {
                if(s[i]==s[i+1])
                {
                    continue;
                }
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }


    }
    return 0;
}
