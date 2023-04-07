#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    vector<int> ar = nums;
    int low = 0, high = ar.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ar[mid] == target)
            return mid;
        if (ar[low] <= ar[mid])
        {
            if (target >= ar[low] && target < ar[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (target > ar[mid] && target <= ar[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        // cout << "cnhe";
    }
    return -1;
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
    cout << search(v, 0) << endl;
}