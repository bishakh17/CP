#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, int parent, vector<vector<pair<int,int>>> &adj, vector<int> &a, vector<int> &time, int &ans){
    if(time[node]!=-1) return;
    if(a[node]>a[parent]) time[node] = time[parent];
    else time[node] = time[parent] + 1;
    ans = max(ans, time[node]);
    for(auto child : adj[node]){
        if(child.first!=parent){
            dfs(child.first,node,adj,a,time,ans);
        }
    }
}
void find(int node, int parent, vector<vector<pair<int,int>>> &adj, vector<int> &a){
    for(auto child : adj[node]){
        if(child.first!=parent){
            a[child.first] = child.second;
            find(child.first,node,adj,a);
        }
    }
}


void solve(){
    int n; cin>>n;
    vector<int> a(n+1,-1);
    a[1] = 0;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i = 1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }
    find(1,0,adj,a);
    int ans = 1;
    vector<int> time(n+1,-1);
    time[0]=1;
    dfs(1,0,adj,a,time,ans);
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