#include<bits/stdc++.h>
using namespace std;
long long int cell(long long int n)
{
    if(n==1)
        return 1;
    else
        return n*n+(n-1)*(n-1);

}

int main()
{
    long long int n;
    cin>>n;
    cout<<cell(n);
}
