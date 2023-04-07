#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    string str;
    cin>>str;
    ll ans;
    int flag=1;
    for(int i=1;i<str.size();++i)
    {
        if(str[i]!='0')
        {
            flag=0;
        }
    }
    int len=str.size();
    if(flag)
    {
        len--;
    }
    ans=(len+1)/2;
    cout<<ans<<endl;

    return 0;
}

