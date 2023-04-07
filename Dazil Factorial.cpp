

///AJoy Sarker ,CSE JAHANGIRNAGAR UNIVERSITY 48 Batch
#include<bits/stdc++.h>
using namespace std;
#define SORT(c) sort((c).begin(),(c).end());
#define inf INT_MAX/3
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
map<int,int>mp;
set<int> s;
ll fact(ll n)
{
    ll f=1;
    for(ll i=1; i<=n; i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    fast;
    string pre[10];
    pre[2] = "2";
    pre[3] = "3";
    pre[4] = "322";
    pre[5] = "5";
    pre[6] = "53";
    pre[7] = "7";
    pre[8] = "2227";
    pre[9] = "3327";
 ll n;string s;
    cin >> n;
    cin >> s;
    string ans="";
    for(int i=0;i< s.size();i++)
    {
        int dec = s[i] - '0';
        if(dec<= 1) continue;
        else ans += pre[dec];
    }
    SORT(ans);
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}

