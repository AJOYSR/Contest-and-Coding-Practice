#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int a=0;
    int b=1;
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum+=a+b;
        b=sum;
        a=i+1
    }
    cout<<sum;
}
