#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int k, vector<int> &b, vector<int> &c, vector<vector<int>> &mp){
    if(i==b.size()) return 0;
    if(mp[i][k]!=-1) return mp[i][k];
    int ans = dp(i+1,k,b,c,mp);
    int w = log2(b[i]);
    w+= __builtin_popcountll(b[i]-pow(2,w));
    if(w<=k) ans = max(ans, c[i]+dp(i+1,k-w,b,c,mp));
    return mp[i][k] = ans;
}


void solve(){
    int n,k; cin>>n>>k;
    vector<int> b(n);
    vector<int> c(n);
    for(int i = 0; i<n; i++) cin>>b[i];
    for(int i = 0; i<n; i++) cin>>c[i];
    vector<vector<int>> mp(n+1,vector<int>(k+1, -1));
    int ans = dp(0,k,b,c,mp);
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