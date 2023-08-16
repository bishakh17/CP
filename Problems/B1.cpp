#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int k, vector<int> &a, vector<int> &b, vector<vector<int>> &mp){
    int n = a.size();
    if(k<=0){
        return 0;
    }
    if(i==n) return INT_MAX;
    if(mp[i][k]!=-1) return mp[i][k];
    int ans = dp(i+1,k,a,b,mp);
    ans = min(ans,b[i]+dp(i+1,k-a[i],a,b,mp));
    return mp[i][k] = ans;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i = 0; i<=n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<=n; i++){
        cin>>b[i];
    }
    vector<vector<int>> mp(n+1,vector<int>(n+1,-1));
    int ans = dp(0,n,a,b,mp);
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