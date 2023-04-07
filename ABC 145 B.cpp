#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,flag,c ;
    cin>>n;
    getchar();
    string s;
    getline(cin,s);
   x=(n)/2;
   string tmp="No";
   if(n%2==0&&s.substr(0,x)==s.substr(x,n))tmp="Yes";


   cout<<tmp<<endl;

}
