#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sub(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == m)
            return 1;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> m >> n;
        map<ll, ll> mp;
        ll v[m + 5];
        set<ll> st;
        ll sum = 0, mx = -500000;
        for (ll i = 0; i < m; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
            // cout << v[i] << " ";
            // sum += v[i];
            st.insert(v[i]);
            mx = max(v[i], mx);
        }
        for (ll i = 1; i < 51; i++)
        {
            if (!mp[i])
            {
                n -= i;
                st.insert(i);
                // mx = max(i, mx);
            }
            if (n < 0)
            {
                cout << "NO\n";
                break;
            }
            if (n == 0)
            {
                int f = 1;
                for (ll j = 1; j <= mx; j++)
                {
                    if (st.find(j) != st.end())
                        continue;
                    f = 0;
                    break;
                }
                if (f)
                    cout << "YES\n";
                else
                    cout << "NO\n";
                break;
            }
        }
        // for (ll i = 1; i <= 50; i++)
        // {
        //     // cout << "aflsf";
        //     if (mp[i] == 0)
        //     {
        //         // cout << i << endl;
        //         st.insert(i);
        //         mx = max(mx, i);
        //         sum += i;
        //     }
        //     cout << mx <<e
        //     if (sum == n)
        //     {
        //         int f = 1;
        //         for (ll j = 1; j <= mx; j++)
        //         {
        //             if (st.find(j) != st.end())
        //                 continue;
        //             f = 0;
        //             break;
        //         }
        //         if (f)
        //             cout << "YES\n";
        //         else
        //             cout << "NO\n";
        //         return 0;
        //     }
        //     if (sum > n)
        //     {
        //         cout << "N0\n";
        //         break;
        //     }
        // }

        // int f = 1;
        // for (ll i = 1; i <= mx; i++)
        // {
        //     if (st.find(i) != st.end())
        //         continue;
        //     f = 0;
        //     break;
        // }
        // ll nk = (l * (l + 1)) / 2;
        // if (f )
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";
    }
}
