#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int color = 1;

void dfs(int node, int parent, vector<vector<int>>& adj, vector<int>& ans){
    int k = 1; 

    for(auto child: adj[node]){
        if(child != parent){
            while(k == ans[node] or k == ans[parent]) k++;
            ans[child] = k;
            color = max(color, k);
            k++;
            dfs(child, node, adj, ans);
        }
    }
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans(n+1,-1);
    ans[1] = 1;
    dfs(1,0,adj,ans);
    cout(color);
    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}