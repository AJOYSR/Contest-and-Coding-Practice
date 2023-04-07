#include<bits/stdc++.h>
#define kaj_shes return 0
using namespace std;
int main()
{
    long int x,i,flag=0;
    cin>>i;
    while(i--)
    {

        long int n,sum=0;cin>>n;
        while(n--){
        cin>>x;
        if(x<=2048)
           sum+=x;

    }
    if(sum>=2048)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    kaj_shes;
}
