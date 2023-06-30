#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dfs(int i, int j, vector<string>& a, vector<vector<int>>& mp){
    int n = a[0].size();
    if(i>1 or i<0) return 0;
    if(a[i][j]=='1') return 0;
    if(j==n-1) return 1;
    if(mp[i][j]!=-1) return mp[i][j];
    int ans = dfs(i,j+1,a,mp);
    ans = ans or dfs(i+1,j+1,a,mp);
    ans = ans or dfs(i-1,j+1,a,mp);
    return ans = mp[i][j] = ans;
}

void solve(){
    int n; cin>>n;
    vector<string> a(2);
    for(int i=0;i<2;i++) cin>>a[i];
    vector<vector<int>> mp(2,vector<int>(n,-1));
    int ans = dfs(0,0,a,mp);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}