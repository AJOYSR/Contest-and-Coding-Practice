#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    //cout << "tar" << target<<endl;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int mn = INT_MAX, ans;
    for (int i = 0; i < n - 2; i++)
    {

        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target)
            {
                return target;
                // if (abs(sum - target) < mn)
                // {
                //     mn = min(abs(abs(sum)- target), mn);
                //     ans = sum;
                // }
               // cout << "1" << sum << endl;
                j++, k--;
            }
            else if (sum > target)
            {
               // cout << "2" << sum << endl;
                if (abs(sum - target) < mn)
                {
                    mn = min(abs((sum) - target), mn);
                    ans = sum;
                }
                k--;
            }
            else
            {
               // cout << "3" << sum << endl;
                if (abs(sum - target) < mn)
                {
                    mn = min(abs((sum) - target), mn);
                    ans = sum;
                }
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
    cout << "enter targer\n";
    // int k;
    // cin >> k;
    cout << threeSumClosest(v, -2);
    // cout << vec[0][0] << " "<< vec[0][1] << " " << vec[0][2] << endl;
}