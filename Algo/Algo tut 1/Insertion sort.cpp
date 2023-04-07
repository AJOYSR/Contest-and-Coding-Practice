#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
int main()
{
    fast ;
    int i,j,key,ar[300];
    int n;
    cin >> n;
    for ( i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    for (j = 2; j<=n; j++ )
    {
        key = ar[j];
        i = j-1;
        while(i>0 && ar[i]>key)
        {
            ar[i+1] = ar[i];
            i = i-1;
        }
        ar[i+1] = key;
    }
    for (int id = 1; id <= n ; id++)
    {
        cout << ar[id] << " " ;
        if(id==n)cout <<endl;
    }

}
