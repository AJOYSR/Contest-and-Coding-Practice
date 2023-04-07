#include<iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int n = 1; n <= t; n++)
    {
        int num;
        cin >> num;
        int c = 0;
        vector<int> facs;
        for (int i = 2; i <= (int)sqrt(num); i++)
        {
            if (num%i == 0)
            {

                facs.push_back(i);
                facs.push_back(num/i);
                c++;
                if (c == 2) break;
            }
        }
        cout << "Case #" << n << ": " << num << " = " << facs[0] << " * " << facs[1] <<" = " << facs[2] << " * " << facs[3] << endl;

    }
    return 0;
}
