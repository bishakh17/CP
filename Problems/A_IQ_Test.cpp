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
    int ans = 0;
    vector<int> nums(n);
    int odd = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]%2) odd++;
    }
    int t = (odd==1);
    for(int i = 0; i<n; i++){
        if(nums[i]%2==t) {cout(i+1); return;}
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}