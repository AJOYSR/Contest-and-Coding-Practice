#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[60];int b[7];char per [7][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8])
    {
            b[0]=a[3]+a[6]+a[2]+a[8]+a[4]+a[1];
            b[1]=a[3]+a[6]+a[7]+a[1]+a[2]+a[5];
            b[2]=a[5]+a[8]+a[0]+a[6]+a[1]+a[4];
            b[3]=a[5]+a[8]+a[1]+a[7]+a[0]+a[3];
            b[4]=a[4]+a[7]+a[0]+a[6]+a[2]+a[5];
            b[5]=a[4]+a[7]+a[2]+a[8]+a[0]+a[3];
        int minn=b[0];
        for(int i=0;i<6;i++)
        {
            if(minn>b[i])
            {
                minn=b[i];
            }
        }
        for(int j=0;j<6;j++)
        {
            if(b[j]==minn)
            {
                cout<<per[j]<<" "<<minn<<endl;
                break;
            }
        }
    }
}
