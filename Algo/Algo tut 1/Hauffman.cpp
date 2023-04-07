#include <bits/stdc++.h>
using namespace std;

struct Tree
{
    char ch;
    int fre;
    Tree *bam, *dan;
};

Tree* MakeTree(char ch, int fre, Tree* bam, Tree* dan)
{
    Tree* tree = new Tree();

    tree->ch = ch;
    tree->fre = fre;
    tree->dan = bam;
    tree->dan = dan;
    return tree;
}

class cmp
{
    public:
    bool operator()(Tree* l, Tree* r)
    {
        return l->fre > r->fre;
    }
};

void encode(Tree* root, string str,unordered_map<char, string> &HuffmanCode)
{
    if (root == nullptr)
        return;

    if (!root->bam && !root->dan)
    {
        HuffmanCode[root->ch] = str;
    }

    encode(root->bam, str + "0", HuffmanCode);
    encode(root->dan, str + "1", HuffmanCode);
}

void decode(Tree* root, int &idx, string str)
{
    if (root == nullptr)
    {
        return;
    }

    if (!root->bam && !root->dan)
    {
        cout << root->ch;
        return;
    }

    idx++;

    if (str[idx] =='0')
        decode(root->bam, idx, str);
    else
        decode(root->dan, idx, str);
}

void buildHuffmanTree(string Givenstr)
{

    unordered_map<char, int> freq;
    for (char ch: Givenstr)
    {
        freq[ch]++;
    }
    priority_queue<Tree*, vector<Tree*>, cmp> PQ;
    for (auto pair: freq)
    {
        PQ.push(MakeTree(pair.first, pair.second, nullptr, nullptr));
    }
    while (PQ.size() != 1)
    {

        Tree *left = PQ.top();
        PQ.pop();
        Tree *right = PQ.top();
        PQ.pop();

        int sum = left->fre + right->fre;
        PQ.push(MakeTree('\0', sum, left, right));
    }


    Tree* root = PQ.top();
    unordered_map<char, string> HuffmanCode;

    encode(root, "", HuffmanCode);

    cout << "Huffman Codes are :\n" << '\n';
    for (auto pair: HuffmanCode)
    {
        cout << pair.first << " " << pair.second << '\n';
    }

    cout << "\nOriginal string was :\n" << Givenstr << '\n';

    string str = "";
    for (char ch: Givenstr)
    {
        str += HuffmanCode[ch];
    }

    cout << "\nEncoded string is :\n" << str << '\n';

    int index = -1;
    cout << "\nDecoded string is: \n";
    while (index < (int)str.size() - 2)
    {
        decode(root, index, str);
    }
}

int main()
{
    string text = "Huffman coding is a data compression algorithm.";

    buildHuffmanTree(text);

    return 0;
}

