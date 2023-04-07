#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,x,y,odd=0,even=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0) even++;
        else
        odd++;

    }
    cout<<min(even,odd)<<endl;

}
