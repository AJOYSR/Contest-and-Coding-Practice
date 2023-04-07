#include<bits/stdc++.h>
using namespace std;
string sumstring(string a,string b)
{
    if(a.length()>b.length())
        swap(a,b);
    string s="";
    int n1=a.length(),n2=b.length();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int carry=0;
    for(int i=0;i<n1;i++)
    {
        int sum=((a[i]-'0')+(b[i]-'0')+carry);
        s.push_back(sum%10+'0');
        carry=sum/10;

    }
    for(int i=0;i<n2;i++)
    {
       int sum=((b[i]-'0')+carry);
        s.push_back(sum%10+'0');
        carry=sum/10;
    }
    while(carry)
        s.push_back(carry+'0');
        int l;
        for(l=0;l<s.size();l++)
        {
            if(s[l]!=0)
                break;
        }
        string f;
        for(int p=l;p<s.size();p++)
        {
            f.push_back(s[p]);
        }
        for(int s=0;s<f.size();s++)
            cout<<f[s]<<" ";

    return f;
}
int main()
{
   string a,b;
   int n;
   while(n--)
   {

   while(cin>>a>>b)

   {
      string x=sumstring(a,b);
      cout<<x<<endl;
   }
   }
   return 0;
}
