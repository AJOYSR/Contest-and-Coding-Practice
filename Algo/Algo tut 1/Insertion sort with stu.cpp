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

void insertion_sort(Student *ar[], int n)
{
    for (int i = 1; i < n; i++)
    {
        Student *key = ar[i];
        int j = i - 1;

        while (key->cr < ar[j]->cr && j >= 0 ||
                (key->cr == ar[j]->cr && key->cg < ar[j]->cg))
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
    ofstream file("output.txt");

    while(!file.eof())
    {
        stu[i] = new Student;
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

    insertion_sort(stu,n);

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

