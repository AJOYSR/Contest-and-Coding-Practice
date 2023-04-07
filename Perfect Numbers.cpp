#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
   if(n==1||n==0)
        return 0;
   if(n==2)
    return 1;
    if(n%2==0)
        return 0;
   int i;

   for(i=3;i*i<=n;i+=2)
   {
       if(n%i==0)
        return 0;
   }
   return 1;
}
int main()
{
    int t;
    cin>>t;
    cout<<isprime(t)<<endl;
}
