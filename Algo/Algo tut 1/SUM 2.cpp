#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
int main()
{
    fast ;
    freopen("input.txt", "r", stdin);
    int n,sum,t;
    vector<int> vec;
    map<int,int> mp;

    cin>> t;
    int ts = 0;
    while(t--)
    {
        cin >> n >> sum;
        ts++;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>> x;
            vec.push_back(x);
            mp[x] = i;
        }
        cout<<"Case "<<ts<<": ";
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            int rem = sum-vec[i];
            if(mp[rem]>0)
            {
                cout <<i+1<<" " << mp [rem]+1 <<endl;
                flag = 1;
                break;
            }

            if(flag == false)cout<<-1<<endl;
            vec.clear();
            mp.clear();
        }
    }



