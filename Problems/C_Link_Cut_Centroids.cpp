#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int size(int node, int p, vector<vector<int>> &adj, vector<int> &sz){
    sz[node]= 1;
    for(auto child: adj[node]){
        if(child != p){
            sz[node] += size(child, node, adj, sz);
        }
    }
    return sz[node];
}
void centroid(int node, vector<vector<int>> &adj, vector<int> &sz, vector<int> &centroids){
    int n = sz[node];
    int t = 1;
    for(auto child: adj[node]){
        if(sz[child] > n/2){
            sz[node] = n-sz[child];
            sz[child] = n;
            t = 0;
            centroid(child, adj, sz, centroids);
        }
        else if(n%2==0 and sz[child]==n/2){
            centroids.push_back(node);
            centroids.push_back(child);
            return;
        }
    }
    if(t) centroids.push_back(node);
}


void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> sz(n+1, 0);
    size(1, 0, adj, sz);
    vector<int> centroids;
    centroid(1,adj,sz,centroids);
    if(centroids.size()==1){
        cout<<1<<" "<<adj[1][0]<<endl;
        cout<<1<<" "<<adj[1][0]<<endl;
    }
    else{
        int u = centroids[0];
        int v = centroids[1];
        for(auto child: adj[u]){
            if(child != v){
                cout<<u<<" "<<child<<endl;
                cout<<v<<" "<<child<<endl;
                break;
            }
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}