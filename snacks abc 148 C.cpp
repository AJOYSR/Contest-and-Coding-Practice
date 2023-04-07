#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,i;
cin>>a>>b;
for( i=1;i<=b;i++)
{
    if((a*i)%b==0)
    break;
}
cout<<a*i;
}
