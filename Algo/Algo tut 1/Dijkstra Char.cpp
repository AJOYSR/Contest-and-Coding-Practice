#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

set<char>srcvertex;
vector<pair<char,int>>g[200];
map<char,int>dist;
map<char,char>par;
map<char,bool>vis;

void dijkstra(char source)
{
    for(char c : srcvertex)
    {
        vis[c]=false;
        dist[c]=INT_MAX;
        par[c]='\0';
    }

    dist[source] = 0;
    for (auto i : srcvertex)
    {
        char pa = '\0';
        for (char j : srcvertex)
        {
            if (vis[j]==false && (pa == '\0' || dist[j] < dist[pa]))
                pa = j;
        }

        if (dist[pa] == INT_MAX)
            break;

        vis[pa] = true;
        for (auto node : g[pa])
        {
            char next = node.first;
            int cost = node.second;

            if (dist[pa] + cost < dist[next])
            {
                dist[next] = dist[pa] + cost;
                par[next] = pa;
            }
        }
    }
}

void print_path(char src,char dest)
{
    vector<char>path;
    char temp = dest;
    path.push_back(temp);
    while (par[temp] != '\0')
    {
        path.push_back(par[temp]);
        temp = par[temp];
    }
    for (int i = path.size() - 1; i > 0; i--)
        cout << path[i] << ",";
    cout<<dest<<" - "<<dist[dest]<<endl;
    return;
}

int main()
{
    fast;
    char u,v;
    int w,q;
    cout << "Enter graph as input first\n";
    for(int i=0; i<6; i++)
    {
        cin>>u>>v>>w;
        srcvertex.insert(u);
        srcvertex.insert(v);
        g[u].push_back({v,w});
    }
    cout << "Enter the number of query : ";
    cin >> q;
    while(q--)
    {
        char source;
        cout<<"Enter Source node : ";
        cin >> source;
        dijkstra(source);
        for(char dest : srcvertex)
        {
            if(dist[dest]!= INT_MAX&&source !=dest)
                print_path(source,dest);
        }
        cout<<endl;

    }
    srcvertex.clear();
    return 0;
}
