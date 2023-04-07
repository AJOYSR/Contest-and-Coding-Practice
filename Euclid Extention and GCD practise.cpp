#include<bits/stdc++.h>
using namespace std;
long long int x, y, d;
void extendedEuclid(long long int a, long long int b){
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendedEuclid(b, a % b);
    long long int x1, y1;
    x1 = y;
    y1 = x - a/b*y;
    x = x1;
    y = y1;
}


int main()
{

    long long int a, b;
    while(scanf("%lld %lld", &a, &b) == 2){
        if( a == 0) swap(a, b);
        extendedEuclid(a,b);
        printf("%lld %lld %lld\n", x, y, d);
    }
	return 0;
}
