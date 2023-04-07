#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[200],b[200],r;
    int n,q,i;
    while(cin>>n)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            getline(cin,a[i]);
            getline(cin,b[i]);
        }

    cin>>q;
    getchar();
    while(q--)
    {
      getline(cin,r);
      for(i=0;i<n;i++)
      {
          if(a[i]==r)
          {
              cout<<b[i]<<endl;
              break;
          }
      }
    }
    }
    return 0;
}
