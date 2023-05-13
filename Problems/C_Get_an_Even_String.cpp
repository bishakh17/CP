#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int t, string& s, vector<vector<int>>& store){
    int n = s.size();
    if(i==n and t==27) return 0;
    if(i==n) return 1e9;
    if(store[i][t]!=-1) return store[i][t];
    if(t==27){
        int c = (int)s[i] - (int)'a';
        return store[i][t] = min(dp(i+1,c,s,store), 1+dp(i+1,t,s,store));
    }
    else{
        char c = (char)(t+(int)'a');
        if(s[i]==c) return store[i][t] = dp(i+1,27,s,store);
        else return store[i][t] = 1+dp(i+1,t,s,store);
    }
}

void solve(){
    string s; cin>>s;
    int n = s.size();
    vector<vector<int>> store(n+1, vector<int>(28,-1));
    int ans = dp(0,27,s,store);
    cout<<ans<<endl;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}