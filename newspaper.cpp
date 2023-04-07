#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,y;
    char c;string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<char,int>m;
        map<char ,int>::iterator itr;
        for(i=0;i<n;i++)
        {
            cin>>c>>y;
            m[c]=y;
        }
        cin>>x;
        getchar();
        double cent=0.00;
        while(x--)
        {
            getline(cin,s);
            for(i=0;i<s.size();i++)
            {
                char temp=s[i];
                itr=m.find(temp);
                if(itr!=m.end())
                {
                    cent=cent+m[temp];
                }
            }
        }
        cout<<fixed<<setprecision(2)<<cent/100<<"$"<<endl;
    }
}
