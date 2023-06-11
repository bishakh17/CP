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
    vector<int> v(n+1);
    int sum = 0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum += v[i];
    }
    vector<vector<int>> adj(n+1);
    vector<int> deg(n+1,0);
    for(int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    priority_queue<pair<int,int>> pq;
    for(int i = 1; i <= n; i++){
        if(deg[i] > 1){
            pq.push({v[i],i});
        }
    }
    cout<<sum<<" ";
    for(int i = 2; i<=n-1; i++){
        auto curr = pq.top();
        sum+=curr.first;
        cout<<sum<<" ";
        deg[curr.second]--;
        if(deg[curr.second] == 1){
            pq.pop();
        }
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}