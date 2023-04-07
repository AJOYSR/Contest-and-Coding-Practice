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
int ara[50001];

int main()
{

    ios_base::sync_with_stdio(0);

    ll x,hp=0;
    cin>>x;
    while(1)
    {
        if(x>=500)
        {
            hp+=(x/500)*1000;
            x-=(x/500)*500;
        }
        if(x>=100&&x<500)
        {
            hp+=(x/100)*100;

            x-=(x/100)*100;
        }
        if(x>=50&&x<100)
        {
            hp+=(x/50)*50;
            x-=(x/50)*50;

        }
        if(x>=10&&x<50)
        {
            hp+=(x/10)*10;
            x-=(x/10)*10;
        }
        if(x>=5&&x<10)
        {
            hp+=(x/5)*5;
            x-=(x/5)*5;
        }
        if(x<5) break;
    }
    cout<<hp<<endl;
}




