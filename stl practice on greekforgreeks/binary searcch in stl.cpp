#include<bits/stdc++.h>
using namespace std;
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << " ";
}

int main()
{
    int ara[]={1,2,5,8,5,9,3,9,2,5,8,7};
    int asize=sizeof(ara)/sizeof(ara[0]);
    sort(ara, ara+asize);
   show(ara, asize);
   cout<<endl;
   ///Ekhon try kore dekhbo je pawa zai kina
  if( binary_search(ara,ara+asize,2))
    cout<<"Found in the array\n";
  else
    cout<<" Not Found!\n";

   ///Onno ektao try kori
   if(binary_search(ara,ara+asize,10))
    cout<<"Found in the array\n";
   else
    cout<<"Not found!\n";
}
