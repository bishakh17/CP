#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> strong(n+1,0);
    int count = n;
    for(int i = 0; i<m; i++){
        int u,v; cin>>u>>v;
        if(u>v){
            if(strong[v]==0) count--;
            strong[v]++;
        }
        else{
            if(strong[u]==0) count--;
            strong[u]++;
        }
    }
    int q; cin>>q;
    while(q--){
        int t; cin>>t;
        if(t==1){
            int u,v; cin>>u>>v;
            if(u>v){
                if(strong[v]==0) count--;
                strong[v]++;
            }
            else{
                if(strong[u]==0) count--;
                strong[u]++;
            }
        }
        else if(t==2){
            int u,v; cin>>u>>v;
            if(u>v){
                strong[v]--;
                if(strong[v]==0) count++;
            }
            else{
                strong[u]--;
                if(strong[u]==0) count++;
            }
        }
        else{
            cout<<count<<endl;
        }
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}