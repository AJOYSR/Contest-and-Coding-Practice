#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
void InsertionSort(vector<int>&A,int n)
{

    for (int i=1; i<n; i++)
    {
        int j;
        int temp = numbers[i];
        for (j=i; (j>0) && (temp > numbers[j-1]); j--)
            numbers[j] = numbers[j-1];
        numbers[j] = temp;
    }
}
int main()
{
    cout << "Enter number of element :\n";
    int n;
    cin >> n;
    vector<int> ar(n);
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
