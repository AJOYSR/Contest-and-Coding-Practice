#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,h;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>k>>h;
        cout<<(((h-1)+(h-k))*k)/2<<endl;
    }
    return 0;
}
