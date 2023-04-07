#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string a,b;
    while(getline(cin,a)&&getline(cin,b))
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        i = j = 0;
        for(;;)
        {
            if(i>=a.size()||j>=b.size())
                break;
            if(a[i]==b[j])
                {cout<<a[i];
            i++; j++;}
            else
            {
                if(a[i]>b[j])
                    j++;
                else
                    i++;
            }

        }
        cout<<endl;

    }
    return 0;
}
