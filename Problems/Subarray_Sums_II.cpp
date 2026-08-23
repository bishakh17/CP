#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // High-entropy bit mixer
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        // Random seed initialized once at program start
        static const uint64_t FIXED_RANDOM = 
            std::chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};


void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n+1,0);
    for(int i=0;i<n;i++) {
        cin>>a[i+1];
        a[i+1] += a[i];
    }
    unordered_map<int,int, custom_hash> mp;
    int ans = 0;
    for(int i=0;i<=n;i++){ 
        if(mp.find(a[i]-x)!=mp.end()) ans += mp[a[i]-x];
        mp[a[i]]++;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}