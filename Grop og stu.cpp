#include<bits/stdc++.h>
using namespace std;
map < int , int > m1;
map < int , int > m2;

int Abs(int a)
{
    if(a>=0) return a;
    return -a;
}
int main()
{
    int n, a[101], b[101], dif, cnt, i, temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m1[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        m2[b[i]]++;
    }
    cnt = 0;
    for(i=1;i<6;i++)
    {
        temp = m1[i]+m2[i];
        if(temp%2!=0)
        {
            cout<<"-1\n";
            return 0;
        }
        dif = Abs(m1[i]-m2[i]);
        if(m1[i]>m2[i]) cnt = cnt+dif/2;

    }
    cout<<cnt<<endl;
    return 0;
}

