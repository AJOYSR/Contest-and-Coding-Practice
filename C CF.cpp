#include<bits/stdc++.h>
using namespace std;
#define ll long
#define pb push_back
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string a,b;
        for(ll f=0,i=0; i<s.size(); i++)
        {
            if(s[i]=='2')
            {
                if(!f)
                    a.pb('1'),b.pb('1');
                else
                    a.pb('0'),b.pb('2');
            }
            else if(s[i]=='1')
            {
                if(!f)
                    a.pb('1'),b.pb('0'),f=1;
                else
                    a.pb('0'),b.pb('1');
            }
            else
            {
                a.pb('0'),b.pb('0');
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
}
