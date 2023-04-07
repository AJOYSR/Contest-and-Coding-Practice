#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
vector<int> genRandomNumbers(int n)
{
    vector<int> inputs;
    srand(time(NULL));
    int res=rand();
    for(int i=0; i<n; i++)
    {
        res*=rand();
        if(rand()&1)
            res%=1000;
        inputs.push_back(res);
    }
    return inputs;
}

void print(vector<int> &numbers)
{
    cout<<"{"<<(numbers[0]);
    for(int i=1; i<numbers.size(); i++)
    {
        cout<<", "<<numbers[i];
    }
    cout<<"}"<<endl;
}

void insertionSortDescendingOrder(vector<int>&numbers,int length)
{
    int i,j,n=length;
    for(i=1; i<n; i++)
    {
        j=i-1;
        int k=numbers[i];
        while(j>=0 && numbers[j]<k)
        {
            numbers[j+1]=numbers[j--];
        }
        numbers[j+1]=k;
    }
}

void merge2Partitions(vector<int>&numbers,int start, int end)
{
    int l=start,r=end,m=l+(r-l)/2;
    int p=m-l+1,q=r-m,i,j,k=l;
    vector<int>u,w;
    for(i=0; i<p; i++)
        u.push_back(numbers[l+i]);
    for (j=0; j<q; j++)
        w.push_back(numbers[m+1+j]);
    i=0;
    j=0;
    while(i<p && j<q)
    {
        if(u[i]>=w[j])
            numbers[k++]=u[i++];
        else
            numbers[k++]=w[j++];
    }
    while(i<p)
        numbers[k++]=u[i++];
    while(j<q)
        numbers[k++]=w[j++];
}

void mergeSortDescendingOrder(vector<int> &numbers, int start, int end)
{
    int l=start;
    int r=end;
    if(l>=r)
        return;
    int m=l+(r-l)/2;
    mergeSortDescendingOrder(numbers,l,m);
    mergeSortDescendingOrder(numbers,m+1,r);
    merge2Partitions(numbers,l,r);
}

void merge3Partitions(vector<int> &numbers, int start, int end)
{
    int i=start,l=i,r=end-1,mid1=l+((r-l)/3),mid2=l+2*((r-l)/3)+1,j=mid1,k=mid2;
    vector<int>w;
    w=numbers;
    while((i<mid1) && (j<mid2) && (k<end))
    {
        if(w[i]<w[j])
        {
            if(w[i]<w[k])
                numbers[l++]=w[i++];
            else
                numbers[l++]=w[k++];
        }
        else
        {
            if(w[j]<w[k])
                numbers[l++]=w[j++];
            else
                numbers[l++]=w[k++];
        }
    }
    while((i<mid1) && (j<mid2))
    {
        if(w[i]<w[j])
            numbers[l++]=w[i++];
        else
            numbers[l++]=w[j++];
    }
    while((j<mid2) && (k<end))
    {
        if(w[j]<w[k])
            numbers[l++]=w[j++];
        else
            numbers[l++]=w[k++];
    }
    while((i<mid1) && (k<end))
    {
        if(w[i]<w[k])
            numbers[l++]=w[i++];
        else
            numbers[l++]=w[k++];
    }
    while(i<mid1)
        numbers[l++]=w[i++];
    while(j<mid2)
        numbers[l++]=w[j++];
    while(k<end)
        numbers[l++]=w[k++];
}

void mergeSortWith3Partitions(vector<int> &numbers,int start, int end)
{
    int l=start,r=end;
    if(l>=r)
        return;
    int mid1=l+((r-l)/3);
    int mid2=l+2*((r-l)/3)+1;
    mergeSortWith3Partitions(numbers,l,mid1-1);
    mergeSortWith3Partitions(numbers,mid1,mid2-1);
    mergeSortWith3Partitions(numbers,mid2,r);
    merge3Partitions(numbers,l,r+1);
}

bool compare(vector<int>&first,vector<int>&second)
{
    for(int i=0; i<first.size(); i++)
    {
        if(first[i]!=second[i])
            return false;
    }
    return true;
}

bool isSuccessful(vector<int>&inputs,vector<int>&insertionRes,vector<int>&mergeRes,vector<int>&mergeWith3SplitsRes)
{
    bool allright=true;
    sort(inputs.begin(),inputs.end());
    reverse(inputs.begin(),inputs.end());

    if(!compare(insertionRes,inputs))
    {
        cout<<"Wrong!!! insertion sort implementation"<<endl;
        allright=false;
    }
    if(!compare(mergeRes,inputs))
    {
        cout<<"Wrong!!! merge sort implementation"<<endl;
        allright=false;
    }
    sort(inputs.begin(),inputs.end());
    if(!compare(inputs,mergeWith3SplitsRes))
    {
        cout<<"Wrong!!! merge with 3 partitions implementation"<<endl;
        allright=false;
    }

    return allright;
}

int main()
{
    fast;
    int successful=0;
    int inputSize[20]= {10,11,12,13,14,15,16,17,18,19,20,100,5000,10000,50000,5000007,5000005,10000001,60000009,90000005};
    for(int cas=1; cas<=20; cas++)
    {
        vector<int>inputs=genRandomNumbers(inputSize[cas-1]);

        vector<int>insertionRes=inputs;
        vector<int>mergeRes=inputs;
        vector<int>mergeWith3SplitsRes=inputs;

        time_t first=clock();
        insertionSortDescendingOrder(insertionRes,inputs.size());
        time_t second=clock();
        mergeSortDescendingOrder(mergeRes,0,inputs.size()-1);
        time_t third=clock();
        mergeSortWith3Partitions(mergeWith3SplitsRes,0,inputs.size()-1);
        time_t fourth=clock();

        cout<<"Case#"<<cas<<": ";
        if(isSuccessful(inputs,insertionRes,mergeRes,mergeWith3SplitsRes))
        {
            cout<<"Passed!!!"<<endl;
            cout<<(second-first)<<" "<<(third-second)<<" "<<(fourth-third)<<" ms"<<endl;
            successful++;
        }
        else
        {
            cout<<"Update the code segment and try again"<<endl;
        }
    }
    cout<<successful<<" of 20 cases are passed."<<endl;

    return 0;
}
