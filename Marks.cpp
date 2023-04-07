#include <iostream>
#include <string>
using namespace std;

const int MAXN = 110;
string a[MAXN];
int ex[MAXN], n, m, ans;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            ex[i] = max(ex[i], a[j][i] - '0');
    for (int i = 0; i < n; i++)
    {
        bool o = false;
        for (int j = 0; j < m; j++)
            if (a[i][j] - '0' == ex[j])
                o = true;
        ans += o;
    }
    cout << ans;
}
