#include <bits/stdc++.h>
using namespace std;
#define sp " "
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int ans = INT_MIN;
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul *= nums[i];

        ans = max(ans, mul);
        if (mul == 0)
        {
            mul = 1;
        }
    }
    mul = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        mul *= nums[i];
        ans = max(ans, mul);
        if (mul == 0)
        {
            mul = 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int k;
    //cin >> k;
    cout << maxProduct(v) << endl;
}