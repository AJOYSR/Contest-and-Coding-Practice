#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        double x = pow(x1-x2, 2);
        double y = pow(y1-y2, 2);
        double E = (x+y)/6;
        printf("%.8f\n", E);
    }
}
