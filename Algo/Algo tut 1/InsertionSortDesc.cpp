#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
void InsertionSort(int ar[],int n)
{
    for (int i=1; i<n; i++)
    {
        int key = ar[i];
        int j = i-1;
        while((j>=0) && (ar[j] < key) )
        {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}
int main()
{
    cout << "Enter number of element :\n";
    int n;
    cin >> n;
    int ar[n+1];
    cout << "Enter element of array\n";
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    InsertionSort(ar,n);
    cout << "Printing Descending Ordered Array:\n";
    for(int i=0; i<n; i++)
    {
        cout << ar[i] <<" ";
    }
}
