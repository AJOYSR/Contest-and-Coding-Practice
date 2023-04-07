#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sub(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == m)
            return 1;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int f = 0;
        string k = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        // for (int i = 0; i < s.length() - 1; i++)
        // {
        //     if (s[i] == 'e' && s[i + 1] == 's')
        //     {
        //         // f = 1;
        //         if (i + 2 < s.length() && s[i + 2] != 'Y' &&)
        //         {
        //             f = 0;
        //         }
        //         else
        //             f = 1;
        //     }
        // }
        // cout << sub(s,k)<<endl;
        if (k.find(s) != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}