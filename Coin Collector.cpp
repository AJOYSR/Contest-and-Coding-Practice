#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++) cin >> d[i];
        int sum = d[0], s = 1;
        for (int i = 1; i < n-1; i++)
        {
            if (d[i]+sum < d[i+1])
            {
                sum += d[i];
                s++;
            }
        }
        cout << s+1 << endl;
    }
    return 0;
}
