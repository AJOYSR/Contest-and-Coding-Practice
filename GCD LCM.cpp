#include <bits/stdc++.h>
using namespace std;
int main () {
    int kase;
    scanf ( "%d", &kase );
    while ( kase-- ) {
        int G, L;
        scanf ( "%d %d", &G, &L );

        int a, b;

        a = G;

        if ( L % G != 0 ) {
            printf ( "-1\n" );
            continue;
        }

        b = L;

        printf ( "%d %d\n", a, b );
    }

    return 0;
}
