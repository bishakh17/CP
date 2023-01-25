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
    for(int i = 0; i<4; i++){
        cin>>nums[i];
    }
    if(nums[0]==0){cout(1); return;}
    int ans = nums[0] + 2*min(nums[1],nums[2]);
    ans += min(nums[0]+1,max(nums[1],nums[2])-min(nums[1],nums[2])+nums[3]);
    cout(ans);

   


}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}