#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
vector<int > g[100];
int node,eg;
void printad()
{
    for(int i=0; i<=node; i++)
    {
        if(i>0) cout<<i<<" : ";
        for(int j=0; j<g[i].size(); j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}
int visted[101];
bool bfss(int src,int des)
{
    for(int i=0; i<101; i++)
    {
        visted[i]=0;
    }
    int x,y;
    queue<int> q;
    q.push(src);
    visted[src]=1;

    while(!q.empty())
    {

        x=q.front();
        q.pop();
        visted[x]=2;
        for(int i=0; i<g[x].size(); i++)
        {
            y=g[x][i];
            if(visted[y]==0)
            {
                q.push(y);
                visted[y]=1;
            }
        }
    }
    if(visted[des]==2)
        return true;
    return false;
}

int main()
{
    fast;

    cin>>node>>eg;
    for(int i=0; i<eg; i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    printad();
    int q;
    cout<<"Enter number of query : \n";
    cin>>q;
    while(q--)
    {
        int u,v;
        cout<<"Input source and destination vertex : \n";
        cin>>u>>v;
        if(bfss(u,v)==true)
            cout<<"reachable\n";
        else
            cout<<"not reachable\n";

    }
}
