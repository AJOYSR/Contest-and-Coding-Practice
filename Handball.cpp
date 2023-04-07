#include<bits/stdc++.h>
using namespace std;
int M[101][101];
int main()
{
    int n,m,i,j,c,flag;
    while(cin>>n>>m)
    {
        flag=0;c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>M[i][j];
            }
        }
        for(i=0;i<n;i++)
        {   flag=0;
            for(j=0;j<m;j++)
            {
                if(M[i][j]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                c++;
        }
        cout<<c<<endl;
    }
 return 0;
}
