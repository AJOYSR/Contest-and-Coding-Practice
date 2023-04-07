#include<bits/stdc++.h>
using namespace std;
void heapify(int ar[] , int n , int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    // Left child is greater than root
    if(l < n && ar[l] > ar[largest])
    {
        largest = l;
    }
    // Right child is greater than root
    if(r < n && ar[r] > ar[largest])
    {
        largest = r;
    }
    if(largest != i)
    {
        swap(ar[i],ar[largest]);
        cout << "Changes in Heapify function:\n";
        for (int j=0; j<n; j++)
        {
            cout << ar[j]<< " ";
        }
        cout << endl;
        heapify(ar,n,largest);
    }
}
void heapsort(int ar [] , int n)
{
    // Building the heap
    int i=0;
    for (i = (n/2 -1 ); i>=0; i--)
    {
        heapify(ar,n,i);
    }
    for (i = n-1; i>=0; i--)
    {
        cout << "Changes in heapsort function\n";
        for (int j=0; j<n; j++)
        {
            cout << ar[j]<<" ";
        }
        cout << endl;
        swap(ar[0],ar[i]);
        heapify(ar,i,0);
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        ar[i] = rand();
    }
    cout << "Before using sorting :\n";

    for(int i=0; i<n; i++)
    {
        cout << ar[i]<<" ";
    }
    cout << endl<<endl;
    heapsort(ar,n);
    cout << "\nAfter using sorting :\n";
    for(int i=0; i<n; i++)
    {
        cout << ar[i]<<" " ;
    }

}
