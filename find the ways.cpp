#include<bits/stdc++.h>
#include<cmath>

double log10(double n)
{
    return log(n)/log(10);
}
using namespace std;

int main()
{
    long long i,n,k;
    while(cin>>n>>k)
    {
        double dig=0;
        for(i=0;i<k;i++)
        {

           dig+=log10(n-i)-log10(i+1);
        }
        int c=floor(dig)+1;
        cout<<c<<endl;
    }
         return 0;
}
