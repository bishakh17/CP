#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, vector<vector<int>> &adj,vector<int> &a,vector<int> &ans){
    int t = a[node];
    for(auto child : adj[node]){
        if(a[child]==0) t = 0;
    }
    if(t==1) ans.push_back(node);
    for(auto child : adj[node]){
        dfs(child,adj,a,ans);
    }
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    vector<int> a(n+1);
    int root;
    for(int i=1;i<=n;i++){
        int u,v; cin>>u>>v;
        a[i] = v;
        if(u==-1){
            root = i;
            continue;
        }
        adj[u].push_back(i);
    }
    vector<int> ans;
    dfs(root,adj,a,ans);
    sort(ans.begin(),ans.end());
    if(ans.size()==0){
        cout(-1);
        return;
    }
    for(auto x:ans){
        cout<<x<<" ";
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