#include<iostream>
using namespace std;

class TrieNode{
    public:
    TrieNode *child[26];
    bool isEndOfWord;
    TrieNode(){
        isEndOfWord=false;
        for(int i=0;i<26;i++)
        child[i]=NULL;
    }
};

class Trie{
    public:
    TrieNode *root;
    Trie(){
        root=new TrieNode();
    }

    // insert
    void insert(string word){
        TrieNode *node=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            if(node->child[index]==NULL){
                node->child[index]=new TrieNode();
                node=node->child[index];
            }
            else{
                node=node->child[index];
            }
            node->isEndOfWord=true;
        }
    }

    // search
    bool search(string word){
        TrieNode *node=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            if(node->child[index]==NULL){
                return false;
            }
            else{
                node=node->child[index];
            }
        }
        return node->isEndOfWord;
    }
};


int main(){
    Trie *tree=new Trie();
    tree->insert("apple");
    tree->insert("appex");
    tree->insert("almond");
    tree->insert("banana");
    tree->insert("band");
    tree->insert("orange");
    tree->insert("oracle");

    cout<<tree->search("app");
    return 0;
}