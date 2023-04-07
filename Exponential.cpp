#include<bits/stdc++.h>
using namespace std;
long double ex(long double r,int n)
{
    if(n==0)
        return 1;
   else if(n==1)
        return r;
    else
    {
        long double re=ex(r,n/2);
        if(n%2==0)
        return re*re;
        else
            return re*r*re;


    }
}

int main()
{
    long double r;
    int n;
    while(cin>>r>>n)
    {

    cout<<ex(r,n)<<endl;
    }
}
