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

char a[9][9];
int main()
{
    ios_base::sync_with_stdio(0);
    int n,b,k1,k2;
   int w_s=0,b_s=0;
    int a,c,x,y,z;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    cin >>x>>y>>z;
    cin >>a>>b>>c;
    if (x > a)return cout <<"NO", 0;
    a -= x;
    if (y > a + b)return cout <<"NO", 0;
    a = a + b;
    a -= y;
    if (a + c < z)return cout <<"NO", 0;
    cout <<"YES";
}
