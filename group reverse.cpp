#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k;
    string s;

    while(cin>>n)
    {
        getchar();
        getline(cin,s);
        int p=(s.length()/n);
        for(i=0; i<s.size(); i+=p)
        {
            for(j=i+p-1; j>=i; j--)
            {
                cout<<s[j];
            }
        }
        cout<<" ";
    }
}
