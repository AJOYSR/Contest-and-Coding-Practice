#include <iostream>
#include <sstream>
#include <bitset>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bitset<16> bd(n);
      cout<<bd<<endl;
        cout << bd.count()<<endl;
    }
}
