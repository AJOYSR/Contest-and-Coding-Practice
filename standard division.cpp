#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
double n;
while (cin >> n && n) {
double sd = sqrt((n*n+n)/3.0);
printf("%.6f\n", sd);
}
}
