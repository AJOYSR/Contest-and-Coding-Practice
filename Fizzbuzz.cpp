
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

int main()
{
    fast;
    ll n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0||i%5==0||(i%5==0&&i%3==0)) continue;
        else
            sum+=i;
    }
   cout<<sum<<endl;
}


