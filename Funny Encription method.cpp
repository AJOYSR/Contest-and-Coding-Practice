#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h;
        stringstream hh;
        hh << n;
        hh >> hex >> h;
        bitset<16> bd(n);
        bitset<16> bh(h);
        cout << bd.count() << " " << bh.count() << endl;
    }
}
