#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,dif,let,num;
    char a,b,c,dum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>dum>>num;
        int na=a-65;
        int nb=b-65;
        int nc=c-65;
        let=na*26*26+nb*26+nc;
        dif=abs(let-num);
        if(dif<=100)
            cout<<"nice\n";
        else
            cout<<"not nice\n";
    }
}
