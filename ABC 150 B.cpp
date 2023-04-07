#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,k,c=0,n,t,sum;
    string s;
    cin>>n>>s;
    for(i=0;i<s.size();)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')
        {

                c++;
                i=i+2;
                cout<<"x";

        }
        else
        {
            i++;
            cout<<"y"<<endl;
        }
    }
    cout<<c<<endl;
}
