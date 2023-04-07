#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,i,j,c=0,x;
    while(cin>>N>>M)
    {
        c=0;
        x=0;
        if(N==0&&M==0)
        {
            return 0;
        }
        int ara[N+1],ara1[M+1];
        for(i=0; i<N; i++)
        {
            cin>>ara[i];
        }
        for(i=0; i<M; i++)
        {
            cin>>ara1[i];
        }
        for(i=0; i<N; i++)
        {
            for(j=x; j<M; j++)
            {
                if(ara[i]==ara1[j])
                {
                    c++;
                    x=j+1;
                    break;
                }
                if(ara1[j]>ara[i])
                    break;
                if(ara[i]>ara1[j])
                {
                    x=j+1;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
