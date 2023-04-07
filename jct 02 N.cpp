#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t,n,s,x;
    cin>>T;
    while(T--)
    {
        cin>>n>>s>>t;
        if(s<=t)
            x=(n-s)+1;
        else if(s>t)
            x=(n-t)+1;

        cout<<x<<endl;
    }
}
