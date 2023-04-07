#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[150],b[150];
    int i,j,flag=0;
    cin>>a>>b;
    for(i=0; i<strlen(a); i++)
    {
        for(j=strlen(b)-1; j>=0; j--)
        {
            if(a[i]==b[j])
            {
                flag++;
            }
        }
    }
    if(flag==strlen(a))
        cout<<"YES\n";
    else
      cout<<"NO\n";
     return 0;
}
