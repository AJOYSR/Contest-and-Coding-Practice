#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
int const N = 1e4 + 1;
int const M = 1e9 + 1;
int n, m, cost[N];
bool vis[N];
vector<vector<pair<char, int> > > g;
priority_queue<pair<char, int> > q;

void Dijkstra(int src)
{
    int v, c;

    cost[src] = 0;
    q.push(make_pair(0, src));

    while(!q.empty())
    {
        v = q.top().second;
        c = -q.top().first;
        q.pop();

        if(vis[v]) continue;
        vis[v] = true;

        for(int i = 0; i < g[v].size(); i++)
            if(g[v][i].second + c < cost[g[v][i].first])
            {
                cost[g[v][i].first] = g[v][i].second + c;
                q.push(make_pair(-(g[v][i].second + c), g[v][i].first));
            }
    }
}

int main()
{
    fast;
    int t;
    cin >> t;

    while(t--)
    {
        scanf("%d%d", &n, &m);

        g.clear();
        g.resize(n);
        while(!q.empty()) q.pop();
        for(int i = 0; i < n; i++) cost[i] = M;
        memset(vis, false, sizeof vis);

        char u,v;
        int c;

        while(m--)
        {
            cin >> u >> v >> c;
            g[v].push_back(make_pair(u, c));
        }

        scanf("%d%d", &v, &u);
        v--;
        u--;

        Dijkstra(v);

        if(cost[u] == M) puts("NO");
        else printf("%d\n", cost[u]);
    }

    return 0;
}
