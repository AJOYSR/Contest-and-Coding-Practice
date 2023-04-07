#include <bits/stdc++.h>
using namespace std;
int sum_digit(int n)
{
    int temp=n,s=0;
    while(temp!=0)
    {
        s=s+(temp%10);
        temp=temp/10;
    }
    return s;
}
void Merge(int arr[], int low, int mid1,int mid2, int high, int dest[])
{
    int i = low, j = mid1, k = mid2, l = low;
    while ((i < mid1) && (j < mid2) && (k < high))
    {
        if(sum_digit(arr[i]) < sum_digit(arr[j]))
        {
            if(sum_digit(arr[i]) < sum_digit(arr[k]))
            {
                dest[l++] = arr[i++];
            }
            else if(sum_digit(arr[i]) == sum_digit(arr[k]))
            {
                if(arr[i]%10<arr[k]%10)
                    dest[l++] = arr[i++];
                else dest[l++] = arr[k++];
            }
            else
            {
                dest[l++] = arr[k++];
            }
        }
        else if (sum_digit(arr[i]) == sum_digit(arr[j]))
        {
            if(arr[i]%10<arr[j]%10)
                dest[l++] = arr[i++];
            else dest[l++] = arr[j++];

        }
        else
        {
            if(sum_digit(arr[j]) < sum_digit(arr[k]))
            {
                dest[l++] = arr[j++];
            }
            else if(sum_digit(arr[j]) == sum_digit(arr[k]))
            {
                if(arr[j]%10<arr[k]%10)
                    dest[l++] = arr[j++];
                else dest[l++] = arr[k++];
            }
            else
            {
                dest[l++] = arr[k++];
            }
        }
    }
    while ((i < mid1) && (j < mid2))
    {
        if(sum_digit(arr[i]) <sum_digit(arr[j]))
        {
            dest[l++] = arr[i++];
        }
        else if(sum_digit(arr[i])==sum_digit(arr[j]))
        {
            if(arr[i]%10<arr[j]%10)
                dest[l++] = arr[i++];
            else dest[l++] = arr[j++];
        }
        else
        {
            dest[l++] = arr[j++];
        }
    }
    while ((j < mid2) && (k < high))
    {
        if(sum_digit(arr[j]) < sum_digit(arr[k]))
        {
            dest[l++] = arr[j++];
        }
        else if(sum_digit(arr[j])==sum_digit(arr[k]))
        {
            if(arr[j]%10<arr[k]%10)
                dest[l++] = arr[j++];
            else dest[l++] = arr[k++];
        }
        else
        {
            dest[l++] = arr[k++];
        }
    }
    while ((i < mid1) && (k < high))
    {
        if(sum_digit(arr[i]) < sum_digit(arr[k]))
        {
            dest[l++] = arr[i++];
        }
        else if(sum_digit(arr[i])==sum_digit(arr[k]))
        {
            if(arr[i]%10<arr[k]%10)
                dest[l++] = arr[i++];
            else dest[l++] = arr[k++];
        }
        else
        {
            dest[l++] = arr[k++];
        }
    }
    while (i < mid1)
        dest[l++] = arr[i++];
    while (j < mid2)
        dest[l++] = arr[j++];
    while (k < high)
        dest[l++] = arr[k++];
}
void mergeSort3WayRec(int arr[], int low,int high, int dest[])
{
    if(high-low>1)
    {
        int mid1 = low + ((high - low) / 3);
        int mid2 = low + 2 * ((high - low) / 3) + 1;
        mergeSort3WayRec(dest, low, mid1, arr);
        mergeSort3WayRec(dest, mid1, mid2, arr);
        mergeSort3WayRec(dest, mid2, high, arr);
        Merge(dest, low, mid1, mid2, high, arr);
    }
}
void mergeSort3Way(int arr[], int n)
{
    if(n>0)
    {
        int brr[n];
        for (int i = 0; i < n; i++)
            brr[i] = arr[i];
        mergeSort3WayRec(brr, 0, n, arr);
        for (int i = 0; i < n; i++)
            arr[i] = brr[i];
    }
}
int main()
{
    int q,j=0,n;
    ifstream f("infile.txt");
    f>>q;
    while(q--)
    {
        f>>n;
        int arr[n],i;
        for (i=0; i<n; i++)
            f >> arr[i];
        mergeSort3Way(arr,n);
        j++;
        cout<<"Case "<<j<<": ";
        for(i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
