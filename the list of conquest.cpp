#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    map<string,int>::iterator it;
    string s1,s2;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s1;
        getline(cin,s2);
        m[s1]++;
    }
    for( it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
