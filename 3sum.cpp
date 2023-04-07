#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++)
    {
        if ( i == 0 || (i > 0  && nums[i] != nums[i - 1] ) )
        {
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1])
                    {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k - 1])
                    {
                        k--;
                    }
                    j++, k--;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                    j++;
            }
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
    vector<vector<int>> vec = threeSum(v);
    //cout << vec[0][0] << " "<< vec[0][1] << " " << vec[0][2] << endl;
}