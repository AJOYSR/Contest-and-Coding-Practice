#include<bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin>>t;
  while(t--){
      int x,y,z,d;
     cin>>x>>y>>z>>d;
     int  a= max(x,y);
       int b= max(y,z);
       int c= min(z,d);
       cout<<a<<" "<<b<<" "<<c<<endl;

    }

}

