#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,i,j,s=0,sum=0,c=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum = sum+ara[i];
    }
    sum=sum/2;
    sort(ara,ara+n);
    for(j=n-1;j>=0;j--)
    {
        s=s+ara[j];
        c++;
        if(s>sum)
            break;
    }
    cout<<c<<endl;
}
