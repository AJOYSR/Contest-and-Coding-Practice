#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
   string s;
   while(getline(cin,s))
   {
       for(i=0;i<s.size();i++)
       {
           s[i]=s[i]-7;
       }
       for(i=0;i<s.size();i++)
       {
           cout<<s[i];
       }
       cout<<endl;
   }
   return 0;
}
