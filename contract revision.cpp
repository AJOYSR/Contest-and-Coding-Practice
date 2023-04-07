#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    char ch;
    string n;
    while(cin>>ch>>n)
    {
        if(ch=='0'&&n[0]=='0') return 0;

           int flag=0;
        for(i=0;i<n.length();i++)
        {
            if(n[i]==ch)
                n[i]='*';
        }
        for(i=0;i<n.length();i++)
        {
            if(n[i]!='*'&&n[i]!='0')
              {
                  cout<<n[i];
                  flag=1;
              }
        }
        if(flag==0)cout<<"0";
        cout<<endl;
    }
}
