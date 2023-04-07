#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    string s;
    while (n)
    {
        if (n%2)
        {
            s += '1';
            --n;
        }
        else
        {
            s += '0';
        }
        n /= -2;
    }
    reverse(s.begin(), s.end());

    cout << s << endl;
}

