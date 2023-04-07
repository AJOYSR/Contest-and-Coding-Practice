#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=1;i<=1;i++)
    {
        v.push_back(i);

        cout<<"\n Size="<<v.size();
        cout<<"\n Capacity"<<v.capacity();
        cout<<"\n Max Size="<< v.max_size();

        v.resize(4);
        cout<<"\n Size= "<<v.size();

        if(v.empty()==false)
            cout<<"\n Vector is not empty";
        else
            cout<<" \n Vector is empty";

    }
}
