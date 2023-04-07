#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

vector<char> adj[200];
map<char,bool> vis;
vector<char> ans;
set<char> setofvertex;

void dfs(char node)
{
    vis[node] = true;
    for (char child : adj[node])
    {
        if (!vis[child])
            dfs(child);
    }
    ans.push_back(node);
}

void Topological_sort()
{
    for (char vertex : setofvertex)
    {
        if (!vis[vertex])
            dfs(vertex);
    }
    reverse(ans.begin(), ans.end());
    cout <<"One of the topological sort is\n";
    for(int i=0; i<ans.size(); i++)
    {
        if(i<=ans.size()-2)
            cout << ans[i]<<",";
        else
            cout << ans[i];
    }
}
int main()
{
    fast;

    for(int i=0; i<6; i++)
    {
        char u,v;

        cin >> u >> v;
        adj[u].push_back(v);
        setofvertex.insert(u);
        setofvertex.insert(v);

    }
    Topological_sort();
}
