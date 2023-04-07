#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,l,task=0;
    cin>>l>>s;
    for(int i=0; i<s.size(); i+=2)
    {
        if(s[i]==s[i+1])
        {
            task++;
            if(s[i]=='a')
            s[i]='b';
            else s[i]='a';
        }
    }
    cout<<task<<endl;
    cout<<s;

}
