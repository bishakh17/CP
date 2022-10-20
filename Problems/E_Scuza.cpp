#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> nums(n);
    for(ll i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<pair<ll,ll>> query(q);
    for(ll i = 0; i<q; i++){
        cin>>query[i].first;
        query[i].second = i;
    }
    sort(query.begin(),query.end());

    vector<ll> ans(q);
    ll pos = 0;
    ll sum = 0;
    for(ll i = 0; i<q; i++){
        while(pos<n and nums[pos]<=query[i].first){
            sum+=nums[pos];
            pos++;
        }
        ans[query[i].second] = sum;
    }
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return;
}


int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}