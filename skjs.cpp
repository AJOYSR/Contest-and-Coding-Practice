#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{

    int mn = prices[0];
    int mx = 0;
    int dif;
    for (int i = 1; i < prices.size(); i++)
    {

       // cout << mn << " " << prices[i] << endl;
        dif = prices[i] - mn;
        //cout << dif << endl;
        mn = min(prices[i], mn);
        mx = max(dif, mx);
        // cout << dif << endl;
        mx = max(dif, mx);
    }
    return mx;
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 6; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << maxProfit(v) << endl;
}