#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;
int  modulo;
bool cmp(int a, int b)
{
    if(a%modulo != b%modulo)
       return a%modulo < b%modulo;
    else
    {
        if(abs(a)%2 == 0 && abs(b)%2 == 0)
          return a<b;
        else if(abs(a)%2 != 0 && abs(b)%2 != 0)
                return a>b;
        else if(abs(a)%2 != 0)
                return true;
        else
            return false;
    }
}

int main()
{
int number, data;
while(scanf("%d %d", &number, &modulo))
{
    printf("%d %d\n", number, modulo);
    if(!number && !modulo)
       break;
    vector<int> vec;
    for(int x=1; x<=number; x++)
    {
        scanf("%d", &data);
        vec.push_back(data);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(int y=0; y<vec.size(); y++)
        printf("%d\n", vec[y]);
        cout<<"0 0"<<endl;
}
return 0;
}
