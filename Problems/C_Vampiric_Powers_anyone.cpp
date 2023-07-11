#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int N = 10;
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


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    Trie t;
    int xr = 0;
    int ans = 0;
    t.insert(0);
    for(int i = 0; i<n; i++){
        xr ^= a[i];
        ans = max(ans,t.query(xr));
        t.insert(xr);
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}