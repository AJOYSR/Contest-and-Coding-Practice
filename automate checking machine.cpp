#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],b[5],i,j;
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4])
    {
        cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4];
        int yesflag=0;
        for(i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                yesflag=1;
                break;
            }
        }
        if(yesflag==0)
           cout<<"Y\n";
        else
            cout<<"N\n";

    }
}
