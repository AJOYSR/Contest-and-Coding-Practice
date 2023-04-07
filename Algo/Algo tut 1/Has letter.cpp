#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
int main()
{
    fast ;
    int n;
    cin >> n ;
    int sumdig = 0;
    int x = n;
    while(x>0)
    {
        sumdig+=(x%10);
        x/=10;
    }
    x = sumdig;
    int revsumdig =0,k=1;
    int i = 0;
    cout << sumdig;
    int ar[100];
    while(x>0)
    {
        ar[i] = (x%10);
        x/=10;
        i++;

    }
    for (int j=i-1; j>=0; j--)
    {
        revsumdig+=(k*(ar[j]));
        k*=10;
    }
    if(sumdig*revsumdig == n)
        cout << " Yes,magic number\n";
    else
        cout <<"No!,not magic number\n";


}
