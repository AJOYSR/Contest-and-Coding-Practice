#include<bits/stdc++.h>
using namespace std;
vector<int> g[101];
int eg,node;
int vis[101];
int pat[10];
void printadlist()
{
    for(int i=1; i<=node; i++)
    {
        cout<<i<<" : ";
        for(int j=0; j<g[i].size(); j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool bfs (int src,int des)
{
    int x,y;
    for(int i=0; i<101; i++)
    {
        vis[i]=0;
    }
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        vis[x]=2;

        for(int i=0; i<g[x].size(); i++)
        {
            y=g[x][i];
            if(vis[y]==0)
            {
                q.push(y);
                vis[y]=1;
            }

        }
    }
    if(vis[des]==2)
        return true;
    return false;
}
int  path_length (int src,int des)
{
    int x,y;
    int path=0;
    for(int i=0; i<101; i++)
    {
        vis[i]=0;
    }
    queue<int>q;
    q.push(src);
    vis[src]=1;
    pat[src]=0;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        vis[x]=2;
        for(int i=0; i<g[x].size(); i++)
        {
            y=g[x][i];
            if(vis[y]==0)
            {
                pat[y]=pat[x]+1;
                q.push(y);
                vis[y]=1;
            }
            if(y==des)
                return pat[y];

        }
    }
    return -1;

}

int main()
{
    int u,v,t;
    int que;
    cin>>node>>eg;
    for(int i=0; i<eg; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    printadlist();
    cout<<"Input Query::\n";
    cin>>que;
    for(int i=0; i<que; i++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>u>>v;
            int fl=0;
            for(int i=0; i<g[u].size(); i++)
            {
                if(g[u][i]==v)
                    fl=1;
            }
            if(fl==1)
                cout<<" Yes direct connection\n";
            else
                cout<<" No direct connection\n";
        }
        else if(t==2)
        {
            cin>>u>>v;
            if(bfs(u,v)==true)

                cout<<v<<" is reachable from "<<u<<endl;
            else
                cout<<v<<" is not reachable from "<<u<<endl;
        }
        else if(t==3)
        {
            cin>>u>>v;

            cout<<path_length(u,v)<<endl;
        }
    }
    return 0;
}

