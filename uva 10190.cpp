#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,tmp,flag;
    while(cin>>n>>m)
    {
        vector<int> v;
        flag = 1;
        i=0;
        tmp=n;
        while(tmp>1)
        {
            if(tmp%m==0)
                v.push_back(tmp);
            else
                flag=0;
            tmp/=m;

        }
        v.push_back(1);
        if(flag==0)
            cout<<"Boring!\n";
        else if(flag==1)
        {
           for(i =0;i<v.size();i++)
           {
               cout<<v[i];
               if(i<v.size()-1)
                cout<<" ";
           }
           cout<<endl;
        }

    }
    return 0;
}
