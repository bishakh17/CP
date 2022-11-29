#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char,ll> map;
    for(ll i = 0; i<n; i++){
        map[s[i]]++;
    }
    vector<ll> nums;
    for(auto i : map){
        nums.push_back(i.second);
    }
    sort(nums.begin(),nums.end(),greater<ll>());
    ll ans = 0;
    for(ll i = 0; i<nums.size(); i++){
        if(k==0){
            break;
        }
        if(k>=nums[i]){
            ans+=nums[i]*nums[i];
            k-=nums[i];
        }
        else{
            ans+=k*k;
            k=0;
        }
    }
    cout<<ans<<endl;
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