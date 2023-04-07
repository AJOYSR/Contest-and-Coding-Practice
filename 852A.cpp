#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        int cost_without_promotion = n * a;

        // Calculate the cost of buying n kilos of potatoes using the promotion
        int num_promotions = n / (m + 1);
        int remainder = n % (m + 1);
        int cost_with_promotion = num_promotions * b + remainder * a;

        // Choose the lower cost between the two options
        int min_cost = min(cost_without_promotion, cost_with_promotion);

        cout << min_cost << endl;
    }
}