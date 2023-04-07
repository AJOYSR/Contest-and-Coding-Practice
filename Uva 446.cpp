#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        string op;
        cin >> hex >> a >> op >> b;
        bitset<13> b1(a), b2(b);
        cout << b1.to_string() << " " << op << " " << b2.to_string() << " = ";
        if (op.compare("+") == 0)
            cout << a+b << endl;
        else
            cout << a-b << endl;
    }
}
