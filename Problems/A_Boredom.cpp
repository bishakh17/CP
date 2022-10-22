#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll dp(vector<ll>& nums, ll i, vector<ll>& map){
    ll n = nums.size();
    if(i>=n) return 0;
    if(map[i]!=-1) return map[i];
    return map[i] = max(i*nums[i]+dp(nums,i+2,map), dp(nums,i+1,map));
}

void solve(){
    ll n;
    cin>>n;
    ll size = 1e5+12;
    vector<ll> nums(size,0);
    for(ll i = 0; i<n; i++){
        ll x;
        cin>>x;
        nums[x]++;
    }
    vector<ll> map(size,-1);
    cout<<dp(nums,0,map)<<endl;
    return;

}

int main(){
    ll T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}