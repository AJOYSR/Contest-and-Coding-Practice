#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0)
class student
{
public :
    int id;
    string name;
    int cr;
    double cg;
};
vector < student >  Sort(student ar[],int n)
{
    vector<student> st;
    for (int step = 1; step < n; step++)
    {
        student key = ar[step];
        int j = step - 1;

        while (key.cr < ar[j].cr && j >= 0 || (key.cr == ar[j].cr && key.cg > ar[j].cg))
        {
            ar[j + 1] = ar[j];
            --j;
        }
        ar[j + 1] = key;
    }

    for (int i=0; i<n; i++)
    {
        st.push_back(ar[i]);
    }
    return st;
}

int main()
{
    fast ;
    student ar[500];
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> ar[i].id >> ar[i].name>> ar[i].cr >> ar[i].cg;
    }
    vector <student > stu;
    stu = Sort(ar,n);
    cout << "After sorting\n";
    cout << "ID    Name    Credit    Cgpa \n";
    for (int i=0; i<n; i++)
    {
        cout << stu[i].id << "    " <<stu[i].name <<"    " <<stu[i].cr << "    "<< stu[i].cg << endl;
    }

}


