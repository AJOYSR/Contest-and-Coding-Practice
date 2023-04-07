#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater <int> > s;
    set<int, greater <int> >:: iterator seit;
    s.insert(50);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);
    s.insert(50);
    for(seit=s.begin(); seit!=s.end(); seit++)
    {
        cout<<*seit<<" ";
    }
    cout<<endl;
}

