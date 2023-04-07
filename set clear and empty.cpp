#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int> :: iterator seit;
    s.insert(50);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);
    s.insert(50);
    s.insert(100);
    s.insert(200);
    s.insert(129);
    s.insert(340);
    s.insert(870);



    s.erase(s.begin(),s.find(50));

    for(seit=s.begin();seit!=s.end();seit++)
    {
        cout<<*seit<<" ";
    }
    cout<<endl;
    cout<<s.size()<<" "<<s.empty()<<endl;
    s.clear();
    cout<<s.size()<<" "<<s.empty()<<endl;

}

