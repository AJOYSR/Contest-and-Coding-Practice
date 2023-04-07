#include <bits/stdc++.h>
#include <bitset>
using namespace std;
int main()
{
    string binaryString = "101";
    int value = 0;
    int indexCounter = 0;
    for(int i=binaryString.length()-1; i>=0; i--)
    {

        if(binaryString[i]=='1')
        {
            value += pow(2, indexCounter);
        }
        indexCounter++;
    }
    cout<<value;
}
