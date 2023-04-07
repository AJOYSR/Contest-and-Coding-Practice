#include<bits/stdc++.h>
using namespace std;
int solv(string s)
{
    int flg=0;
    int i=0;
    while(s[i]=='.') i++;
    if(s[i]=='|') flg=1;
    else if(s[i]=='<') flg=2;
    i++;
    while(s[i]=='.') i++;
    if(flg==1&&s[i]=='>') return 1;
    if(flg==2&&s[i]=='|') return 1;
    return 0;
}
int main()
{

   int t,tc=1;
   cin>>t;
   string s;
   while(t--)
   {
       int i;
       int ans=0;
       for(i=0;i<5;i++)
       {
           cin>>s;
           if(ans) continue;
           ans+=solv(s);
       }
       getchar();
       if(!ans) cout<<"Case "<<tc++<<": Thik Ball"<<endl;
       else cout<<"Case "<<tc++<<": No Ball"<<endl;
   }
}
