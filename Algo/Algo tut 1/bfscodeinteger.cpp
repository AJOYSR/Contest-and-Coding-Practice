#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

vector <int> v[10] ;
int level[10];
bool vis[10];
void bfs(int s)
{
    queue <int> q;
    q.push(s);
    level[ s ] = 0 ;
    vis[ s ] = true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i = 0; i < v[ p ].size() ; i++)
        {
            if(vis[ v[ p ][ i ] ] == false)
            {

                level[ v[ p ][ i ] ] = level[ p ]+1;
                q.push(v[ p ][ i ]);
                vis[ v[ p ][ i ] ] = true;
            }
        }
    }
}

int main()
{
    fast ;
    v[1].push_back(2);
    v[2].push_back(3);
    v[2].push_back(4);
    v[1].push_back(4);
    bfs(1);


}











