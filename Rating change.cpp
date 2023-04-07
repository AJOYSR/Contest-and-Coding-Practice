#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,flag=0,n;
    cin>>n;
    while(n--)
    {
        cin>>a;

        if(a%2==0)
        {
            cout<<a/2<<endl;
        }
        else
        {
            if (flag==0)
            {
                a = ceil(a / 2.0);
            }
            else
            {
                a = floor(a / 2.0);
            }
            flag = !flag;
            cout<<a<<endl;
        }
    }
}
