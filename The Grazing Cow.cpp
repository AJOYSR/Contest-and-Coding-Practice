#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,area;
    long long d,l;
    int t;

    double pi=3.14159265359;
    cin>>t;
    while(t--)
    {
        cin>>d>>l;
        b=sqrt(l*l-d*d)/2.0;
        a=d/2.0+(l-d)/2.0;
        cout<<setprecision(3)<<fixed<<pi*a*b;
        printf("\n");
    }

    return 0;
}
