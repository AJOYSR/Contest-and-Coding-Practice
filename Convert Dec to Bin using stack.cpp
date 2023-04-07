#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    int i,j,x,y;
    while(cin>>x)
    {
        int tmp=x;
        while(tmp>0)
        {
            s.push(tmp%2);
            tmp/=2;
        }
        while(!s.empty())
        {
            i=s.pop();
            cout<<i;
        }
    }
}
