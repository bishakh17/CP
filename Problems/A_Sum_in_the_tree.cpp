#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, vector<vector<int>> &adj, vector<int> &a, vector<int> &ans){
    int sum = a[node];
    for(auto child: adj[node]){
        if(adj[child].size()==0){
            ans[child] = 0;
            continue;
        }
        int mini = INT64_MAX;
        for(auto grandchild: adj[child]){
            mini = min(mini, a[grandchild]);
        }
        ans[child] = mini-sum;
        a[child] = mini;
        for(auto grandchild: adj[child]){
            ans[grandchild] = a[grandchild]-a[child];
            dfs(grandchild,adj,a,ans);
        }
    }
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++){
        int x; cin>>x;
        adj[x].push_back(i);
    }
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> ans(n+1);
    ans[1] = a[1];
    dfs(1,adj,a,ans);
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=ans[i];
        if(ans[i]<0){
            cout(-1);
            return;
        }
    }
    cout<<sum<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}