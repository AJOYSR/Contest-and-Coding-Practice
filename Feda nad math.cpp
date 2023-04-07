#include<iostream>
#include<string>
using namespace std;
#define sz size()
int main()
{
   string s;
   cin >> s;
   int a;
   if(s.sz>1)
    a = s[s.sz-1]-'0' + 10*(s[s.sz-2]-'0');
   else
    a = s[s.sz-1]-'0';
   //cout << a <<endl;
   if(a%4)
    cout << 0 <<endl;
   else
    cout << 4 <<endl;

}
