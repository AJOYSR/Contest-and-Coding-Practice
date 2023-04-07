#include<bits/stdc++.h>
using namespace std;
int Secret(int ar[],int n)
{
    int minval = ar[0];
    int maxval = ar[0];
    for (int i=1; i<n; i++)
    {
        if(ar[i]<minval)
        {
            minval = ar[i];
        }
        if(ar[i]>maxval)
        {
            maxval = ar[i];
        }
    }
    return maxval - minval;
}
int main()
{
    int n;
    while(cin >> n && n > 0 )
    {
        if(n==0) return 0;

        int ar[n];
        for (int i=0; i<n; i++) cin >> ar[i];
        cout << Secret(ar,n)<<"\n\n";
    }
}
