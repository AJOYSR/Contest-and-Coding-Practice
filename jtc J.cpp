#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int taka1,taka2,dam;
    cin>> taka1 >> taka2 >> dam;
    cout<<((taka1+taka2)/dam )<<" ";
    if(taka1/dam+taka2/dam==(taka1+taka2)/dam)
        cout<<"0\n";
    else
        cout<<dam-max(taka1%dam,taka2%dam);
    return 0;
}
