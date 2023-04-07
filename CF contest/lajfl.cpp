#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define ll long long
#define pb push_back
#define ull unsigned long long

void solution()
{

    ll n, x;
    cin >> n >> x;
    vector<ll> ans;
    if (n % x != 0 )
    {
        cout << -1 << endl;
        return;
    }
    ll k = n/x;
    ans.pb(0);
    ans.pb(x);
    for (int i = 2; i < n; i++)
    {
        if (k == 200)
        {
            cout << -1 << endl;
            continue;
        }
        ans.push_back(i);
    }
    ans.push_back(1);
    for (int i = 2; i < 50 && i * i <= n / x; i++)
    {
        while (n / x % i == 0)
        {
            ans[x] = x * i;
            x *= i;
        }
    }
    if (x < n)
    {
        ans[x] = n;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}