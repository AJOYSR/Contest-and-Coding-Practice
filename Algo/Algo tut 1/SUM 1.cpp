#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
int main()
{
    fast ;

    int t,ts=1;
    ifstream infile("input.txt");
    infile >> t;
    while(t--)
    {
        int n,sum,idx1=-1,idx2=-1;
        bool flag = false;
        infile >>  n >> sum;
        int ar[n];
        for(int i=0; i<n; i++)
            infile >> ar[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar[i]+ar[j] == sum)
                {
                    idx1 = i+1;
                    idx2 = j+1;
                    flag = true;
                    break;
                }
            }
            if(flag==true) break;
        }
        if(flag == true) cout<<"Case "<<ts++<<": "<<idx1<<" "<<idx2<<endl;
        else cout<<"Case "<<ts++<<": -1"<<endl;

    }
}
