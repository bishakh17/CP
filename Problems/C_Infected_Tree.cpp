#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int ans = 0;
void dfs(int node, vector<vector<int>> &adj, int p, vector<int> &sz, vector<int> &saved){
    sz[node] = 1;
    int sum = 0;
    for(auto child: adj[node]){
        if(child!=p){
            dfs(child,adj,node,sz,saved); 
            sz[node]+=sz[child];
            sum+=saved[child];
        }
    }
    for(auto child: adj[node]){
        if(child!=p){
            saved[node] = max(saved[node],sum-saved[child]+sz[child]-1);
        }
    }
}


void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> sz(n+1,-1);
    vector<int> saved(n+1,0);
    dfs(1,adj,0,sz,saved);
    int ans = saved[1];
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