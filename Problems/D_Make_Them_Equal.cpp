#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> temp(1e3+1,0);

void precompute(){
    for(int i = 2; i<=1e3; i++){
        int ans = INT64_MAX;
        for(int j = 1; j<i; j++){
            int x = i-j;
            if(x>j) continue;
            int gg = j/x;
            if(j/gg==x){
                ans = min(ans,temp[j]+1);
            }
        }
        temp[i] = ans;
    }
}

int dp(int i, int k, vector<int>& a, vector<int>& b, vector<vector<int>>& mp){
    int n = a.size();
    if(i==n) return 0;
    if(mp[i][k]!=-1) return mp[i][k];
    int ans = dp(i+1,k,a,b,mp);
    if(k>=temp[a[i]]){
        ans = max(ans,dp(i+1,k-temp[a[i]],a,b,mp)+b[i]);
    }
    return mp[i][k] = ans;
}

void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    if(k>=12*1e3){
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum+=b[i];
        }
        cout<<sum<<endl;
        return;
    }
    vector<vector<int>> mp(n,vector<int>(k+1,-1));
    int ans = dp(0,k,a,b,mp);
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    precompute();
    while(T--){
        solve();
    }
    return 0;
}