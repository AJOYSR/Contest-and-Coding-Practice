#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)


void merge3Partitions(vector<int> &num, int start, int end)
{
    int low = start,high = end-1;
    int mid1 = low+((high-low)/3),mid2 = low+2*((high-low)/3)+1;
    vector<int>numbers;
    int i = start , j = mid1 , k = mid2, l = start;
    while((i < mid1) && (j < mid2) && (k < end))
    {
        if(num[i] < num[j])
        {
            if(num[i] < num[k])
            {
                numbers.push_back((num[i++]));
            }
            else
            {
                numbers.push_back(num[k++]);
            }
        }

        else
        {
            if(num[j] < num[k])
            {
                numbers.push_back(num[j++]);
            }
            else
            {

                numbers.push_back(num[k++]);
            }
        }
    }
    while((i < mid1) && (j < mid2))
    {
        if(num[i] < num[j])
        {
            numbers.push_back(num[i++]);
        }
        else
        {
            numbers.push_back(num[j++]);
        }
    }
    while((j < mid2) && (k < end))
    {
        if(num[j] < num[k])
        {
            numbers.push_back(num[j++]);
        }
        else
        {
            numbers.push_back(num[k++]);
        }
    }
    while((i < mid1) && (k < end))
    {
        if(num[i] < num[k])
        {
            numbers.push_back(num[i++]);
        }
        else
        {
            numbers.push_back(num[k++]);
        }
    }
    while(i < mid1)
        numbers.push_back(num[i++]);
    while(j < mid2)
        numbers.push_back(num[j++]);
    while(k < end)
        numbers.push_back( num[k++]);
        num = numbers;
}

void mergeSortWith3Partitions(vector<int> &numbers,int start, int end)
{
    if(start>=end)
        return;
    int mid1 = start+((end-start)/3);
    int mid2=start+2*((end-start)/3)+1;
    mergeSortWith3Partitions(numbers,start,mid1-1);
    mergeSortWith3Partitions(numbers,mid1,mid2-1);
    mergeSortWith3Partitions(numbers,mid2,end);
    merge3Partitions(numbers,start,end+1);
}


int main()
{
    fast;
    int n ;

    cin>>n;
    vector<int > ar(n);
    for( int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    mergeSortWith3Partitions(ar,0,ar.size()-1);
    cout << "After 3 way merge sort: ";
    for (int i = 0; i < n ; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}

