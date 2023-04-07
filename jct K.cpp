#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,c=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        c=n;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                c=max(c,2*i+2);
                c=max(c,2*(n-i));
            }

        }
        cout<<c<<endl;
    }
}
