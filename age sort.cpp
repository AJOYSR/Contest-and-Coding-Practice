#include<bits/stdc++.h>
using namespace std;
int main()

{
   int n,x;
   vector<int>v;
   while(cin>>n)
   {
       if(n==0)break;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
   }
   sort(v.begin(),v.end());
   for(int j=0;j<n;j++)
    {cout<<v[j];
    if(i<n-1)
        cout<<" ";
    }
    cout<<endl;
    v.clear();
   }

}

