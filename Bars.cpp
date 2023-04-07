#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int ara[10005];
int main()
{ int t;
    cin>>t;
    while(t--)
    {
    int t, w, n, i, j, p;
    cin>>w>>n;
        int dp[1005] = {};
        dp[0] = 1;
        for(i = 0; i < n; i++)
            {
            cin>>p;
            for(j = w-p; j >= 0; j--) {
                if(dp[j] && !dp[j+p])
                    dp[j+p] = 1;
            }
        }
        if(dp[w])
            puts("YES");
        else
            puts("NO");


    }
    return 0;
}
