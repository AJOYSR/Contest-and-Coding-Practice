

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
char a[59];

map<pair<ll,ll>,ll> mp;
int vis[1000000];
int main()
{
   fast;
   seive();
    ll n,C;
    while(cin>>n>>C)
    {
        cout<<n<<" "<<C<<":";
        vector< ll > v;
        v.pb(1);
        for(ll i=0; ; i++)
        {
            if(prm[i]<=n)

            {
                v.pb(prm[i]);
            }
            else break;
        }
        if((v.size())%2)
        {
            C=C*2-1;
            if(C>v.size())
                C=v.size();
              ll s=(v.size()/2)-(C/2);
              ll cc=0;
            for(ll i=s,j=0;j<C;j++,i++)
                {cout<<" "<<v[i];
                }
              cout<<endl<<endl;
        }
        else

        {
            C=C*2;
            if(C>v.size())
                C=v.size();
              ll s=(v.size()/2)-(C/2);
             ll cc=0;
            for(ll i=s,j=0;j<C;j++,i++)
                {
                    cout<<" "<<v[i];

                }
              cout<<endl<<endl;
        }
        v.clear();
    }
}




