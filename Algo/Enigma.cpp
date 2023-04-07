#include<bits/stdc++.h>
using namespace std;
bool Enigma(vector<vector <int > > ar,int  dim)
{
    for (int i = 0; i < dim-1; i++)
    {
        for (int j = i + 1 ; j < dim; j++)
        {
            if(ar[i][j]!=ar[j][i])
                return false;
        }
        cout << endl;
    }
    return true;
}

int main()
{
    int n;

    while(cin >> n && n > 0 )
    {
        vector<vector<int>> ar( n , vector<int> (n, 0));
        for (int i = 0; i < n ; i ++)
            for(int j = 0; j < n; j++)
                cin >> ar[i][j];

        cout << (Enigma (ar,n ) ? "True" : "False")<< "\n\n";

    }
}

