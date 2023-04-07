#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll x,nu,i,j;
    while(cin>>nu)
    {
        if(nu==0)
        {
           break;
        }
        x=(nu*10)/9;
        if(nu%9==0)
        {
            cout<<x-1<<" "<<x<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
