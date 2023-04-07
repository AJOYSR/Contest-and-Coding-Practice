#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
typedef long long ll;
ll parse_ll(string s)
{
    istringstream ss(s);
    ll n;
    ss >> n;
    return n;
}
int main()
{
    string n;
    while (cin >> n)
    {
        sort(n.begin(), n.end());
        while (n[0] == '0') next_permutation(n.begin(), n.end());
        ll a = parse_ll(n);
        sort(n.begin(), n.end());
        reverse(n.begin(), n.end());
        ll b = parse_ll(n);
        ll n = b - a;
        cout << b << " - " << a << " = " << n << " = 9 * " << n/9 << endl;
    }
}
