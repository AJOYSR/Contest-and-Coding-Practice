#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d\n\n", &t);
    while (t--)
    {
        map<string,int> trees;
        int cnt = 0;
        string tree;
        while (getline(cin, tree))
        {
            if (tree.length() == 0) break;
            else trees[tree]++;
            cnt++;
        }
        for (map<string,int>::iterator it = trees.begin(); it != trees.end(); it++)
        {
            cout << it->first;
            printf(" %.4f\n", 100.0*(it->second)/cnt);
        }
        if (t > 0) cout << endl;
}    }

