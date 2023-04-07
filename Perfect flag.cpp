#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x0,y0,x1,y1,cx,cy,len,wd,r;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x0>>y0>>x1>>y1>>cx>>cy>>r;
        len=x1-x0;
        wd=y1-y0;
        double comr=len/5;
        double comwd=(wd)/2;
        double comlen=(9*len)/20;
        if((comr==r)&&(comwd==cy-y0)&&(comlen==cx-x0)&&(wd==(len*6)/10))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
