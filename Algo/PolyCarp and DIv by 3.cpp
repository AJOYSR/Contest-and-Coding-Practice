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
#define VL vector<long long int>
#define pi 3.141592653589793
#define ll long long
#define ull unsigned long long
#define w(x) int x;cin>>x;while(x--)
#define fast ios_base::sync_with_stdio(0)
#define sz size()
#define cu cout<<
#define en endl
#define sp " "
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
const int infinity = 1e10;
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
    if(f==1)cout<<"YES\n";
    else cout<<"NO\n";
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
const int NN = 1e6+5;

int main()
{
    fast ;
    string s;
    cin>>s;
    ll n=s.length();
    ll cnt=0;
    ll sum=0;
    for(ll i=0; i<s.length(); i++)
    {
        char ch=s[i];
        ll no = s[i]-'0';
        ch=(no%3)+'0';
        s[i]=ch;
    }

    for(ll i=0; i<n;)
    {
        if(s[i]=='0')
        {
            i++;
            cnt++;
        }
        else if(i+1<n && ((s[i]=='1' && s[i+1]=='2') || (s[i]=='2' && s[i+1]=='1')))
        {
            cnt++;
            i+=2;
        }
        else if(i+2<n && ((s[i]=='1' && s[i+1]=='1' && s[i+2]=='1') || (s[i]=='2' && s[i+1]=='2' && s[i+2]=='2')))
        {
            cnt++;
            i+=3;
        }
        else
        {
            i++;
        }
    }
    cout << cnt <<endl;

}







