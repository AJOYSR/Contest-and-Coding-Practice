// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void findprime (int n)
{
	long long int ara[1000];
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}
	int k=0;
	for (int p=2; p<=n; p++)
    {
	if (prime[p]==true)
		{
		    ara[k++]=p;
		}
    }
    sort(ara,ara+k);
    int x,y;
    int flag=0;
    for(x=0;x<k;x++)
    {
        if(flag==1)break;
       for(y=x+1;y<k;y++)
       {
           if(flag==1)break;
           if(ara[y]+ara[x]==n)
           {
               cout<<n<<" = "<<ara[x]<<" + "<<ara[y]<<endl;
               break;
               flag=1;

           }

        }

    }
}

int main()
{
	int n;

	while(cin>>n)
    {

	findprime(n);
    }
	return 0;
}

