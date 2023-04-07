#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int kotogula;
    while(cin>>n)
    {
        kotogula=1;
        int digitmultiplyekina=1;
        while(digitmultiplyekina %n! =0)
        {
             digitmultiplyekina=((digitmultiplyekina*10)+1)%n;
             kotogula++;
        }
        cout<<kotogula<<endl;
    }
    return 0;
}
