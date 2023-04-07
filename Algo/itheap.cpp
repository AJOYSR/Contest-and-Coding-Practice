#include<bits/stdc++.h>
using namespace std;
void MaxHeapify(int ar[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(ar[i]>ar[(i-1)/2])
        {
            int j = i;
            while(ar[j]>ar[(j-1)/2])
            {
                swap(ar[j],ar[(j-1)/2]);
                j=(j-1)/2;
            }
        }
    }
}
void heapSort(int ar[], int n)
{
    MaxHeapify(ar, n);
    for (int i = n - 1; i > 0; i--)
    {
        swap(ar[0], ar[i]);
        MaxHeapify(ar, i);
    }
}
int main()
{
    cout<<"Enter the size of Array";
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
        ar[i]=rand();
    cout<<"\nBefore sorting : ";
    for(int i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl<<endl;
    heapSort(ar,n);
    cout<<"\nAfter Heap Sort : "<<endl;
    for(int i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}

