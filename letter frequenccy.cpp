#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,ara[123],maxi;
    string s;int j;
    cin>>t;

    getchar();
    while(t--)
    {
        j=97;
        while(j<=122)
        {
            ara[j]=0;
            j++;
        }
        maxi=0;
        getline(cin,s);
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            if(s[i]>='a'&&s[i]<='z')
                {
                   ara[s[i]]++;
                   if(ara[s[i]]>maxi)
                    maxi=ara[s[i]];
                }
        }
        for(char c= 'a';c<='z';c++)
        {

            if(ara[c]==maxi)
                cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
