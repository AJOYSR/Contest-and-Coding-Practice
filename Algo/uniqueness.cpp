#include<bits/stdc++.h>
using namespace std;
string Uniqueelmarray( int ar[],int n)
{
      set < int > st;
      for (int i=0;i<n;i++) st.insert(ar[i]);

        if(st.size()==n)  return "YES\n\n";
        else              return "NO\n\n";
}
int main()
{
    int n;
    while(cin >> n )
    {
        int ar[n];
        for (int i=0; i<n; i++)
        {
           cin >>  ar[i];
        }
        cout << Uniqueelmarray(ar,n);
    }
}
