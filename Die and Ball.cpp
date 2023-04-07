#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int x, y, mxi;
    cin >> x >> y;
    mxi = max(x, y);
    int a = 6 - mxi + 1;
    int b = 6;
    if (a == b)
        cout << "1/1\n";
    else if (a == 0)
        cout << "0/1\n";
    else
    {
        if (a % 2 == 0)
        {
            a /= 2;
            b /= 2;
        }
        if (a % 3 == 0)
        {
            a /= 3;
            b /= 3;
        }
        cout << a << "/" << b << "\n";
    }
    return 0;
}
