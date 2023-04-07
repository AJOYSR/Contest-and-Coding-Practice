#include<bits/stdc++.h>
#define maxn 1000
using namespace std;
/*
Relative Frequency accordingly
https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/Huffman.html
*/
int relative_frequency[maxn]= {43,10,23,17,57,9,12,15,38,1,5,28,15,34,36,16,1,38,29,35,18,5,6,1,9,1};
map<string, char> mp;
map<char, string> pm;
struct NODE
{
    char a;
    int  sum, leftlink, rightlink;
    NODE(char aa, int ssum)
    {
        a = aa;
        sum =ssum, leftlink = -1, rightlink =-1;
    }
    NODE()
    {
        a = '?';
        sum =0, leftlink =-1, rightlink =-1;
    }
    NODE(int ssum, int leftlinkk, int rightlinkk)
    {
        leftlink= leftlinkk, rightlink = rightlinkk, sum = ssum;
        a = '?';
    }

    bool operator ()(NODE a, NODE b)
    {
        return (a.sum>b.sum);
    }
};

priority_queue<NODE, vector<NODE>, NODE> q;
vector<NODE> huflist;


void dfs(int node, string s)
{
    if(huflist[node].a!='?')
    {
        mp[s] = huflist[node].a;
        pm[huflist[node].a] = s;
        return ;
    }
    if(huflist[node].leftlink!=-1) dfs(huflist[node].leftlink, s+"0");
    if(huflist[node].rightlink!=-1) dfs(huflist[node].rightlink, s+"1");
}
int  Huffman()
{
    for(int i= 'A'; i<='Z'; i++)
    {
        q.push(*(new NODE((char)i,  relative_frequency[i])));
    }
    int id =0;

    while(q.size()>=2)
    {
        NODE a, b;
        a = q.top();
        q.pop();
        b= q.top();
        q.pop();
        huflist.push_back(a);
        huflist.push_back(b);
        q.push(*(new NODE(a.sum+b.sum, id, id+1)));
        id+=2;


    }
    huflist.push_back(q.top());

    return id;
}
void build()
{
    int r = Huffman();
    dfs(r, "");
}
int main()
{
    for(int i= 'A'; i<='Z'; i++) relative_frequency[i] = relative_frequency[i-'A'];
    string s;
    fstream input;
    input.open("input.txt", ios::in);
    input>> s;
    input.close();
    build();
    fstream output;
    output.open("output.txt", ios::out);

    for(int i= 0; i< s.length(); i++) output<< pm[s[i]];
    output.close();
    output.open("output.txt", ios::in);
    fstream decode;
    decode.open("decode.txt", ios::out);
    char r;
    string sl;
    while(output >> r)
    {
        sl+=r;
        if(mp.count(sl))
        {
            decode << mp[sl];
            sl.clear();
        }
    }
    output.close();
    decode.close();
}

