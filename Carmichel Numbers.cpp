#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int clist[]= { 561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};
    int n;
    while(scanf("%d",&n) && n)
    {
        for(int i=0; i<15; i++)
        {
            if(clist[i]==n)
            {
                printf("The number %d is a Carmichael number.\n", n);
                break;
            }
            else if(i==14)
            {
                printf("%d is normal.\n",n);
                break;
            }
        }

    }
}
