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
void Insertion_Sort(Student *ar [ ] , int n)
{
    for (int i = 1 ; i< n; i++)
    {
        Student *key = ar[i];
        int j = i-1;
        while( (key->cr < ar[j]->cr && j >= 0 ) ||
                (ar[j]->cr == key->cr && key->cg < ar[j]->cg && j>=0) )
        {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}

int main()
{
    fast;
    Student *stu[139];
    ifstream file ("input.txt");
    ofstream fi ("Output.txt");
    int i = 0;
    while(!file.eof())
    {
        stu[i] = new Student ;
        file>> stu[i]->id;
        file>> stu[i]->name;
        file>> stu[i]->surname;
        file>> stu[i]->cr;
        file>> stu[i]->cg;
        i++;
    }
    int n = i;
    file.close();

    clock_t c1,c2;
    c1 = clock();
    cout << "Before calling Insertion sort\n";
    cout << c1 << " " << "ms\n";

    Insertion_Sort(stu,n);

    c2 = clock();
    cout << "After calling Insertion sort\n";

    cout << c2 << " " << "ms\n";

    cout << "ID         Name       Credit    Cgpa \n";

    for(i=n-1; i>=0; i--)
    {
        cout << stu[i]->id<<"\t";
        fi << stu[i]->id<<"\t";

        cout << stu[i]->name<<" "<<stu[i]->surname<<"\t";
        fi << stu[i]->name<<" "<<stu[i]->surname<<"\t";

        cout << stu[i]->cr<<"\t";
        fi << stu[i]->cr<<"\t";

        cout<<stu[i]->cg<<"\n";

        fi<<stu[i]->cg<<"\n";
    }

}

