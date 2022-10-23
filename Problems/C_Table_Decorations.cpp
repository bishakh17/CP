#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    vector<long long> nums(3);
    for(long long i = 0; i<3; i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end(),greater<long long>());
    long long ans;
    if(nums[0]>(nums[1]+nums[2])*2)  ans = nums[1]+nums[2];
    else ans = (nums[0]+nums[1]+nums[2])/3;
    cout<<ans<<endl;
    return;
}

int main(){
    long long T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}