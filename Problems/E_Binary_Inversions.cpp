#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int ans = 0;
    int sum = 0;
    int t1 = 1;
    int zeros = 0;
    int obz = 0;
    int lo = -1;
    for(int i = 0; i<n; i++){
        sum+=nums[i];
        if(nums[i]==0){ans+=sum; zeros++;}
        if(nums[i]==0 and t1){obz = sum; t1=0;}
        if(nums[i]==1) lo = i;
    }
    if(zeros==0 or lo==-1) ans = n-1;
    else ans = max(max(ans,ans-obz+zeros-1),ans-(n-lo-1)+sum-1);
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