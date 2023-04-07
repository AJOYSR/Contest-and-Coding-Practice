#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)


int main()
{
    fast;
    int v,t,s,d;
    cin >> v >> t >> s >> d;
    if(d>=v*t && d<=v*s)
        cout <<"No\n";
    else
        cout << "Yes\n";

}

