#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        int s = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
            s += ar[i] == 2;
        }
        int ss = 0;
        int f = 0;
        for (int i = 0; i < n; ++i)
        {
            ss += ar[i] == 2;
            if (ss * 2 == s)
            {
                cout << i + 1 << '\n';
                f = 1;
                break;
            }
        }
        if (!f)
            cout << -1 << '\n';
    }
}
