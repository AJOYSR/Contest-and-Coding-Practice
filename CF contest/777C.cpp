#include <bits/stdc++.h>
using namespace std;
#define SORT(c) sort((c).begin(), (c).end());
#define pb push_back
#define MP make_pair
#define pii pair<int, int>
#define pcc pair<char, char>
#define pic pair<int, char>
#define pci pair<char, int>
#define VS vector<string>
#define VI vector<int>
#define VL vector<long long int>
#define pi 3.141592653589793
#define ll long long
#define ull unsigned long long
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define fast ios_base::sync_with_stdio(0)
#define sz size()
#define cu cout <<
#define en endl
#define sp " "
#include <cstdio>
#include <cstring>
#define REP(i, n) for (int i = 0; i < n; ++i)
typedef unsigned long long UL;
template <typename T>
inline T S(T a)
{
    return a * a;
}
template <class T>
inline string tostring(T a)
{
    ostringstream os("");
    os << a;
    return os.str();
}
template <typename T>
inline ll tolong(T a)
{
    ll res;
    istringstream os(a);
    os >> res;
    return res;
}
template <typename T>
inline T gcd(T a, T b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
template <typename T>
inline T bigmod(T a, T b, T m)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return S(bigmod(a, b / 2, m)) % m;
    else
        return (a % m * bigmod(a, b - 1, m)) % m;
}
const int inf = (int)1e9 + 5;

const ll linf = (ll)1e16 + 5;
const ll modd = (ll)1e9 + 7;
const int mod = 10000007;
/*#define N 20000009
bool prime[N];
vector<ll> prm;
void seive ()
{

    memset(prime, true, sizeof(prime));

    for( ll i=2; i*i<=N; i++)
    {
        if (prime[i] == true)
        {
            prm.pb(i);
            for (ll j=i*i; j<=N; j += i)
                pe[j] = false;
        }
    }
}*/
void pr(int f)
{
    if (f == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
bool isprime(ll n)
{
    if (n == 1)
        return true;
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    else
    {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return 0;
    }
    return 1;
}

ll countSum(ll x)
{
    ll res = 0;
    while (x != 0)
    {
        res += (x % 10);
        x /= 10;
    }
    return res;
}
bool ispaldrome(string s)
{

    for (int i = 0; i < s.sz; i++)
    {
        if (s[i] != s[s.sz - 1 - i])
            return false;
    }
    return true;
}

const int NN = 2e6 + 5;
ll vis[NN];

void prs(int f)
{
    if (f)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int numSquares(int n)
{
    vector<int>dp(n+1,INT_MAX);
    dp[0] = 0;
    int num = 1;
    while(num * num<=n)
    {
        int k = num * num;
        for(int i=k;i<n+1;i++)
        {
            dp[i] = min(dp[i],dp[i-k] + 1);
        }
        num++;
    }
    return dp[n];
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string str[n + 2];
    for (int i = 0; i < n; i++)
        cin >> str[i];
    bool flg = 1;
    vector<pair<int, int>> v;
    for (int i = n - 1; i >= 0 && flg; i--)
    {
        for (int j = m - 1; j >= 0 && flg; j--)
        {
            if (str[i][j] == '1')
            {
                if (j - 1 >= 0 && str[i][j - 1] == '0')
                {
                    v.push_back(make_pair(i, j - 1));
                    v.push_back(make_pair(i, j));
                }
                else if (i - 1 >= 0 && str[i - 1][j] == '0')
                {
                    v.push_back(make_pair(i - 1, j));
                    v.push_back(make_pair(i, j));
                }
                else if (j - 1 >= 0)
                {
                    v.push_back(make_pair(i, j - 1));
                    v.push_back(make_pair(i, j));
                }
                else if (i - 1 >= 0)
                {
                    v.push_back(make_pair(i - 1, j));
                    v.push_back(make_pair(i, j));
                }
                else
                    flg = 0;
            }
        }
    }
    if (flg)
    {
        cout << v.size() / 2 << '\n';
        for (int i = 0; i < v.size(); i += 2)
        {
            cout << v[i].first + 1 << ' ' << v[i].second + 1 << ' ';
            cout << v[i + 1].first + 1 << ' ' << v[i + 1].second + 1 << '\n';
        }
    }
    else
        cout << -1 << '\n';
}

int main()
{
    fast;
    w(t)
        solve();
}
