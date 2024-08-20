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

    // Delete
    void deleteWord(string word){
        deleteNode(root, word, 0);
    }
    
    bool deleteNode(TrieNode *node,string word,int depth){
        if(depth==word.size()){
            if(node->isEndOfWord==0){
                return false;
            }
            else{
                node->isEndOfWord=0;
                // child exist or not;
                return isEmpty(node);
            }
        }
        // char exist or not
        int index=word[depth]-'a';
        if(node->child[index]==NULL){
            return false;
        }
        else{
            bool shouldDeleteCurrentNode=deleteNode(node->child[index],word,depth+1);
            if(shouldDeleteCurrentNode){
                delete node->child[index];
                node->child[index]=NULL;
            }
            
            return !node->isEndOfWord && isEmpty(node);
        }
    }

    bool isEmpty(TrieNode *node){
        for(int i=0;i<26;i++){
            if(node->child[i]!=NULL){
                return false;
            }
        }
        return true;
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
    tree->deleteWord("apple");
    cout<<tree->search("app");
    return 0;
}