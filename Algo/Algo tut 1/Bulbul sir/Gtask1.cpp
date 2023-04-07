#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
using namespace std;
int main()
{
    fast;
    int edges,numofvertex;
    map< int , int > mp;
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
        ar[u][v] = 1;
        ar[v][u] = 1;
        mp[u] = 1;
        mp[v] = 1;
    }
    for(int i=0; i<=numofvertex; i++)
    {
        if(mp[i])
        {
            cout << i <<"th row ";

            for (int j=0; j<= numofvertex; j++)
            {
                if(mp[j])
                {

                    cout << ar[i][j] << " ";
                }

            }
            cout << endl;
        }

    }
}


