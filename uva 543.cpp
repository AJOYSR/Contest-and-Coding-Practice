#include <bits/stdc++.h>
using namespace std;
#define N 1000005
bool prime[N];
void findprime ()
{

	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=N; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*p; i<=N; i += p)
				prime[i] = false;
		}
	}
}

int main()
{
	int n,i;
	findprime();
	while(cin>>n)
    {
	if(n==0) return 0;
	int temp = n;
	int count = 0;
	for(i=0;i<=temp/2;i++)
    {
         for(int j=0;j<=i;j++)
         {
            if(prime[i]+prime[j]==n)
            {
            count++;
            }

         }
    }
    cout<<count<<endl;
    }
	return 0;
}


