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
