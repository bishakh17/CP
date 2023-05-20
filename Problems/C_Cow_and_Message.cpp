#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int ans = 0;
vector<int> one(26,0);
vector<vector<int>> two(26,vector<int>(26,0));
void dp(int i, string& s){
    int n = s.size();
    if(i==n) return;
    int c = s[i]-'a';
    for(int j = 0; j<26; j++){
        two[j][c]+=one[j];
        ans = max(ans,two[j][c]);
    }
    one[c]++;
    ans = max(ans,one[c]);
    dp(i+1,s);
}


void solve(){
    string s; cin>>s;
    dp(0,s);
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