#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,w,h,max1,max2,v;
    double f,com;
    int n;
    while(cin>>n&&n)
    {
        max1=0;max2=0;
        while(n--)
        {
            cin>>l>>w>>h;
            v=l*w*h;
            if(h>max1||h==max1 &&v > max2)
            {
                max1=h;
                max2=v;
            }
        }
        cout<<max2<<endl;
    }
}
