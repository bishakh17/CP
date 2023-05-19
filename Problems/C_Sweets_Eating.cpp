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
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    vector<vector<int>> b(m);
    for(int i = 0; i<n; i++){
        b[i%m].push_back(a[i]);
        int gg = b[i%m].size();
        if(gg>1) b[i%m][gg-1]+=b[i%m][gg-2];
    }
    int ans = a[0];
    cout<<ans<<" ";
    for(int i = 1; i<n; i++){
        int idx1 = i%m;
        int idx2 = i/m;
        ans+=b[idx1][idx2];
        cout<<ans<<" ";
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