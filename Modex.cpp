#include<bits/stdc++.h>
using namespace std;
long long m;
long long Modex(long long b, long long p)
{
    if(p == 0)return 1;
    if(p % 2 == 0)
        return ((Modex(b, p / 2)) * (Modex(b, p / 2))) % m;
    else
        return (b * Modex(b, p - 1)) % m;
}
int main()
{
    long long b, p;
    int t;
    while(scanf("%d", &t))
    {
        if(!t)break;
        for(int i = 0; i < t; i++)
        {
           cin>>b>>p>>m;
           cout<<Modex(b,p)<<endl;

        }
    }
    return 0;
}


