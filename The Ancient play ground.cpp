#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
const double pi = 2*acos(0);
int main()
{
    int n, c = 0;
    double A;
    while (cin >> n >> A)
    {
        if (n < 3) break;
        double R = sqrt(2*A/(n*sin(2*pi/n)));
        double r = sqrt(A/(n*tan(pi/n)));
        double off = A-(pi*r*r);
        double spec = (pi*R*R)-A;
        printf("Case %d: %.5f %.5f\n", ++c, spec, off);
    }
}
