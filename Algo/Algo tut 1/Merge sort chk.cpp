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

void Merge_Sort(Student *ar[],int l,int r)
{
    if(l<r)
    {
        int q=(l+r)/2;
        Merge_Sort(ar,l,q);
        Merge_Sort(ar,q+1,r);
        Merge(ar,l,q,r);
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

    Merge_Sort(stu,0,n-1);

    c2 = clock();

    cout<<"After  sorting  : "<<c2<<" mili-seconds"<<endl;
    cout<<"Time gap: "<<c2-c1<<" milli-seconds"<<endl;

    cout << "ID         Name       Credit    Cgpa \n";
    for(i=n-1; i>=0; i--)
    {
        cout << stu[i]->id<<"\t";
        fi<<stu[i]->id<<"\t";

        cout << stu[i]->name<<" "<<stu[i]->surname<<"\t";
        fi<<stu[i]->name<<" "<<stu[i]->surname<<"\t";

        cout << stu[i]->cr<<"\t";
        fi<<stu[i]->cr<<"\t";

        cout<<stu[i]->cg<<"\n";

        fi<<stu[i]->cg<<"\n";
    }

    return 0;

}

