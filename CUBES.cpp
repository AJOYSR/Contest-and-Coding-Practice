#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long int n, x, y, i, j,value,get;
    float p, l;
    int start,limit;
    while(cin>>n)
    {
        if(n==0)
            break;
        get=0;
        limit=(int)sqrt(n);
        p=(float)1/3;
        start=(int)pow(n,p);
        for(i=start;i<=limit;i++)
        {
            for(j=1;j<=i;j++)
            {
                value=(i*i*i)-(j*j*j);
                if(n==value)
                {
                    x=i;
                    y=j;
                    get=1;
                    break;

                }
            }
            if(get==1)
                break;
        }
        if(get==1)
            cout<<x<<" "<<y<<endl;
        else
            cout<<"No Solution"<<endl;
    }
    return 0;
}
