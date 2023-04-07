#include <bits/stdc++.h>
using namespace std;
int main()
{
    string keypad[10] = {" ", ".,?\"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int t,i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }for(i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(i=0;i<n;i++)cout << keypad[a[i]][b[i]-1];
        cout << endl;

        }

       return 0;

}
