#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

vector<char> g[200];
map<char,int> vis;
map<char,int> pat;
map<char,set<char> > srcvertex;

void bfs (char src)
{
    char x,y;
    for(int i=0; i<200; i++)
    {
        vis[i] = 0;
    }
    queue<char>q;
    q.push(src);
    vis[src] = 1;
    while(!q.empty())
    {
        x = q.front();
        if(x!=src)
            srcvertex[src].insert(x);
        q.pop();

        for(int i=0; i<g[x].size(); i++)
        {
            y = g[x][i];
            if(vis[y]==0)
            {
                q.push(y);
                vis[y] = 1;
            }

        }
    }

}

int  path_length (char src,char des)
{
    char x,y;

    for(int i=0; i<200; i++)
    {
        vis[i] = 0;
    }
    queue<char>q;
    q.push(src);
    vis[src] = 1;
    pat[src] = 0;
    while(!q.empty())
    {
        x=q.front();
        cout <<x<<",";
        q.pop();
        vis[x]=2;

        for(int i=0; i<g[x].size(); i++)
        {
            y = g[x][i];
            if(vis[y] == 0)
            {
                pat[y] = pat[x]+1;
                q.push(y);
                vis[y] = 1;
            }
            if(y == des)
                return pat[y];

        }
    }
    return -1;
}
int main()
{
    fast ;
    char u,v;
    cout << "Enter graph input vertex :\n";
    for(int i=0; i<7; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);

    }
    int q;
    cout << "Number of input of query : \n";
    cin >> q;
    while(q--)
    {
        cout << "Enter source vertex\n";
        char src;
        cin >> src;
        // Bfs Function call
        bfs(src);
        set<char> st = srcvertex[src];
        for(char ch : st)
        {
            //Path length function call
            int len = path_length(src,ch);
            cout << ch<< "-" << len<< endl;
        }

    }

}

