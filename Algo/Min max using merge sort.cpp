#include<bits/stdc++.h>
using namespace std;
int Secret(int ar[],int n)

{
    set < int > st;
    for (int i=0; i<n; i++)
    {
        st.insert(ar[i]);
    }
    int minval = *(st.begin());
    auto it = st.end();
    it--;
    int   maxval = *(it);
    return maxval - minval;
}
int main()
{
    int n;
    while(cin >> n && n > 0 )
    {
        if(n==0) return 0;

        int ar[n];
        for (int i=0; i<n; i++) cin >> ar[i];
        cout << Secret(ar,n)<<"\n\n";
    }
}
