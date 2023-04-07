#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    set<int>s;
    set<int>:: iterator it;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==1)
        {
            s.insert(y);

        }
        else if(x==2)
        {
            s.erase(y);
        }
        else if(x==3)
        {
          if(!(s.find(y)==s.end()))
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
