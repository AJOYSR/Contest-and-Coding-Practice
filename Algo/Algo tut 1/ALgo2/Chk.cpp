#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

int main()
{
    fast;
    int n;
    cin >> n;
    vector<double> v;
    for(int i=0;i<n;i++)
    {
        double k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(double ch : v)
        cout << ch << " ";
}
87 78 78 75 75 70 68 67 65 64 60 60 60 59 57 55 55 55 55 52 51 51 51 51 50 48 48 47 45 44 44 41 41 40 37 36
