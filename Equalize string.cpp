#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s,ss;cin>>s>>ss;
        bool check=false;
        for(char i=97;i<=122;i++)
        {
            if(count(s.begin(),s.end(),i)&&count(ss.begin(),ss.end(),i))
                check=true;
        }
        if(check==true)
            cout<<"YES"<<endl ;
        else
            cout<<"NO\n";
    }
    ///kaj shes ha ha ha
}
