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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int idx = -1;
    for(int i = 0; i<n; i++){
        if(v[i]!=i+1) idx = i+1;
    }
    double gg = 1;
    for(int i=0;i<m;i++){
        int r; double p;
        cin>>r>>p;
        if(r>=idx) gg*=(1-p);
    }
    if(idx==-1){cout(1); return;}
    double ans = 1-gg;
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}