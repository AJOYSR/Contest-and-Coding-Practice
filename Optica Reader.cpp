#include<bits/stdc++.h>
using namespace std;
int v[10000];
int main()
{
    int n,i,j,flag,x,c;

    while(cin>>n)
    {
        if(n==0)break;
        while(n--)
        {
            flag=0;
            for(i=1; i<=5; i++)
            {
                cin>>v[i];
            }

            for(j=1; j<=5; j++)
            {

              if(v[j]<=127)
                {
                    flag++;
                    c=j;
                }

            }
            if(flag==1&&c==1)
                cout<<"A\n";
           else  if(flag==1&&c==2)
                cout<<"B\n";
               else  if(flag==1&&c==3)
            cout<<"C\n";
            else if(flag==1&&c==4)
            cout<<"D\n";
           else if(flag==1&&c==5)
            cout<<"E\n";
            else if(flag==0||flag>1)
                cout<<"*\n";
        }
    }

}
