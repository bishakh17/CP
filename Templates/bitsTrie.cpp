#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int N = 32;
class TrieNode{
    private:
        TrieNode* children[2];
        bool isTerminal;

        TrieNode(){
            for(int i=0;i<2;i++){
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
            root = new TrieNode();
        }
        void insert(int num){
            TrieNode* temp = root;
            for(int i = N-1; i>=0; i--){
                bool index = (1<<i)&num;
                if(!temp->children[index]) temp->children[index] = new TrieNode();
                temp = temp->children[index];
            }
            temp->isTerminal = true;
        }
        int query(int num){
            TrieNode* temp = root;
            int ans = 0;
            for(int i = N-1; i>=0; i--){
                bool index = (1<<i)&num;
                if(temp->children[index^1]){
                    ans = ans|(1<<i);
                    temp = temp->children[index^1];
                }
                else temp = temp->children[index];
            }
            return ans;
        }
};