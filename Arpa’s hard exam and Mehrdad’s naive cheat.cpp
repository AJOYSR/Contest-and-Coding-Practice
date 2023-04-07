#include<bits/stdc++.h>
using namespace std;
#define ll long
#define pb push_back

long long tests,a,b,k;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ara[4] = {6, 8, 4, 2};
    if(n == 0)
     cout << 1 << endl;
    else
     cout << ara[n % 4] << endl;

    return 0;
}



