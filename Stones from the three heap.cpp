#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int stone=0;
    int mini=min(b,c/2);
    b-=mini;
    stone+=mini*3;
    stone+=min(a,b/2)*3;
    cout<<stone<<"\n";
  }
  return 0;
  ///kaj shes hoye gelo ha ha ha
}

