#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int brick=0,noofbrick=1;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        if(x==noofbrick)
        {
        noofbrick++;}
        else
        {
            brick++;
        }
    }
    if(brick<n)
        cout<<brick<<endl;
    else
        cout<<"-1\n";
}
