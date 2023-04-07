#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        ans = min(ans, nums[mid]);
        if (nums[low] < nums[mid] && nums[low] < nums[high])
        {
            high = mid - 1;
        }
        else if (nums[high] < nums[mid] && nums[high] < nums[low])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
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
    int k;
    // cin >> k;
    cout << findMin(v) << endl;
}