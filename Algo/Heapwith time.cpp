#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
void heapify(int a[],int n,int i)
{
    int largest=i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    if(l<n && a[l]>a[largest])
        largest = l;
    if(r<n && a[r]>a[largest])
        largest = r;
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i,j=1;
    for(i=(n/2)-1; i>=0; i--)
        heapify(a,n,i);
    for(i=n-1; i>0; i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main()
{
    fast;
    int n;
    cout<<"Enter the size of Array : ";
    cin >> n;
    int ar[n],i;
    for(i = 0; i<n; i++)
        ar[i]=rand();
    clock_t start = clock();
    heapsort(ar,n);
    clock_t stop = clock();
    cout<<"Time needed "<<(double)(stop - start)/CLOCKS_PER_SEC<<" seconds to execute.\n"<<endl;
    return 0;
}
