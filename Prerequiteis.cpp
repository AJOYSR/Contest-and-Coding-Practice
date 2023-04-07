#include<bits/stdc++.h>
using namespace std;
int main()
{
    int co,cat,tot,min,tmp,flag;
    string str;
    while(cin>>co)
    {
        if(co==0)break;
        cin>>cat;
        vector<string>v;
        for(int i=0;i<co;i++)
        {
            cin>>str;
            v.push_back(str);

        }
       flag=1;
        while(cat--)
        {
            cin>>tot>>min;
           tmp=0;
            for(int k=0;k<tot;k++)
            {
                string str1;
                cin>>str1;
                for(int j=0;j<v.size();j++)
                {
                    if(str1==v[j])
                    {
                        tmp++;
                        break;
                    }
                }
            }
           if(tmp<min)
            flag=0;
        }
        if(flag==0)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
}
