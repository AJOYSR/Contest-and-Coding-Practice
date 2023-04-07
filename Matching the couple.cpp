#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,ts=1,bc,sp;
    vector<int>b;
    vector<int>s;
    while(cin>>bc>>sp)
    {
        if(bc==0&&sp==0)
            break;
        for(i=0;i<bc;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        for(j=0;j<sp;j++)
        {
            cin>>x;
            s.push_back(x);

        }
        sort(b.begin(),b.end());
        if(bc<=sp)
            {cout<<"Case "<<ts++<<": 0"<<endl;}
        else
            {cout<<"Case "<<ts++<<": "<<bc-sp<<" "<<b[0]<<endl;}
        b.clear();
    }
 return 0;
}
