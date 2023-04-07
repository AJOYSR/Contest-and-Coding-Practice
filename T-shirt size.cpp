#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
    int i,j,x,n,c=0;
    string s;
    cin>>n;
    int tmp=n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        m[s]++;
    }
    for(j=0; j<n; j++)
    {
        cin>>s;
        if(m[s]>0)
        {
            m[s]--;
        }
        else c++;
    }
    cout<<c<<endl;

}
