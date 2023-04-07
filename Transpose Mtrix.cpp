#include<bits/stdc++.h>
using namespace std;
int ara[10][10];
int main()
{
    int i,j,x,y,trans[100][100];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            trans[j][i]=ara[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}
