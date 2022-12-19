#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    int sum = 0;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    if(sum%2==0){cout(0);return;}
    int ans = INT64_MAX;
    vector<int> temp = nums;
    for(int i = 0; i<n; i++){
        int count = 0;
        while((nums[i]+temp[i])%2==0){temp[i]/=2;count++;}
        ans = min(ans,count);
    }
    cout(ans);
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}