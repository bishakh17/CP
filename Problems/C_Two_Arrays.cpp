#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int M = 1e9+7;
int modAdd(int a, int b){
    return ((a%M)+(b%M))%M;
}
int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}
int T = 1;
int m;
int dp(int i, int a_prev, int n, vector<vector<int>> &mp){
    if(i==2*m) return 1;
    if(mp[i][a_prev]!=-1) return mp[i][a_prev];
    int ans = 0;
    for(int p = a_prev; p<=n; p++){
        ans = modAdd(ans,dp(i+1,p,n,mp));
    }
    return mp[i][a_prev] = ans; 
}


void solve(){
    int n; cin>>n>>m;
    vector<vector<int>> mp(2*m+1,vector<int>(n+1,-1));
    int ans = dp(0,1,n,mp);
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}