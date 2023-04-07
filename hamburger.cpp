#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;

        int profit=0;
        if(h>=c)
        {
            int hmbg=min(b/2,p);
            profit+=hmbg*h;
            b-=2*hmbg;

            int chbg=min(b/2,f);
            profit+=chbg*c;
            cout<<profit<<endl;
        }
        else
        {
            int chbg=min(b/2,f);
            profit+=chbg*c;
            b-=chbg*2;

            int hmbg=min(b/2,p);
            profit+=hmbg*h;
            cout<<profit<<"\n";
        }
    }
    return 0;
   ///kaj shesh hoye gelo ha ha ha
}
