#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> m;
    int i,j,n,x,maxi=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        m[x]++;
        maxi=max(maxi,m[x]);
    }
    cout<<maxi<<endl;
}
