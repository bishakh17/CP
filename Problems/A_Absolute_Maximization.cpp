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
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int t;
    int ans = 0;
    int d = 1;
    do {
        int a = 0,b = 0;
        t = 0;
        for(int i = 0; i<n; i++){
            int r = nums[i]&1;
            if(r) b = 1;
            else a = 1;
            nums[i] = nums[i]>>1;
            if(nums[i]) t = 1;
        }
        if(a and b) ans+=d;
        d *= 2;
    } while(t);
    cout(ans);
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