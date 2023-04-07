
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
#define pi 3.141592653589793
#define ll long long
#define ull unsigned long long
#define w(x) int x;cin>>x;while(x--)
#define fast ios_base::sync_with_stdio(0)
#define sz size()
#define cu cout<<
#define en endl
#define sp " "
#define RE(i,n) for(int i=0,_n=(n);i<_n;++i)
#define RI(i,n) for(int i=1,_n=(n);i<=_n;++i)
#include<cstdio>
#include<cstring>
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
void pr (int f)
{
    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
bool isprime(ll n)
{
    if(n<2) return 0;
    if(n==2) return 1;
    else
    {
        for(int i=2; i*i<=n; i++)
            if(n%i==0) return 0;
    }
    return 1;
}
map<int , int >mp;
//set<int  > st;
multiset<string> :: iterator it;
deque <char> q ;
const int nax = 10e6 + 5;
int t[nax],l[100005],d[100005];
//pair<int,int> a[2020];
int main()
{
    fast ;
    int n;
    cin >> n;
    t[0] = 0;
    t[n + 1] = inf;
    RI(i, n) cin >> t[i];
    n += 2;
    int start = -1, end = -1;
    RE(i, n-1) if(t[i+1] < t[i])
    {
        start = i;
        int x = start;
        while(t[x+1] < t[x]) x++;
        end = x;
        break;
    }
    for(int i = start; i <= end; ++i)
    {
        int b = end - (i-start);
        if(i < b) swap(t[i], t[b]);
    }
    RE(i, n-1) if(t[i+1] < t[i])
    {
        cout << "no";
        return 0;
    }
    cout << "yes\n";
    if(start == -1) cout << "1 1";
    else cout << start << " " << end;
    return 0;

}
