#include<bits/stdc++.h>
using namespace std;
#define SORT(c) sort((c).begin(),(c).end());
#define pb push_back
#define MP make_pair
#define pii pair<int,int>
#define pcc pair<char,char>
#define pic pair<int,char>
#define pci pair<char,int>
#define VS vector<string>
#define VI vector<int>
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)
#define pi 3.141592653589793
#define in scanf
#define out printf
#define ll long long
#define ull unsigned long long
#define w(x) int x;cin>>x;while(x--)
#define fast ios_base::sync_with_stdio(0)
#define FOR(i,a,b) for( int i=(a),_b=(b);i<=_b;i++)
#define DOW(i,b,a) for( int i=(b),_a=(a);i>=_a;i--)
#define sz size()
typedef unsigned long long UL;
template<typename T>inline T  S(T a)
{
    return a*a;
}
template<class T>inline string tostring(T a)
{
    ostringstream os("");
    os << a;
    return os.str();
}
template<typename T>inline ll tolong(T a)
{
    ll res;
    istringstream os(a);
    os>>res;
    return res;
}
template<typename T>inline T gcd(T a, T b)
{
    if (b == 0)return a;
    else return gcd(b, a % b);
}
template<typename T>inline T bigmod(T a, T b, T m)
{
    if (b == 0)return 1;
    else if (b % 2 == 0)return S(bigmod(a, b / 2, m)) % m;
    else return (a % m*bigmod(a, b - 1, m)) % m;
}
const int inf = (int)1e9 + 5;
const ll linf = (ll)1e16 + 5;
const ll mod = (ll)1e9 + 7;
#define N 20000009
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
                prime[j] = false;
        }
    }
}
void pr (int f)
{
    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}


int m[5], w[5], h, u, val[5];
int main()
{
    fast;
    for(int i = 0; i < 5; i++)
        cin >> m[i], val[i] = (i + 1) * 500;
    for(int i = 0; i < 5; i++)
        cin >> w[i];
    cin >> h >> u;
    ll ans = 0;
    ans += (100 * h);
    ans -= (50 * u);
    for(int i = 0; i < 5; i++)
    {
        ans += max(val[i] / 10 * 3, (val[i] / 250) * (250 - m[i]) - 50 * w[i]);
    }
    cout << ans << endl;

}
