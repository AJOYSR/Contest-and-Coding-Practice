#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        vector<int> v = intervals[i];
        if (v[0] <= tempInterval[1])
        {
            tempInterval[1] = max(tempInterval[1], v[1]);
        }
        else
        {
            ans.push_back(tempInterval);
            tempInterval = intervals[i];
        }
    }
    ans.push_back(tempInterval);
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
    // cout << maxArea(v);
    // cout << vec[0][0] << " "<< vec[0][1] << " " << vec[0][2] << endl;
}