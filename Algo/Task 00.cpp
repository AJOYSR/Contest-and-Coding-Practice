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
int retmaxid(Student *ar[],int n)
{
    int mx = ar[0]->id,i;
    for(i=1; i<n; i++)
        mx = max(mx,ar[i]->id);
    return mx;
}
void CountingSort(Student *ar[],int n,int pos)
{
    Student *br[n];
    int i;
    int cnt[10] = {0};
    for(i = 0; i < n; i++)
        cnt[(ar[i]->id/pos)%10]++;

    // Prefix Sum of credit frequency

    for(i = 1; i < 10; i++)
        cnt[i]+= cnt[i-1];

    //Putting Value in their required Position

    for(i = n-1; i>=0; i--)
    {
        cnt[(ar[i]->id/pos)%10]--;
        br[cnt[(ar[i]->id/pos)%10]] = ar[i];
    }
    // Finally Updating the original array with updated value

    for(i = 0; i<n; i++)
        ar[i]=br[i];
}
void RadixSort(Student *ar[],int n)
{
    int mx = retmaxid( ar,n),pos;
    for(pos=1; mx/pos>0; pos=pos*10)
    {
        CountingSort(ar,n,pos);
    }
}


int main()
{
    fast ;
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
    RadixSort(stu,n);
    for(i=0; i< n; i++)
    {
        fi<<stu[i]->id<<"\t";
        fi<<stu[i]->name<<" "<<stu[i]->surname<<"\t";
        fi<<stu[i]->cr<<"\t";
        fi<<stu[i]->cg<<"\n";
    }
// Checking the Student info for user value

    cout << "Input Number of Student: \n";
    int nums;
    cin >> nums;
    for (int i=0; i<nums; i++)
    {
        cin >> stu[i]->id >> stu[i]->name >>stu[i]->surname >> stu[i]->cr >> stu[i]->cg;
    }
    RadixSort(stu,nums);
    cout << "Printing Student info Sorted Order basis of ID\n";
    for (int i=0; i<nums; i++)
    {
        cout << stu[i]->id <<" "<<stu[i]->name <<" " << stu[i]->surname <<" "<<stu[i]->cr << " "<<stu[i]->cg<<endl;
    }

}









