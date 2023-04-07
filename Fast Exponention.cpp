#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int n)
{
    if(n==0)
        return 1;
   else if(n==1)
        return a;
      else
      {
         long long int r=power(a,n/2);
          if(n%2==0)
            return r*r;
          else
            return r*a*r;

      }

}
int main()
{
    long long int a,n;
    while(cin>>a>>n)
    {
        cout<<power(a,n)<<endl;
    }
}
