#include<bits/stdc++.h>
using namespace std;
int ara[10005];
int main()
{
    int n,r,i,j,x;
    while(cin>>n>>r)
    {

        for(i=1; i<=r; i++)
        {
            cin>>x;
            ara[x]=1;
        }

        if(n==r)
        {
            printf("*");
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(ara[i]== 0)
                   {
                       printf("%d ",i);
                   }
            }
        }

        printf("\n");

    }

    return 0;
}


