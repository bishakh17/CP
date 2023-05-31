#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, int parent, vector<vector<int>> &adj, vector<int> &dist, vector<int> &size){
    size[node] = 1;
    for(auto it: adj[node]){
        if(it != parent){
            dist[it] = dist[node] + 1;
            dfs(it,node,adj,dist,size);
            size[node] += size[it];
        }
    }
}

void solve(){
    int n,k; cin>>n>>k;
    vector<vector<int>> adj(n+1);
    for(int i = 1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> size(n+1,0);
    vector<int> dist(n+1,-1);
    dist[1] = 0;
    dfs(1,0,adj,dist,size);
    vector<int> ans(n+1);
    ans[0] = INT64_MIN;
    for(int i = 1; i<=n; i++){
        ans[i] = dist[i] - size[i] + 1;
    }
    sort(ans.begin(),ans.end(),greater<int>());
    int res = 0;
    for(int i = 0; i<k; i++){
        res += ans[i];
    }
    cout<<res<<endl;
 }

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}