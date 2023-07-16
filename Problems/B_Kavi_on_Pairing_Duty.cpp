#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;
int modAdd(int a, int b, int m=M){return ((a%m)+(b%m))%m;}
void solve(){
    int n; cin>>n;
    vector<int> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n; j+=i){
            dp[j]++;
        }
    }
    int sum = 0;
    for(int i=1; i<=n; i++){
        dp[i] = modAdd(sum,dp[i]);
        sum = modAdd(sum, dp[i]);
    }
    cout<<dp[n]<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}