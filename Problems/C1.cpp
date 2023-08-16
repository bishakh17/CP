#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int j, int k, vector<int> &a, vector<int> &b, vector<int> &temp, vector<vector<vector<int>>> &mp){
    int m = a.size();
    if(k==temp.size()){
        int ans = 0;
        for(int t = i; t<m; t++){
            ans+=a[t];
        }
        for(int t = j; t<m; t++){
            ans+=b[t];
        }
        return mp[i][j][k] = ans;
    }
    if(mp[i][j][k]!=-1) return mp[i][j][k];
    int ans = 0;
    if(a[i]==b[j]){
        ans = max(ans, 1+dp(i+1,j+1,0,a,b,temp,mp));
    }
    else{
        ans = max(ans, dp(i+1,j,0,a,b,temp,mp));
        ans = max(ans, dp(i,j+1,0,a,b,temp,mp));
        if(k<temp.size() && temp[k]>0){
            ans = max(ans, 1+dp(i+1,j+1,k+1,a,b,temp,mp));
        }
    }
    return mp[i][j][k] = ans;
}

void solve(){
    int m; cin>>m;
    vector<int> a(m);
    vector<int> b(m);
    for(int i = 0; i<m; i++) cin>>a[i];
    for(int i = 0; i<m; i++) cin>>b[i];
    int p; cin>>p;
    vector<pair<int,int>> v(p);
    for(int i = 0; i<p; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());
    vector<int> temp;
    if(v[0].first)temp.push_back(v[0].first);
    for(int i = 1; i<p; i++){
        int gg = v[i].first - v[i-1].second;
        if(gg>0) temp.push_back(gg);
    }
    vector<vector<vector<int>>> mp(m+1,vector<vector<int>>(m+1,vector<int>(temp.size()+1,-1)));
    int ans = dp(0,0,0,a,b,temp,mp);
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