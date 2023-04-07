#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,i,j=0,x,c1=1;
    vector<long int>v;
    vector<long int>vs;
    cin>>t;
    n=t;
    while(t--)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0; i<v.size(); i++)
    {
        if(i>0&&v[i]==1)
        {
            c1++;
        }
        if(v[i+1]==1)
        {
            vs.push_back(v[i]);
        }
    }
    cout<<c1<<endl;
    for(i=0; i< vs.size(); i++)
    {
        cout<<vs[i]<<" ";
    }
     cout<<v[n-1]<<endl;
}
