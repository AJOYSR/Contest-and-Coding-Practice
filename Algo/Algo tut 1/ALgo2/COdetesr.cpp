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
        if(rand()&1)res%=1000;
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
    for (int i=1; i<length; i++)
    {
        int key = numbers[i];
        int j = i-1;
        while((j>=0) && (numbers[j] < key) )
        {
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1] = key;
    }
}

void merge2Partitions(vector<int>&numbers,int start,int end)
{
    int mid = start+(end-start)/2;
    int n1 = mid-start+1;
    int n2 = end-mid;
    int left[n1];
    int right[n2];
    for(int i=0; i<n1; i++)
    {
        left[i] = numbers[start+i];
    }

    for(int i=0; i<n2; i++)
    {
        right[i] = numbers[mid+1+i];
    }
    int i=0,j=0,k=start;
    while(i<n1&&j<n2)
    {
        if(left[i]>=right[j])
        {
            numbers[k]=left[i];
            i++;
        }
        else
        {
            numbers[k]=right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        numbers[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        numbers[k] = right[j];
        j++;
        k++;
    }
}
void mergeSortDescendingOrder(vector<int> &numbers, int start, int end)
{
    if(start<end)
    {
        int mid =(start+end)/2;
        mergeSortDescendingOrder(numbers,start,mid);
        mergeSortDescendingOrder(numbers,mid+1,end);
        merge2Partitions(numbers,start,end);
    }
}
void merge3Partitions(vector<int> &numbers, int start, int end)
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
}

bool compare(vector<int>&first,vector<int>&second)
{
    for(int i=0; i<first.size(); i++)
    {
        if(first[i]!=second[i])return false;
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
    int inputSize[20]= {10,11,12,13,14,15,16,17,18,19,20,100,5000,10000,50000,5000007,
                        5000005,10000001,60000009,90000005
                       };
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
            cout<<(second-first)<<" "<<(third-second)<<" "<<(fourth-third)<<"ms"<<endl;
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

