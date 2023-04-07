
#include <bits/stdc++.h>
using namespace std;
#define sp " "
vector<int> productExceptSelf (const vector<int> &nums)
{
    int mul = 1, n = nums.size(), c = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            c++;
            continue;
        }
        mul *= nums[i];
    }
    vector<int> ans;
    if (c >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(0);
        }
        return ans;
    }
    if (c == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                ans.push_back(mul);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(mul / nums[i]);
    }
    return ans;
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> ans = productExceptSelf (v);
    for(int kk : ans) cout << kk << sp;
}