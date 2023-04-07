#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
using namespace std;

int RF[2442] = {43,10,23,17,57,9,12,15,38,1,5,28,15,34,36,16,1,38,29,35,18,5,6,1,9,1};

map<string, char> mp;
map<char, string> mpp;
struct Tree
{
    char ch;
    int  sum, leftcld,rightcld;
    Tree(char chh, int suum)
    {
        ch = chh;
        sum = suum;
        leftcld = -1;
        rightcld =-1;
    }
    Tree()
    {
        ch = '?';
        sum =0;
        leftcld =-1;
        rightcld =-1;
    }
    Tree(int suum, int left, int right)
    {
        leftcld = left;
        rightcld = right;
        sum = suum;
        ch = '?';
    }

    bool operator ()(Tree t1, Tree t2)
    {
        return (t1.sum>t2.sum);
    }
};

priority_queue<Tree, vector<Tree>, Tree> pq;
vector<Tree> Hauffman;


void dfs(int node, string s)
{
    if(Hauffman[node].ch!='?')
    {
        mp[s] = Hauffman[node].ch;
        mpp[Hauffman[node].ch] = s;
        return ;
    }
    if(Hauffman[node].leftcld!=-1) dfs(Hauffman[node].leftcld, s+"0");
    if(Hauffman[node].rightcld!=-1) dfs(Hauffman[node].rightcld, s+"1");
}
int  Build_Hauffman()
{
    for(int i= 'A'; i<='Z'; i++)
    {
        pq.push(*(new Tree((char)i,  RF[i])));
    }
    int idx =0;

    while(pq.size()>=2)
    {
        Tree a,b;
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        Hauffman.push_back(a);
        Hauffman.push_back(b);
        pq.push(*(new Tree(a.sum+b.sum, idx, idx+1)));
        idx+=2;


    }
    Hauffman.push_back(pq.top());

    return idx;
}
void Hauffman_Function()
{
    int id = Build_Hauffman();
    dfs(id, "");
}
int main()
{
    for(int i= 'A'; i<='Z'; i++) RF[i] = RF[i-'A'];
    string s;
    fstream in;
    in.open("input.txt", ios::in);
    in >> s;
    in.close();
    Hauffman_Function();
    fstream output;
    output.open("output.txt", ios::out);

    for(int i= 0; i< s.length(); i++) output<< mpp[s[i]];
    output.close();

    output.open("output.txt", ios::in);
    fstream decode;
    decode.open("decode.txt", ios::out);
    char chr;
    string Dcode;
    while(output >> chr)
    {
        Dcode+=chr;
        if(mp.count(Dcode))
        {
            decode << mp[Dcode];
            Dcode.clear();
        }
    }
    output.close();
    decode.close();
}

