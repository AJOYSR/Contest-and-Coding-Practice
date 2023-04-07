#include<bits/stdc++.h>
using namespace std;
int nod(int n)
{
    int i,c;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;

    }
    return c;
}
int main()
{
    int n,i,k,x,t,a,b;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        cin>>a>>b;
        x=0;
        k=0;
        v.push_back(1);
        for(i=1;i<=b;i++)
        {
           x=x+ v.push_back(v[i-1]+nod(i-1));
           if(x<=b)k++;
              else
                break;
        }
        cout<<k<<endl;
    }
}
