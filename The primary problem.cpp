#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int t=sqrt(n);
    for(int i=2;i<=t;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int t,n,i;

    while(cin>>n)
    {
        /// prime number sob bijor '2' bade,so 2 chara
        /// zekuno duita prime zog korle jor sonkha hoibo
        if(n%2==1)
        {
            if(prime(n-2)) ///bijor sokha ar zar zogfol diuta prime
            {
                cout<<n<<":\n"<<"2"<<"+"<<n-2<<endl;

            }
            else
               cout<<n<<":\n"<<"NO WAY!"<<endl;
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                if(prime(i)&&prime(n-i))
                {
                    cout<<n<<":\n"<<i<<"+"<<n-i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
