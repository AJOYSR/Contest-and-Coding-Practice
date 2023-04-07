#include<bits/stdc++.h>
using namespace std;
int isdivi(string s,int n)
{
    int i,dec=0,x;
    for(i=0; i<s.size(); i++)
    {
        dec=dec*10+(s[i]-'0');
        dec=dec%n;

    }
    if(dec==0) return 1;
    return 0;

}
int main()
{
    int t,m,n,i,j,wonderful=1;
    int ara[50];
    string s;
    cin>>t;
    while(t--)
    {
        wonderful=1;
        cin>>s>>m;
        for(i=0; i<m; i++)
        {
            cin>>ara[i];
        }
        for(i=0; i<m; i++)
        {
            if(isdivi(s,ara[i])==0)
            {
                wonderful=0;
                break;
            }
        }
        cout<<s;
        if(wonderful==1)
            cout<<" - Wonderful\n";
        else if(wonderful==0)
            cout<<" - Simple\n";
    }
    return 0;

}
