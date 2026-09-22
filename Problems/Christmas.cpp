#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> len(51,1);
void precompute_len(){
    for(int i=1;i<51;i++){
        len[i] = len[i-1]*2 + 3;
    }
}
vector<unordered_map<int,int>> dp(51);
int patty(int n, int x){
    if(n==0) return 1;
    if(dp[n].count(x)) return dp[n][x];
    int temp = len[n-1];
    int ans = 0;
    if(x>1) ans += patty(n-1, min(x-1, temp));
    if(x>1+temp) ans++;
    if(x>2+temp) ans += patty(n-1, min(x-2-temp, temp));
    return dp[n][x] = ans;
}


void solve(){
    int n, x; cin>>n>>x;
    cout(patty(n, x));
}

int32_t main(){
    fastio;
    // cin>>T;
    precompute_len();
    while(T--){
        solve();
    }
    return 0;
}