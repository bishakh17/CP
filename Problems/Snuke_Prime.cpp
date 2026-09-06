#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define F first
#define S second
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,c; cin>>n>>c;
    vector<pair<int,int>> a;
    a.reserve(2*n);
    for(int i = 0; i < n; i++) {
        int x,y,z; cin>>x>>y>>z; 
        a.push_back({x,-z});
        a.push_back({y,z});
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int curr = 0;
    int last = INT64_MAX;
    for(int i = 0; i<a.size(); i++) {
        if(a[i].S<0) {
            ans += (a[i].F - last)*min(curr,c);
            last = a[i].F;
            curr -= a[i].S;
        }
        else {
            ans += (a[i].F - last + 1)*min(curr,c);
            last = a[i].F + 1;
            curr -= a[i].S;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}