#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    ll ans = 0;
    for(int i = 0; i<n; i++){
        int t = i+1;
        ans+=abs(nums[i]-t);
    }
    cout(ans);
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