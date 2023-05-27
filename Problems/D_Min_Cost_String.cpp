#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> nxt(k);
    string ans;
    for(int i=0;i<k;i++){
        nxt[i] = i;
    }
    ans.push_back('a');
    while(ans.size()<n){
        int x = (int)(ans[ans.size()-1]-'a');
        char c = nxt[x]+'a';
        ans.push_back(c);
        nxt[x] = (nxt[x]+1)%k;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}