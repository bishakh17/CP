#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int curr_z, int z, int k, vector<int> &a, vector<vector<int>> &mp){
    int n = a.size();
    if(i==n-1) return 0;
    int curr_k = i+2*curr_z;
    if(curr_k==k) return 0;
    if(mp[i][curr_z]!=-1) return mp[i][curr_z];
    int ans = 0;
    int temp1 = 0;
    int temp2 = 0;
    if(curr_z<z and i>0){
        temp1 = a[i-1] + dp(i-1,curr_z+1,z,k,a,mp);
    }
    temp2 = a[i+1] + dp(i+1,curr_z,z,k,a,mp);
    ans = max(temp1,temp2);
    return mp[i][curr_z] = ans;
}

void solve(){
    int n,k,z; cin>>n>>k>>z;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> mp(n,vector<int>(z+1,-1));
    int ans = dp(0,0,z,k,a,mp);
    cout<<ans+a[0]<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}