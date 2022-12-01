#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> dp(n);
    int ones = 0;

    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]) ones++;
    }
    if(ones==n){
        cout(n-1);
        return;
    }
    int ans = ones;
    dp[0] = 1-nums[0];
    ans = max(ans, ones+dp[0]);
    for(int i = 1; i<n; i++){
        dp[i] = dp[i-1] + 1 - 2*nums[i];
        if(dp[i]<0) dp[i]=0;
        ans = max(ans, ones+dp[i]);
    }
    cout(ans);
    return;
}

int main(){
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}