#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d,l,h,v,tim,s;
    int t,x,i;
    cin>>t;
    while(t--)
    {
        cin>>l>>d>>h>>v;
        tim=2*h;
        tim=tim/(1000*9.81);
        tim=sqrt(tim);
        s=v*tim*1.00;
        double poolMin=d;
        double poolMax=d+l;

        if ((s< poolMin-500.0) || (s > poolMax + 500.0))
        {
            cout << "FLOOR" << endl;
        }
        else if ((s> poolMin+500.0) && (s < poolMax - 500.0))
        {
            cout << "POOL" << endl;
        }
        else
        {
            cout << "EDGE"  << endl;
        }
    }

}
