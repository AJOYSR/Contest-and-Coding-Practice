#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  x,t,ts=1,avg;
    cin>>t;
    while(t--)
    {
        cin>>x;
        avg=(x*x-x)/2;
        if(avg%2==0)
            cout<<"Case "<<ts++<<": "<<avg/2<<endl;
        else
            cout<<"Case "<<ts++<<": "<<avg<<"/2"<<endl;
    }
}
