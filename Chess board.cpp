#include<bits/stdc++.h>
using namespace std;
int forblack (vector<int> v)
{
    int c=0;
    for(int i=0,j=1; i<v.size();j+=2,i++)
    {
        if(j!=v[i])
            c+=abs(j-v[i]);
    }
    return c;
}
int forwhite(vector<int> v)
{
    int c=0;
    for(int i=0,j=2; i<v.size();j+=2,i++)
    {
        if(j!=v[i])
            c+=abs(j-v[i]);
    }
    return c;
}
int main()
{
    vector<int>v;
    int i,j,x,b,w,n;
    cin>>n;
    for(i=0; i<n/2; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    cout<<min(forwhite(v),forblack(v));
  return 0;

}
