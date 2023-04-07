#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  i,j,flag1,y,x;
    char s[3][10];
    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            cin>>s[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            if(s[i][j]=='=')
            {
                flag1=0;
                x=i;
                y=j;
                for(i=x; i<3; i++)
                {
                    if(flag1==1)break;
                    for(j=y; j<10; j++)
                    {
                        if(s[i][j]=='T'||s[i][j]=='P'||s[i][j]=='H')
                        {
                            flag1=1;
                            cout<<s[i][j]<<endl;
                            break;
                        }

                    }
                }
            }
        }
    }
        if(flag1==0)cout<<"You shall pass!!!\n";
    }
