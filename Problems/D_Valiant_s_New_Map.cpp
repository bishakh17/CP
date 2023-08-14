#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int j, int mid, vector<vector<int>>& a, vector<vector<int>>& mp){
    if(i<0 or j<0 or i>=a.size() or j>=a[0].size()){
        return 0;
    }
    if(mp[i][j]!=-1){
        return mp[i][j];
    }
    int ans = 0;
    if(a[i][j]>=mid){
        ans = 1 + min(dp(i+1,j,mid,a,mp),min(dp(i,j+1,mid,a,mp),dp(i+1,j+1,mid,a,mp)));
    }
    return mp[i][j] = ans;
}
void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int low = 1; int high = n;
    int ans = 1;
    while(low<=high){
        int mid = (low+high)/2;
        vector<vector<int>> mp(n,vector<int>(m,-1));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                dp(i,j,mid,a,mp);
                if(mp[i][j]>=mid){
                    ans = mid; 
                    low = mid+1;
                }
            }
        }
        if(ans!=mid){
            high = mid-1;
        }
    }
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