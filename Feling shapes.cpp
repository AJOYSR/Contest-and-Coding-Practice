#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    int i,x=1;
    for(i=0;i<n;i++)
    {
        x=x*2;
    }
    return x;
}
int main()
{
    int n;cin>>n;
    if(n%2==1)
    {
        cout<<"0\n";
    }
    else
    {
        cout<<func(n/2)<<endl;
    }
}
