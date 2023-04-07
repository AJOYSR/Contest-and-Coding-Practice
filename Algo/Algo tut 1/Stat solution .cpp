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
     double sum = 0,x,y,z;
     int n;
    cin >> n;
    double ar[n+1];
    for(int i = 0; i<n;i++)
    {
        cin >> ar[i];
        sum+=ar[i];
    }
    double gor = (sum*1.0)/(n*1.0);
    cout << "Gor " << gor <<endl;
    double sqsum=0,sq;
    for(int i=0;i<n;i++)
    {

        sqsum+=((ar[i]-gor)*(ar[i]-gor));
        cout <<"dif= "<< ar[i]- gor << sp << " sq " <<((ar[i]-gor)*(ar[i]-gor))<<endl;
    }
    cout << "Sum = " << sum << sp << "Sqsum " << sqsum <<endl;
    map <double , vector<double> > mp;
    cout << "Printing Steam and plot\n" ;
    for(int i=0;i<n;i++)
    {
        int k = ar[i];
        int b = k%10;
        k/=10;
        int a = k%10;
        mp[a].pb(b);

    }
    double summ=0;
    for(int i=0;i<n;i++)
    {
        summ+=abs(ar[i]-gor);

    }
    cout << "Summn= " <<summ <<" "<< summ/(n*1.0)3<<endl;

    for(auto it = mp.begin();it!=mp.end();it++)
    {
       vector < double> v = it->second ;
        cout << it->first <<"=";
        for(double ch : v)
            cout << ch<<sp;
        cout <<endl;
    }
    double sampledev = sqrt((sqsum)/((n-1)*1.0));
    cout << sampledev <<endl;

    /*
36
37
40
41
41
44
44
45
47
48
48
50
51
51
51
51
52
55
55
55
55
57
59
60
60
60
64
65
67
68
70
75
75
78
78
87
P*/
}


