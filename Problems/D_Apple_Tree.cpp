#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, int p, vector<vector<int>>& adj, vector<int>& leaves){
    int t = 0;
    for(auto child: adj[node]){
        if(child==p) continue;
        t = 1;
        dfs(child,node,adj,leaves);
        leaves[node]+=leaves[child];
    }
    if(t==0) leaves[node] = 1;
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> leaves(n+1,0);
    dfs(1,0,adj,leaves);
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        int ans = leaves[x]*leaves[y];
        cout<<ans<<endl;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}