#include<bits/stdc++.h>
using namespace std;
int main()

{
    int r,n,s,x=1;
    while(cin>>r>>n)
    {
        if(n==0&&r==0)break;
        s=(r-1)/(n);
        if(s<=26)
        cout<<"Case "<<x++<<": "<<s<<endl;
        else
        cout<<"Case "<<x++<<": "<<"impossible"<<endl;
    }
    return 0;
}
