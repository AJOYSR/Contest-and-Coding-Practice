#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,n,d,r,sum,y;
    vector<int>v1;
    vector<int>v2;
    while(cin>>n>>d>>r)
    {
        sum=0;
        if(n==0&&d==0&&r==0)break;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            cin>>y;
            v2.push_back(y);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater <int> ());
        for(i=0;i<n;i++)
        {
            int h=v1[i]+v2[i];
            if(h>d)
                sum+=(h)-(d);
        }
        cout<<sum*r<<endl;
        v1.clear();
        v2.clear();
    }
    return 0;
}
