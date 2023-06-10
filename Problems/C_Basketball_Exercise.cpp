#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int prev, vector<int>& a, vector<int>& b, vector<vector<int>>& mp){
    int n = a.size();
    if(i==n) return 0;
    if(mp[i][prev]!=-1) return mp[i][prev];
    int ans = dp(i+1,0,a,b,mp);
    if(prev!=2) ans = max(ans, b[i]+dp(i+1,2,a,b,mp));
    if(prev!=1) ans = max(ans, a[i]+dp(i+1,1,a,b,mp));
    return mp[i][prev] = ans;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0; i<n; i++) cin>>b[i];
    vector<vector<int>> mp(n, vector<int>(3,-1));
    int ans = dp(0,0,a,b,mp);
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