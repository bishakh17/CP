#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int ans = 0;
int t = 0;

void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, int ){
    if(node==target and p!=0){
        t = 1;
        return;
    }
}
void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    vector<vector<int>> adj(n+1);
    vector<int> vis(n+1,0);
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        for(int j = 0; j<x; j++){
            int y; cin>>y;
            adj[i].push_back(y);
        }
    }
    for(int i = 0; i<k; i++){
        dfs(a[i],adj,vis,a[i],0);
        if(t!=0){
        cout(-1);
        return;
    }
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