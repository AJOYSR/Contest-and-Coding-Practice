#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,sum=0;
    const long long int amount = 5000000 ;
    vector<long long int> v;
    cin>>t;
    while(t--)
    {
        while(cin>>n)
        {
            if(n==0)break;
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        int len = v.size() ;
         sum=0;j=1 ;
        for(int i=len-1 ; i>=0; i--)
        {
            sum =  sum+ (2 *pow(v[i],j) ) ;
            j++ ;
        }
        if(sum>amount)
        {
            cout<<"Too expensive\n";
        }
        else
            cout<<sum<<endl;

        v.clear();
    }
}
