#include<bits/stdc++.h>
using namespace std;
struct ab
{
    int a;
    int b;
    char c[10];
};
int main()
{
    struct ab ara[10];
    for(int i=0;i<3;i++)
    {
        cin>>ara[i].a;
        cin>>ara[i].b;
        cin>>ara[i].c;

    }
        for(int i=0;i<3;i++)
        {
            cout<<ara[i].a<<" ";
            cout<<ara[i].b<<" ";
            cout<<ara[i].c<<" ";

             cout<<endl;
        }


}
