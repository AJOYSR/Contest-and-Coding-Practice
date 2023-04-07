#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)

void Merge(int ar[],int p,int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int left[n1];
    int right[n2];
    cout << "Left part : ";
    for(int i=0; i<n1; i++)
    {
        left[i] = ar[p+i];
        cout << left[i] << " ";
    }
    cout << endl<<"Right part: ";

    for(int i=0; i<n2; i++)
    {
        right[i] = ar[q+1+i];
        cout << right[i] <<" ";

    }
    cout << endl;
    int i=0,j=0,k=p;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            ar[k]=left[i];
            i++;
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

void MergeSort(int ar[],int l,int r)
{
    if(l<r)
    {
        int q=(l+r)/2;
        MergeSort(ar,l,q);
        MergeSort(ar,q+1,r);
        Merge(ar,l,q,r);
    }
}

int main()
{
    fast;
    cout << "Enter number of element :\n";
    int n;
    cin >> n;
    int ar[n+1];
    cout << "Enter element of array\n";
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    MergeSort(ar,0,n-1);
    cout << "Printing Ascending Ordered Array:\n";
    for(int i=0; i<n; i++)
    {
        cout << ar[i] <<" ";
    }
}

