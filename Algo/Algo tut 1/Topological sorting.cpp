#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
vector<char> ar[200];
map<char,int>in;
vector<char> res;
set<char>vertex;

void Topsort()
{
    queue<char> q;
    for(char c : vertex)
    {
        if(in[c]==0) q.push(c);
    }
    while(!q.empty())
    {
        char cur = q.front();
        res.push_back(cur);
        q.pop();
        for(char node : ar[cur])
        {
            in[node]--;
            if(in[node]==0)
            {
                q.push(node);
            }
        }
    }
    cout << "One of the Topological Sort\n";
    for(char ch : res)
        cout << ch << ",";
}

int main()
{
    fast;
    for(int i=0; i<7; i++)
    {
        char u,v;

        cin >> u >> v;
        ar[u].push_back(v);
        vertex.insert(u);
        vertex.insert(v);
        in[v]++;
    }
    Topsort();
}
