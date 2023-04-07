#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ss, sss, s;
    cin >> s >> ss >> sss;
    s = s+ss;
    sort(s.begin(), s.end());
    sort(sss.begin(), sss.end());
    if (s == sss)
        printf("YES\n");
    else
    printf("NO\n");
    }
