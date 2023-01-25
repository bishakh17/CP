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
    int maxi = -1;
    if(n<=3){
        vector<int> nums(n);
        for(int i = 0; i<n; i++){
            cin>>nums[i];
            maxi = max(maxi,nums[i]);
        }
        if(n==1){cout(nums[0]); return;}
        if(n==2){cout(max(nums[0]+nums[1],2*abs(nums[0]-nums[1]))); return;}
        if(n==3 and (maxi==nums[0] or maxi==nums[2])){cout(3*maxi); return;}
        else {cout(max(nums[0]+nums[1]+nums[2],max(3*max(nums[0],nums[2]),3*max(nums[1]-nums[0],nums[1]-nums[2])))); return;}
    }
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        maxi = max(maxi,x);
    }
    cout(maxi*n);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}