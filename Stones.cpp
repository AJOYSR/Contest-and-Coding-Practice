#include<bits/stdc++.h>
using namespace std;
int main()
{
   bool ara[1010];
   long long int n,fib[1010];
   fib[0]=0;fib[1]=1;
   ara[1]=true;
   for(int i=2;;i++)
   {
       fib[i]=fib[i-1]+fib[i-2];
       ara[fib[i]]=true;
       if(fib[i]>1010)
        break;
   }
   while(cin>>n)
   {
       if(n==0)break;
       if(ara[n]==true)
       {cout<<"Roberto\n";}
       else
        {cout<<"Alicia\n";}
   }
 return 0;
}
