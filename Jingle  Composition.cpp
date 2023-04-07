#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,c,t;
    while(cin>>s)
    {
        t=0;
        c=0;
        if(s[0]=='*')
            break;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='/')
            {
                if(t==64)
                    c++;
                t=0;
            }
            else
            {
                switch(s[i])
                {
                case 'W':
                    t += 64;
                    break;
                case 'H':
                    t += 32;
                    break;
                case 'Q':
                    t += 16;
                    break;
                case 'E':
                    t += 8;
                    break;
                case 'S':
                    t += 4;
                    break;
                case 'T':
                    t += 2;
                    break;
                case 'X':
                    t += 1;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
}

