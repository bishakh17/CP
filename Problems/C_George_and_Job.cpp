#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int m, int k, vector<int>& pre, vector<vector<int>>& temp){
    int n = pre.size()-1;
    if(i>=n-m+1) return 0;
    if(k==0) return 0;
    if(temp[i][k]!=-1) return temp[i][k];
    int ans = max(dp(i+1,m,k,pre,temp),pre[i+m]-pre[i]+dp(i+m,m,k-1,pre,temp));
    return temp[i][k] = ans;

}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<int> pre(n+1,0);
    for(int i = 1; i<n+1; i++){
        pre[i] = pre[i-1]+nums[i-1];
    }
    vector<vector<int>> temp(n+1,vector<int>(k+1,-1));
    cout(dp(0,m,k,pre,temp));
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}