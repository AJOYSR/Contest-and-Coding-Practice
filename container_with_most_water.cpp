#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int n = height.size();
    int l = 0;
    int r = n - 1;
    int ans = 0;
    while (l < r)
    {
        int lh = height[l];
        int rh = height[r];
        int mn_h = min(rh, lh);
        ans = max(ans, mn_h * (r - l));
        if (lh < rh)
            l++;
        else
        r--;
    }

    return ans;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // cout << "enter targer\n";
    //  int k;
    //  cin >> k;
    cout << maxArea(v);
    // cout << vec[0][0] << " "<< vec[0][1] << " " << vec[0][2] << endl;
}