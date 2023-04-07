#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
/*void merge3Partitions(vector<int> &numbers, int start, int end)
{
    int i=start,l=i,r=end-1,mid1=l+((r-l)/3),mid2=l+2*((r-l)/3)+1,j=mid1,k=mid2,I;
    vector<int>u,v,w;
    for(I=i; I<mid1; I++)u.push_back(numbers[I]);
    for(I=mid1; I<mid2; I++)v.push_back(numbers[I]);
    for(I=mid2; I<end; I++)w.push_back(numbers[I]);
    int p=0,q=0,s=0;
    mid1=u.size();
    mid2=v.size();
    end=w.size();
    while((p<mid1) && (q<mid2) && (s<end))
    {
        if(u[p]<v[q])
        {
            if(u[p]<w[s])
                numbers[l++]=u[p++];
            else
                numbers[l++]=w[s++];
        }
        else
        {
            if(v[q]<w[s])
                numbers[l++]=v[q++];
            else
                numbers[l++]=w[s++];
        }
    }
    while((p<mid1) && (q<mid2))
    {
        if(u[p]<v[q])
            numbers[l++]=u[p++];
        else
            numbers[l++]=v[q++];
    }
    while((q<mid2) && (s<end))
    {
        if(v[q]<w[s])
            numbers[l++]=v[q++];
        else
            numbers[l++]=w[s++];
    }
    while((p<mid1) && (s<end))
    {
        if(u[p]<w[s])
            numbers[l++]=u[p++];
        else
            numbers[l++]=w[s++];
    }
    while(p<mid1)
        numbers[l++]=u[p++];
    while(q<mid2)
        numbers[l++]=v[q++];
    while(s<end)
        numbers[l++]=w[s++];
}

void mergeSortWith3Partitions(vector<int> &numbers,int start, int end)
{
    int l=start,r=end;
    if(r+1-l<2)
        return;
    int mid1=l+((r-l)/3);
    int mid2=l+2*((r-l)/3)+1;
    mergeSortWith3Partitions(numbers,l,mid1-1);
    mergeSortWith3Partitions(numbers,mid1,mid2-1);
    mergeSortWith3Partitions(numbers,mid2,r);
    merge3Partitions(numbers,l,r+1);
}*/
void merge3Partitions(vector<int> &numbers, int start, int end)
{
    int low = start,high = end-1;
    int mid1 = low+((high-low)/3),mid2=low+2*((high-low)/3)+1;
    vector<int>left,mid,right;
    for(int i=start; i<mid1; i++)
        left.push_back(numbers[i]);
    for(int i=mid1; i<mid2; i++)
        mid.push_back(numbers[i]);
    for(int i=mid2; i< end; i++)
        right.push_back(numbers[i]);

    int i=0,j=0,k=0,l=start;
    mid1=left.size();
    mid2=mid.size();
    end=right.size();
    while((i<mid1) && (i<mid2) && (k<end))
    {
        if(left[i]<mid[j])
        {
            if(left[i]<right[k])
                numbers[l++]=left[i++];
            else
                numbers[l++]=right[k++];
        }
        else
        {
            if(mid[j]<right[k])
                numbers[l++]=mid[j++];
            else
                numbers[l++]=right[k++];
        }
    }
    while((i<mid1) && (j<mid2))
    {
        if(left[i]<mid[j])
            numbers[l++]=left[i++];
        else
            numbers[l++]=mid[j++];
    }
    while((j<mid2) && (k<end))
    {
        if(mid[j]<right[k])
            numbers[l++]=mid[j++];
        else
            numbers[l++]=right[k++];
    }
    while((i<mid1) && (k<end))
    {
        if(left[i]<right[k])
            numbers[l++]=left[i++];
        else
            numbers[l++]=right[k++];
    }
    while(i<mid1)
        numbers[l++]=left[i++];
    while(j<mid2)
        numbers[l++]=mid[j++];
    while(k<end)
        numbers[l++]=right[k++];
}

void mergeSortWith3Partitions(vector<int> &numbers,int start, int end)
{
    int l=start,r=end;
    if(end+1-start<2)
        return;
    int mid1=start+((end-start)/3);
    int mid2=start+2*((end-start)/3)+1;
    mergeSortWith3Partitions(numbers,start,mid1-1);
    mergeSortWith3Partitions(numbers,mid1,mid2-1);
    mergeSortWith3Partitions(numbers,mid2,end);
    merge3Partitions(numbers,start,end+1);
}
int main()
{
    int n;
    cin >> n;
    vector<int > ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    mergeSortWith3Partitions(ar,0,ar.size()-1);
    for(int i=0; i<ar.size(); i++)
        cout <<ar[i] << " ";
}
