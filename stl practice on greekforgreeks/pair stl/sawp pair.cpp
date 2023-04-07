#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{
    pair<char, int> p1 =make_pair('A',12);
    pair<char, int> p2 =make_pair('B',21);

    ///Before swaping
    cout<<p1.first<<" "<< p1.second<<endl;
    cout<<p2.first<<" "<< p2.second<<endl;

    p1.swap(p2);

    /// Swap korar pore
     cout<<p1.first<<" "<< p1.second<<endl;
    cout<<p2.first<<" "<< p2.second<<endl;
}
