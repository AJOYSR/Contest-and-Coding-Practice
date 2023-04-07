#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{
    ll c=0,d,e=0,n;
    cin >> n;
    ll ar[n];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]&1&&i%2==0) c++;
        else if(i&1&&ar[i]%2==0)e++;
    }
    if(e!=c)
    {
        cout <<-1<<endl;
    }
    else
        cout << e <<endl;
}
 
