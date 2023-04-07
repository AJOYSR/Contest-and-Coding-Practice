#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int l,w,h;
    double kun,A,tri,lombo,y;
    while(cin>>l>>w>>h>>kun)
    {
        A=l*w*h;
        lombo=l*tan(kun*pi/180.0);
        if(lombo<=h)
        {
            tri=0.5*lombo*w*l;
            A=A-tri;
            printf("%.3lf mL\n",A);
        }
        else
        {
           A = 0.5*h*h*l*w/lombo;

             printf("%.3lf mL\n",A);
        }
    }

}
