#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26];
    bool flag = false;
    int freq = 0;
    Node()
    {
        for (int i = 0; i < 26; i++)
            links[i] = NULL;
        flag = false;
        freq = 0;
    }
    bool containsKey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    void setEnd()
    {
        flag = true;
    }
    bool isEnd()
    {
        return flag;
    }
    // void insert() {}
    // bool startsWithPrefix() {}
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(string word, int a)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->containsKey(word[i]))
            {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
        node->freq += a;
    }
    bool startsWithPrefix(string prefix)
    {
        Node *node = root;
        for (int i = 0; i < prefix.length(); i++)
        {
            if (!node->containsKey(prefix[i]))
                return false;
            node = node->get(prefix[i]);
        }
         return true;
    }
};

int main()
{
    Trie trie;
    trie.insert("machine", 10);
    trie.insert("machine", 5);
    cout << trie.startsWithPrefix("mach") << endl; // 1 (true)
}
