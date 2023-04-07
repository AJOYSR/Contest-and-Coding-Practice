#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

int main()
{
    int n;
    cin >> n;
    int ar[n];
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ ar[i] ]++;

    }
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        cout <<"Frequency = "<<mp[x]<<endl;
    }

}


