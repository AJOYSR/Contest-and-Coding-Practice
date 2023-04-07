#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,i,pos,t,n;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        vector <string>v;
        i=0;
        for(i=0;i<n;i++)
        {
            string x;
            cin>>x;
            if(x=="LEFT")
            {
                v.push_back("LEFT");
                p--;
            }
            else if(x=="RIGHT")
            {
                v.push_back("RIGHT");
                p++;
            }

         else
         {
             cin>>x;
             cin>>pos;
             pos--;
             v.push_back(v[pos]);
             if(v[pos]=="LEFT")
                p--;
             else
                p++;

         }

        }
        cout<<p<<endl;
    }
}
