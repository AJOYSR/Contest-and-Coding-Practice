#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if((n-1)%(m-1)!=0)
        {
            cout<<"cannot do this"<<endl;

        }
        else
        {
            x=(n-1)/(m-1);
            cout<<x<<endl;
        }
    }
    return 0;
}
