#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>=max)
            max=ara[i];
    }
    if(ara[0]==max)
        cout<<"S\n"<<endl;
    else
        cout<<"N\n"<<endl;
        return 0;

}
