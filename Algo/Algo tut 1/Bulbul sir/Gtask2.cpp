#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
using namespace std;
int main()
{
    fast;
    int edges,numofvertex;

    cin >> numofvertex >> edges;
    int ar[numofvertex+1][numofvertex+1];
    for (int i=0; i<=numofvertex; i++)
    {
        for (int j=0; j<=numofvertex; j++)
        {
            ar[i][j] = 0;
        }
    }
    for (int i=0; i<edges; i++)
    {
        int u,v;
        cin >> u >> v;
        ar[u][v]++;
        ar[v][u]++;

    }
    int numofedge = 0;
    for(int i=0; i<=numofvertex; i++)
    {
        for(int j = 0; j<=numofvertex; j++)
        {
            //cout << ar[i][j] << " ";
            numofedge+=ar[i][j];
        }
        //cout << endl;
    }
    cout << "Total number of edge = " << numofedge/2 <<endl;
}


