#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0;
    cin>>n;
    for(i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
          {

        if(n==i*j)
        {
         cout<<"Yes\n";
         return 0;
        }
        }


    }
   cout<<"No\n";

}

