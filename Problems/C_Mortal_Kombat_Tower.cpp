#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int t, vector<int> &a, vector<vector<int>> &mp){
    int n = a.size();
    if(i>=n) return 0;
    if(mp[i][t]!=-1) return mp[i][t];
    int ans = INT64_MAX;
    if(t==0){
        int cost = 0;
        if(a[i]==1) cost++;
        ans = min(ans, cost + dp(i+1,1,a,mp));
        if(i<n-1){
            if(a[i+1]==1) cost++;
            ans = min(ans, cost + dp(i+2,1,a,mp));
        }
    }
    else{
        ans = min(ans, dp(i+1,0,a,mp));
        if(i<n-1) ans = min(ans, dp(i+2,0,a,mp));
    }
    return mp[i][t] = ans;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> mp(n+1,vector<int>(2,-1));
    int ans = dp(0,0,a,mp);
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