#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+1);
    vector<int> in(n+1, 0);
    queue<int> q;
    vector<int> vis(n+1,-1);
    for(int i=1; i<=n; i++){
        int x;  cin>>x;
        in[i] = x; 
        if(x == 0){
            q.push(i);
            vis[i] = 1;
        }
        for(int j = 1; j<=x; j++){
            int v; cin>>v;
            adj[v].push_back(i);
        }
    }
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto x: adj[curr]){
            in[x]--;
            if(in[x] == 0){
                q.push(x);
            }
            if(x>curr) vis[x] = max(vis[x], vis[curr]);
            else vis[x] = max(vis[x], vis[curr]+1);
        }
    }
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = max(ans, vis[i]);
        if(in[i] != 0){
            cout<<-1<<endl;
            return;
        }
    }
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