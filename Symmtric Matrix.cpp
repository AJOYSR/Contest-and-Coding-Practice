#include<bits/stdc++.h>
using namespace std;
long long M[101][101];
int main()
{
    long long i,j,x,ts=1,t;
    char a,b;
    bool sym;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x;
         sym=true;
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                cin>>M[i][j];
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                if(M[i][j]!=M[x-i-1][x-j-1])
                    sym=false;
                if(M[i][j]<0)
                    sym=false;
            }
        }
    cout << "Test #" << ts++ << ": ";
if (sym) cout << "Symmetric." << endl;
else cout << "Non-symmetric." << endl;

    }
    return 0;
}
