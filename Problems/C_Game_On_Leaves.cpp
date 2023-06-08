#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x; cin>>n>>x;
    vector<int> deg(n+1,0);
    for(int i = 0; i<n-1; i++){
        int u,v; cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
    if(deg[x]<=1){cout("Ayush"); return;}   
    int ans = n-2;
    if(ans%2==0) cout<<"Ayush";
    else cout<<"Ashish";
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