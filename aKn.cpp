#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y;
   cin >> x >> y;
    int a = y/x;
    y-=(a*4);
    int b;
    if(y%2==0)
    {
        b = y/2;
    }
    if(a+b==x)
        cout <<"Yes\n";
    else
        cout <<"No\n";
}
