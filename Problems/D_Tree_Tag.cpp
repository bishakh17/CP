#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,a,b,da,db; cin>>n>>a>>b>>da>>db;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(db<=2*da){
        cout<<"Alice"<<endl;
        return;
    }
    vector<int> dist(n+1, -1);
    queue<int> q;
    q.push(a);
    dist[a] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if(dist[v]==-1){
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
    if(dist[b]<=da){
        cout<<"Alice"<<endl;
        return;
    }
    int max_dist = 0;
    int max_node = 0;
    for(int i=1; i<=n; i++){
        if(dist[i]>max_dist){
            max_dist = dist[i];
            max_node = i;
        }
    }
    dist.assign(n+1, -1);
    q.push(max_node);
    dist[max_node] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if(dist[v]==-1){
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
    max_dist = 0;
    for(int i=1; i<=n; i++){
        if(dist[i]>max_dist){
            max_dist = dist[i];
            max_node = i;
        }
    }
    if(max_dist<=2*da){
        cout<<"Alice"<<endl;
        return;
    }
    cout<<"Bob"<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}