
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
#define N 100000005
bool prime[N];
void seive ()
{

	memset(prime, true, sizeof(prime));

	for (int i=2; i*i<=N; i++)
	{
		if (prime[i] == true)
		{
			for (int j=i*i; j<=N; j += i)
				prime[j] = false;
		}
	}
}
char a[59];

map<pair<int,int>,int> mp;
int vis[1000000];
int main()
{
   fast;
   int x1,y1,x2,y2,x3,y3,x4,y4;
   cin>> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
   int c=0;

   ///4 ta theke 3 ta kore point niye 4C3=4

   if(((x1-x2)*(x3-x2)+(y1-y2)*(y3-y2))==0) c++;
   if(((x2-x3)*(x4-x3)+(y2-y3)*(y4-y3))==0) c++;
   if(((x3-x4)*(x1-x4)+(y3-y4)*(y1-y4))==0) c++;
   if(((x4-x1)*(x2-x1)+(y4-y1)*(y2-y1))==0) c++;
   cout<<c<<endl;
}


