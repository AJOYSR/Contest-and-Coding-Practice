#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

int main()
{
    fast ;
    int t;
    cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        int ar[n];
        int c = 0;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            if(ar[i]<=d)
                c++;
        }
        if(c==n)
        {
            cout << "YES\n";
            continue;
        }
        sort(ar,ar+n);
         if(ar[0]+ar[1]>d)
            cout <<"NO\n";
        else
            cout << "YES\n";
    }

}

