#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int ans = 0;

void dfs(int node, vector<vector<int>>& adj, vector<pair<int,int>>& range, vector<int>& temp){
    if(adj.size()==0){
        temp[node] = range[node].second;
        ans++;
        return;
    }
    int gg = 0;
    for(auto child : adj[node]){
        dfs(child,adj,range,temp);
        gg += temp[child];
    }
    if(gg<range[node].first){
        ans++;
        temp[node] = range[node].second;
    }
    else{
        temp[node] = min(range[node].second,gg);
    }
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++){
        int x; cin>>x;
        adj[x].push_back(i);
    }
    vector<pair<int,int>> range(n+1);
    for(int i=1;i<=n;i++){
        cin>>range[i].first>>range[i].second;
    }
    vector<int> temp(n+1,0);
    dfs(1,adj,range,temp);
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        ans = 0;
        solve();
    }
    return 0;
}