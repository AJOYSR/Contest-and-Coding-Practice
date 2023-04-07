#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p[10000];
    int n,s;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
         cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        if(s<=p[i].first)
        {
            cout<<"NO\n";
            return 0;
        }
        s+=p[i].second;
    }
    cout<<"YES\n";
    return  0;
}
