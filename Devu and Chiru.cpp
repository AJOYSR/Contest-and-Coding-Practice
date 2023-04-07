#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    int tp = 0, jk = 0;
    for(int i = 1; i <= n; ++i)
    {
        int ai;
        cin >> ai;
        tp += ai;
        if(tp > d)
        {
            cout << -1;
            return 0;
        }
        if(i < n)
        {
            jk += 2;
            tp += 10;
        }
        else
        {
            jk += (d - tp) / 5;
            break;
        }
    }
    cout << jk<<endl;
}

