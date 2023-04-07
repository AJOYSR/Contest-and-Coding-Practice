#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,sum=0,i;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
          if(sum%n==0)
          {
              cout<<sum/n<<endl;
          }
          else
          {
              cout<<(sum/n)+1<<endl;
          }
    }
}
