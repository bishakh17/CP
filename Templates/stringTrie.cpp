#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    private:
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char data){
            for(int i=0;i<26;i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
        friend class Trie;
};

class Trie{
    private:
        TrieNode* root;
    public:
        Trie(){
            root = new TrieNode('\0');
        }
        void insert(string word){
            TrieNode* temp = root;
            for(int i=0;i<word.size();i++){
                int index = word[i] - 'a';
                if(!temp->children[index]) temp->children[index] = new TrieNode(word[i]);
                temp = temp->children[index];
            }
            temp->isTerminal = true;
        }
        bool search(string word){
            TrieNode* temp = root;
            for(int i=0;i<word.size();i++){
                int index = word[i] - 'a';
                if(temp->children[index]) temp = temp->children[index];
                else return false;
            }
            return temp->isTerminal;
        }
        bool startsWith(string prefix){
            TrieNode* temp = root;
            for(int i=0;i<prefix.size();i++){
                int index = prefix[i] - 'a';
                if(temp->children[index]) temp = temp->children[index];
                else return false;
            }
            return true;
        }
};
