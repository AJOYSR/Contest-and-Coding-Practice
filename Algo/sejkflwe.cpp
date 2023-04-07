#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string firstname;
    string lastname;
    int credits;
    double cgpa;

};


void Merge(Student *a[],int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    Student *L[n1];
    Student *R[n2];
    for(i=0; i<n1; i++)
        L[i]=a[p+i];
    for(i=0; i<n2; i++)
        R[i]=a[q+1+i];


    i=0,j=0,k=p;
    while(i<n1&&j<n2)
    {
        if(L[i]->credits<R[j]->credits)
        {

            a[k]=L[i];
            i++;
        }
        else if(L[i]->credits==R[j]->credits)
        {
            if(L[i]->cgpa<=R[j]->cgpa)
            {

                a[k]=L[i];
                i++;
            }
            else
        {
            a[k]=R[j];
            j++;
        }

        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(Student *a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        MergeSort(a,p,q);
        MergeSort(a,q+1,r);
        Merge(a,p,q,r);
    }
}


void insertion_sort(Student *a[], int n)
{
    Student *key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;

        while (key->credits < a[j]->credits && j >= 0)
        {

            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        if(key->credits == a[j]->credits)
        {
            while (key->cgpa < a[j]->cgpa && j >= 0)
            {

                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    }
}




int main()
{
    int i=0,n;
    Student *s[1000];
    ifstream file("input.txt");
    ofstream fi("output.txt");

    while(!file.eof())
    {
        s[i]=new Student;
        file>>s[i]->id;
        file>>s[i]->firstname;
        file>>s[i]->lastname;
        file>>s[i]->credits;
        file>>s[i]->cgpa;
        i++;
    }
    n=i;
    file.close();

    clock_t t1,t2;
    t1 = clock();
    //double time_taken1 = ((double)t1)/CLOCKS_PER_SEC;
    cout<<"Before calling sorting function : "<<t1<<" milli-seconds"<<endl;

    int num;
    cout<<"Which sorting algorithm do you want???"<<endl;
    cout<<"1.Insertion sort\n2.Merge sort"<<endl;
    cout<<"Enter your choice(1 or 2)"<<endl;
    cin>>num;
    if(num==1) insertion_sort(s,n);
    else if(num==2) MergeSort(s,0,n-1);
    else cout<<"Invalid choice"<<endl;

    t2 = clock();
    //double time_taken2 = ((double)t2)/CLOCKS_PER_SEC;
    //double timedef=t2-t1;
    cout<<"After calling sorting function : "<<t2<<" milli-seconds"<<endl;
    cout<<"Time difference : "<<t2-t1<<" milli-seconds"<<endl;

    for(i=n-1;i>=0;i--)
    {
        fi<<s[i]->id<<"\t";
        fi<<s[i]->firstname<<" "<<s[i]->lastname<<"\t";
        fi<<s[i]->credits<<"\t";
        fi<<s[i]->cgpa<<"\n";
    }

    return 0;

}

