#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int minfloor(int k, int i, vector<int>& a, vector<vector<int>>& dp){
    int n = a.size();
    if(i>=n-1) return 0;
    if(dp[i][k]!=INT_MAX) return dp[i][k];
    int temp = max(a[i+1],a[i-1]) - a[i] + 1;
    if(temp<0) temp = 0;
    int ans = temp+minfloor(k,i+2,a,dp);
    if(k==1){
        ans = min(ans,minfloor(0,i+1,a,dp));
    }
    return dp[i][k] = ans;
}


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int k = 0;
    if(n%2==0) k = 1;
    vector<vector<int>> dp(n,vector<int>(2,INT_MAX));
    int ans = minfloor(k,1,a,dp);
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