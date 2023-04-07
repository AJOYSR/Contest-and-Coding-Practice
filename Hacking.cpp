#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[50],b[50],i,j,sa,sb,s;
int main()
{
    cin>>t;
    while(t--)
    {
        sa=0,sb=0,s=0;
        cin>>n>>k;
        int k2=k;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=n-1,j=0; i>=0; i--,j++)
        {
            if(k==0)
                break;
            else
                s+=max(b[i],a[j]),k--;
        }
        for(j=k2; j<n; j++)
            s+=a[j];
        cout<<s<<endl;
    }
    return 0;
}
