#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,l,j,mx;
    char s[1000000],aa;
    while(cin>>n)
    {
        map<char,long long>mp;
        getchar();
        for(i=1; i<=n; i++)
        {

            gets(s);
            l=strlen(s);
            for(j=0; j<l; j++)
            {
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))
                {
                    if(s[j]>='a'&&s[j]<='z')
                        mp[s[j]-32]++;
                    else mp[s[j]]++;
                }
            }

        }
        for(char c='A'; c<='Z'; c++)
        {
            mx=-1;
            for(char cc='A'; cc<='Z'; cc++)
            {
                if(mx<mp[cc])
                {
                    mx=mp[cc];
                    aa=cc;
                }
            }
            if(mx>0)
            cout<<aa<<" "<<mx<<endl;
            mp[aa]=0;
        }
    }
        return 0;
}
