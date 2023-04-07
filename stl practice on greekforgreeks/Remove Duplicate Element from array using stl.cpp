#include<bits/stdc++.h>
using namespace std;
void remdup(int ara[],int n)
{
    int i;
    set<int> s;
    for(i=0;i<n;i++)
    {
        s.insert(ara[i]);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();++it)
        {cout<<*it<<" ";
        }
    cout<<endl;
}
int main()
{
    int ara[]={1,2,2,3,4,4,5};
    int n=sizeof(ara)/sizeof(ara[0]);
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
    remdup(ara,n);
}
