#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a<=2)
        {
            cout << 1 <<endl;
            continue;
        }
        a-=2;
        int ans = 1 + a/b;
        if(a%b)ans++;
        cout << ans <<endl;
    }
}
