#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    vector<int> nums(4);
    int mini = INT64_MAX;
    int t = 0;
    for(int i = 0; i<4; i++){
        cin>>nums[i];
        mini = min(mini,nums[i]);
        if(mini == nums[i]) t = i;
    }
    if(t==3) t = 2;
    else if(t==2) t = 3;
    int temp = nums[2];
    nums[2] = nums[3];
    nums[3] = temp;
    if(nums[(t+1)%4]>nums[t] and nums[(t+2)%4]>nums[(t+1)%4] and nums[(t+3)%4]<nums[(t+2)%4] and nums[(t+3)%4]>nums[t]) cout("YES");
    else cout("NO");
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