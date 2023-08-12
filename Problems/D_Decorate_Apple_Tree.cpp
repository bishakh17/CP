#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void dfs(int node, vector<vector<int>> &adj, vector<int> &temp){
    if(adj[node].size()==0){
        temp[node]=1;
        return;
    }
    for(auto child: adj[node]){
        dfs(child,adj,temp);
        temp[node]+=temp[child];
    }
}

void solve(){
    int n; cin>>n;
    vector<int> p(n+1,0);
    for(int i=2;i<=n;i++) cin>>p[i];
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++) adj[p[i]].push_back(i);
    vector<int> temp(n+1);
    dfs(1,adj,temp);
    sort(temp.begin(),temp.end());
    for(int i = 1; i<=n; i++){
        cout<<temp[i]<<" ";
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