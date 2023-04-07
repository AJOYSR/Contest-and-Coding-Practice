#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int m;

    while ( scanf ("%d %d", &n, &m) != EOF ) {

        if ( n < 2 || m < 2 || m > n ) {
            printf ("Boring!\n");
            continue;
        }

        vector <int> output;
        bool boring = false;

        while ( n > 1 ) {
            if ( n % m == 0 ) output.push_back (n);
            else boring = true;
            n /= m;
        }
        output.push_back (1);

        if ( boring == true ) printf ("Boring!\n");
        else {
            bool space = false;
            for ( size_t i = 0; i < output.size (); i++ ) {
                if ( space ) printf (" "); space = true;
                printf ("%d", output [i]);
            }
            printf ("\n");
        }
    }

    return 0;
}
