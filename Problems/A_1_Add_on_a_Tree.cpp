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
    vector<int> deg(n+1,0);
    for(int i=0;i<n-1;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    for(int i=1;i<=n;i++){
        if(deg[i]==1) continue;
        if(deg[i]<3){cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}