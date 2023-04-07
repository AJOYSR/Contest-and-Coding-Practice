#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
class Student
{
public:
    int id;
    string name;
    string surname;
    int cr;
    double cg;

};
void Merge(Student *ar[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    Student *left[n1];
    Student *right[n2];
    for(int i=0; i<n1; i++)
        left[i]=ar[p+i];

    for(int i=0; i<n2; i++)
        right[i]=ar[q+1+i];

    int i=0,j=0,k=p;
    while(i<n1&&j<n2)
    {
        if(left[i]->cr < right[j]->cr)
        {
            ar[k]=left[i];
            i++;
        }
        else if(left[i]->cr == right[j]->cr)
        {
            if(left[i]->cg <= right[j]->cg)
            {

                ar[k]=left[i];
                i++;
            }
            else
            {
                ar[k]=right[j];
                j++;
            }

        }
        else
        {
            ar[k]=right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        ar[k] = left[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        ar[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort(Student *ar[],int l,int r)
{
    if(l<r)
    {
        int q=(l+r)/2;
        MergeSort(ar,l,q);
        MergeSort(ar,q+1,r);
        Merge(ar,l,q,r);
    }
}


void insertion_sort(Student *ar[], int n)
{
    ;
    for (int i = 1; i < n; i++)
    {
        Student *key = ar[i];
        int j = i - 1;

        while (key->cr < ar[j]->cr && j >= 0 || (key->cr == ar[j]->cr && key->cg > ar[j]->cg))
        {
            ar[j + 1] = ar[j];
            --j;
        }
        ar[j + 1] = key;
    }
}

int main()
{
    fast;
    int i=0,n;
    Student *stu[3000];
    ifstream file("input.txt");
    ofstream fi("output.txt");

    while(!file.eof())
    {
        stu[i]=new Student;
        file>>stu[i]->id;
        file>>stu[i]->name;
        file>>stu[i]->surname;
        file>>stu[i]->cr;
        file>>stu[i]->cg;
        i++;
    }
    n=i;
    file.close();

    clock_t c1,c2;
    c1 = clock();
    cout<<"Before  sorting  : "<<c1<<" mili-seconds"<<endl;

    int num;
    cout<<"Choose a sorting algorithm to sort given data"<<endl;
    cout<<"1.Insertion sort(O(n^2)\n\n2.Merge sort(always O(nlogn)"<<endl;
    cout<<"Enter your choice(1 or 2)"<<endl;
    cin>>num;
    if(num==1) insertion_sort(stu,n);
    else if(num==2) MergeSort(stu,0,n-1);

    c2 = clock();

    cout<<"After  sorting  : "<<c2<<" mili-seconds"<<endl;
    cout<<"Time gap: "<<c2-c1<<" milli-seconds"<<endl;

    cout << "ID    Name    Credit    Cgpa \n";
    for(i=n-1; i>=0; i--)
    {
        fi<<stu[i]->id<<"\t";
        fi<<stu[i]->name<<" "<<stu[i]->surname<<"\t";
        fi<<stu[i]->cr<<"\t";
        fi<<stu[i]->cg<<"\n";
    }

    return 0;

}
