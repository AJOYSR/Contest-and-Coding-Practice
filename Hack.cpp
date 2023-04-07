#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int a, b;
        cin >> a >> b;

        int ans = 0;

        if (a >= 2* b) {
            cout << b << endl;
        } else if (b >= 2 * a) {
            cout << a << endl;
        } else {
            int c = min(a, b);
            int d = max(a, b);

            if (c == d) {
                cout << (2 * c - d) * 2 / 3 << endl;
            } else {
                cout << (d - c) + (2 * c - d) * 2 / 3 << endl;
            }
        }
    }

    return 0;
}
