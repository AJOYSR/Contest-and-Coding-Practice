#include<bits/stdc++.h>
using namespace std;

void pr(int f)
{
    if(f)cout <<"YES\n";
    else cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int ar[n];
       set<int > s;
       for(int i=0;i<n;i++)
       {
           int a;
           cin >> a;
           s.insert(a);
       }
       if(s.size() == n)
        pr(0);
       else
        pr(1);
    }
}

