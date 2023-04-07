#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i,j,t;
    string s,ss;
    cin>>t;
    getchar();
    while(t--)

    {
        getline(cin,s);
        int len=s.length();
       int sqlen=sqrt(len);
        if(sqlen*sqlen!=len)
            cout<<"INVALID"<<endl;
        else
        {
        for(i=0;i<sqlen;i++)
        {
            for(j=0;j<sqlen;j++)
            {
                cout<<s[sqlen*j+i];
            }

        }
        cout<<endl;
    }
}
}
