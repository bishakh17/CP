#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll T = 1;


void solve(){
    ll n;
    cin>>n;
    ll nums[n];
    for(ll i = 0; i<n; i++){
        cin>>nums[i];
    }
    ll psum[n];
    psum[0] = nums[0];
    for(ll i = 1; i<n; i++){
        psum[i] = psum[i-1]+nums[i];
    }
    sort(nums,nums+n);
    ll psum2[n];
    psum2[0] = nums[0];
    for(ll i = 1; i<n; i++){
        psum2[i] = psum2[i-1]+nums[i];
    }
    ll q;
    cin>>q;
    for(ll i = 0; i<q; i++){
        ll t,l,r;
        cin>>t>>l>>r;
        l--;
        r--;
        if(t==1){
            if(l==0) cout(psum[r]);
            else cout(psum[r]-psum[l-1]);
        }
        else{
            if(l==0) cout(psum2[r]);
            else cout(psum2[r]-psum2[l-1]);
        }
    }
    return;
}

int main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}