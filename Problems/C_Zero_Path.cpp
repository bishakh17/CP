#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int dp1(int i, int j, vector<vector<int>>& a, vector<vector<int>>& mp){
    int n = a.size();
    int m = a[0].size();
    if(i==n-1 and j==m-1) return a[i][j];
    if(mp[i][j]!=INT_MAX) return mp[i][j];
    int ans = INT_MAX;
    if(i<n-1) ans = min(ans,a[i][j]+dp1(i+1,j,a,mp));
    if(j<m-1) ans = min(ans,a[i][j]+dp1(i,j+1,a,mp));
    return mp[i][j] = ans;
}
int dp2(int i, int j, vector<vector<int>>& a, vector<vector<int>>& mp){
    int n = a.size();
    int m = a[0].size();
    if(i==n-1 and j==m-1) return a[i][j];
    if(mp[i][j]!=INT_MAX) return mp[i][j];
    int ans = INT_MIN;
    if(i<n-1) ans = max(ans,a[i][j]+dp2(i+1,j,a,mp));
    if(j<m-1) ans = max(ans,a[i][j]+dp2(i,j+1,a,mp));
    return mp[i][j] = ans;
}

void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }
    if((m+n-1)%2){
        cout("NO");
        return;
    }
    vector<vector<int>> mp1(n,vector<int>(m,INT_MAX));
    vector<vector<int>> mp2(n,vector<int>(m,INT_MAX));
    int temp1 = dp1(0,0,a,mp1);
    int temp2 = dp2(0,0,a,mp2);
    if(temp2>=0 and temp1<=0){
        cout("YES");
        return;
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}