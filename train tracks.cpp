#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,m,f;
    string a;
    cin>>t;
    getchar();
    while(t--)
    {
      getline(cin,a);
      int len=a.size();
      m = f = 0;
        for(i=0; i<len; i++)
        {
            if(a[i]=='M')
            {
                m++;
            }
            else if(a[i]=='F')
            {
                f++;
            }

        }
        if(m==f&&len>2)
        {
            cout<<"LOOP\n";
        }
        else
        {
            cout<<"NO LOOP\n";
        }

    }

    return 0;
}
