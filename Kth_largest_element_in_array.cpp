#include <bits/stdc++.h>
using namespace std;
#define sp " "
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
        pq.push(-nums[i]);
    for (int i = k; i < nums.size(); i++)
    {
        int num = -nums[i];
        if (num < pq.top())
        {
            //cout << nums[i] << sp << pq.top() << endl;
            pq.pop();

            pq.push(-nums[i]);
        }
    }
    return (-pq.top());
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
    int k;
    cin >> k;
    cout << findKthLargest(v, k) << endl;
}