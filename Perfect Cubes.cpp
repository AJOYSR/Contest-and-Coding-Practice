#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c, d, ia, ib, ic, id;
    for (ll ia = 6; ia <= 200; ia++)
    {
        a = ia*ia*ia;
        for (ll id = 2; id < ia; id++)
        {
            d = id*id*id;
            for (ll ic = id+1; ic < ia; ic++)
            {
                c = ic*ic*ic;
                for (ll ib = ic+1; ib < ia; ib++)
                {
                    b = ib*ib*ib;
                    if (a == b+c+d)
                    printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",ia,id,ic,ib);
                }
            }
        }
    }
}
