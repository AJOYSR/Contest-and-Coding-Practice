#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

void Merge(double ar[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    double left[n1];
    double right[n2];
    for(int i=0; i<n1; i++)
        left[i]=ar[p+i];
    for(int i=0; i<n2; i++)
        right[i]=ar[q+1+i];
    int i=0,j=0,k=p;
    while(i<n1&&j<n2)
    {
        if(left[i]< right[j])
        {
            ar[k]=left[i];
            i++;
        }
        else if(left[i] == right[j])
        {
            if(left[i] <= right[j])
            {

                ar[k]=left[i];
                i++;
            }
            else
            {
                ar[k]=right[j];
                j++;
            }

        }
        else
        {
            ar[k]=right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        ar[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        ar[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort(double ar[],int l,int r)
{
    if(l<r)
    {
        int q=(l+r)/2;
        MergeSort(ar,l,q);
        MergeSort(ar,q+1,r);
        Merge(ar,l,q,r);
    }
}
double CalculateMean(double ar[],int n)
{
    double sum=0.0;
    for(int i=0; i<n; i++)
        sum+=ar[i];
    double mean = (sum)/(n*1.0);
    return mean;

}
vector<int> CalculateMode(double ar[],int n)
{
    map<double,int>mp;
    set<double> s;
    int mode = 0;
    for(int i=0; i<n; i++)
    {
        mp [ ar[i] ]++;

        mode = max(mode,mp[ar[i]]);
    }
    vector<int>v;
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        s.insert(it->second);
        if(it->second == mode)
            v.push_back(it->first);
    }
    if(s.size()==1)
    {
        vector<int> vc;
        return vc;
    }
    return v;
}
double CalculateMedian(double ar[],int n)
{
    /// Sort Function Call

    MergeSort(ar,0,n-1);

    double Median;
    if(n%2)
    {
        Median = ar[ (n/2) ] ;
    }
    else
    {
        double a = ar[n/2] ;
        double b = ar[n/2 -1];
        Median = (a+b)/(2*1.0);

    }
    return Median;
}
int main()
{
    fast;
    int n;
    cin >> n;
    double ar[n+1];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    cout << "Printing Arithmetic Mean :\n";
    cout << CalculateMean(ar,n) << endl;

    cout << "Printing Median :\n";
    cout << CalculateMedian(ar,n)<< endl;

    cout << "Printing Mode :\n";
    vector<int>mv;
    mv = CalculateMode(ar,n);
    if(mv.size())
    {
        for(int k : mv)
            cout << k <<" ";
        cout << endl;
    }
    else
        cout << "There is no mode\n";
}
