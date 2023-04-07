#include <bits/stdc++.h>
using namespace std;
#define sp " "
int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> pq;
    for (int i = l; i < r; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return (pq.top());
}
int main()
{
    int ar[50];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int k;
    cin >> k;
    cout << kthSmallest(ar, 0, n, k) << endl;
}