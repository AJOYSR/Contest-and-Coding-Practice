#include<bits/stdc++.h>
using namespace std;
string mul(string a,string b)
{
    int i,j;
    long long int ara[600],s[600],ss[600];
    int l1=a.length();
    int l2=b.length();
    for( i=l1-1;i>=0;i--)
    s[i]=a[i]-'0';
    for( i=l2-1;i>=0;i--)
    ss[i]=b[i]-'0';
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            ara[i+j]+=s[i]*ss[j];
            ara[i+j+1]=ara[i+j]/10;
            ara[i+j]%=10;

        }
    }
    string x;
    int l=l1+l2;
    while(ara[l]==0&&l>0)
         l--;
    for(i=l;i>=0;i--)
    {x.push_back(ara[i]+'0');
        cout<<ara[i];
        cout<<endl;}
   return x;

}
int main()
{
 string a="100000",b="99999";
 string x= mul(a,b);
 cout<<x<<endl;

}
