#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<vector<int>> adj(n+1);
    vector<int> deg(n+1,0);
    for(int i=0;i<n-1;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(deg[i]<=1){
            q.push(i);
        }
    }
    q.push(-1);
    unordered_set<int> deleted;
    while(k-- and !q.empty()){
        while(q.front()!=-1){
            int curr = q.front();
            q.pop();
            deleted.insert(curr);
            for(auto x: adj[curr]){
                if(deleted.find(x)==deleted.end()){
                    deg[x]--;
                    if(deg[x]==1) q.push(x);
                }
            }
        }
        int curr = q.front();
        q.pop();
        if(!q.empty()) q.push(-1);
    }
    cout<<n-deleted.size()<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}