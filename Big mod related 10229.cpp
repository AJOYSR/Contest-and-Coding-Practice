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
long long int fib(long long int n)
{
    long long int f[n+2];
    long long int i;
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}
int main()
{
    long long n,m,x,y,z,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%m!=0&&n>m)
        {
            cout<<(n-m)%m<<endl;
        }
        else if(n%m==0)
        {
            cout<<0<<endl;
        }
        else if(n<m)
        {
            cout<<m-n<<endl;
        }
    }
    return 0;
}



