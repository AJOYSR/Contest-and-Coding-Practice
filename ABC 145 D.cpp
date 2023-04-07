#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,x,y;
    int c=0;
    cin>>x>>y;
    while(i<x)
          {
              if(i==0&&j==0)
              {
                  i++;
                  j+=2;
              }
              else if(i<j)
                {
                    i+=2;
                    j++;
                }
                c++;
          }
          cout<<c<<endl;
}
