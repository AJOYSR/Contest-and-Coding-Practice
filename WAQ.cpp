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

//int ara[];
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    int c=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            for(int  k=j+1;k<s.size();k++)
            {
                if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q') c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}


