#include<bits/stdc++.h>
using namespace std;
bool divby4(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n % 10);
        n /= 10;
    }

    if(sum % 4 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;
    while(1)
    {
        if(divby4(n))
        {
            cout<<n<<endl;
            return 0;
        }

        n++;
    }

    return 0;
}
