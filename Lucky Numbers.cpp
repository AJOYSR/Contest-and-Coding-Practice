#include <bits/stdc++.h>

using namespace std;

#define fr first
#define sc second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int maxn = 1e5 + 55;
const int inf = 1e9;
const int base = 1e9 + 9;
const double eps = 1e-7;

bool a[maxn];

int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
   ll n;
    cin >> n;
    ll ans = 1;
    for ( ll i=0;i<=n;i++)
    {
        ans *=2;
    }
    cout << ans-2 <<endl;
}

