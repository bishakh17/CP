#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int helper(vector<vector<int>>& dp, vector<int>& temp, int i, int t){
    if(i>= temp.size()) return 0;
    if(dp[i][t] != -1) return dp[i][t];
    int ans = temp[i];
    if(t>0) ans += max(helper(dp, temp, i+1, t-1), helper(dp, temp, i+2, t));
    else ans += helper(dp, temp, i+2, t);
    return dp[i][t] = ans;
}


void solve(){
    string s; cin>>s;
    vector<int> temp;
    int n = s.size();
    char curr = 'a';
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]!=curr) {
            temp.push_back(cnt);
            cnt = 0;
            curr = s[i];
        }
        cnt++;
    }
    temp.push_back(cnt);
    if(curr != 'a') {
        temp.push_back(0);
    }
    vector<vector<int>> dp(temp.size(), vector<int>(3, -1));
    cout(helper(dp, temp, 0, 2));
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}