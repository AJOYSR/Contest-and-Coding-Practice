#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,i,j;
    while(cin>>n)
    {
        if(n==0)break;

        for(m=2;;m++)
        {
            x=0;
            for(i=2;i<n;i++)
            {
                x=(x+m)%i;

            }
            if(x==0)
                break;
        }
        cout<<m<<endl;
    }
}
