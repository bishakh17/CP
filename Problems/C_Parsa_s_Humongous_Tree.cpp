#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, int k, int parent, vector<vector<int>> &adj, vector<vector<int>> &v, vector<vector<int>> &mp){
    if(mp[node][k]!=0) return;
    for(auto child: adj[node]){
        if(child != parent){
            dfs(child,0,node,adj,v,mp);
            dfs(child,1,node,adj,v,mp);
            int temp = max(abs(v[node][k] - v[child][0]) + mp[child][0], abs(v[node][k] - v[child][1]) + mp[child][1]);
            mp[node][k] += temp;
        }
    }
}


void solve(){
    int n; cin>>n;
    vector<vector<int>> v(n+1, vector<int>(2));
    for(int i = 1; i<=n; i++){
        cin>>v[i][0];
        cin>>v[i][1];
    }
    vector<vector<int>> adj(n+1);
    for(int i = 0; i<n-1; i++){
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> mp(n+1, vector<int>(2,0));
    dfs(1,0,0,adj,v,mp);
    dfs(1,1,0,adj,v,mp);
    int ans = max(mp[1][0], mp[1][1]);
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