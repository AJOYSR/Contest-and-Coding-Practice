#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[105];
    int n;int flag1,flag2;
    cin>>n;
    cout<<"Lumberjacks:\n";

    while(n--)
    {
        int i,min=0;
        flag1=0,flag2=0;
       int max=100;

        for( i=0;i<10;i++)
        {
            cin>>ara[i];
            if(max<ara[i])flag2=1;
            if(min>ara[i])flag1=1;
            min=ara[i];
            max=ara[i];

        }

        if(flag1!=flag2)cout<<"Ordered\n";
            else
            cout<<"Unordered\n";
    }
}
