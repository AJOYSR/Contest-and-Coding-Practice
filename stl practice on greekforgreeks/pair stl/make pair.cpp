#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int ,char> p1(10,'G');
    pair<string,double > p2 ("Ajoy",3.84);
    pair<string,double > p3;
    p3=make_pair("Shreya",3.38);
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
}
