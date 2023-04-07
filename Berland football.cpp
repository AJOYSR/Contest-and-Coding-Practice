#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b;
    cin >> n >> m >> a >> b;
    if (n % m == 0)
    {
        cout << 0 << "\n";
        return 0;
    }
    long long int r = n % m;
    cout << min(r * b, (m - r) * a) << "\n";
}
