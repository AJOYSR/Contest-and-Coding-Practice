
#include<bits/stdc++.h>

using namespace std;
string mul(string ar,string br)

{
       long long i,cr[300],l1,l2,dr[300],l,j;
              long long er[600]={0};
              l1=ar.length();
              l2=br.length();
              for(i=l1-1;i>=0;i--)
              cr[l1-1-i]=ar[i]-'0';
              for(i=l2-1;i>=0;i--)
              dr[l2-1-i]=br[i]-'0';
              for(i=0;i<l1;i++)
              {
                     for(j=0;j<l2;j++)
                     {
                          er[i+j]+=cr[i]*dr[j];
                          er[i+j+1]+=er[i+j]/10;
                          er[i+j]%=10;
                         // cout<<er[i+j]<<" "<<er[i+j+1]<<endl;
                     }
              }
              string x;
              l=l1+l2;
              while(er[l]==0&&l>0)
                     l--;
              for(i=l;i>=0;i--)
                     {
                         x.push_back(er[i]+'0');
                     }
              return x;
}
int main()
{
 string a,b ;
 while(getline(cin,a)&&getline(cin,b))
 {
 string x= mul(a,b);
 cout<<x<<endl;
 }
   return 0;
}
