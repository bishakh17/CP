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
    int n,k; cin>>n>>k;
    vector<pair<int,int>> a;
    a.reserve(2*n);
    for(int i = 0; i < n; i++) {
        int x,y; cin>>x>>y;
        a.push_back({x,0});
        a.push_back({y,1});
    }
    sort(a.begin(), a.end());
    vector<pair<int,int>> ans;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i].S == 0) {
            cnt ++;
            if(cnt==k) ans.push_back({a[i].F,0});
        }
        else {
            if(cnt==k) ans[ans.size()-1].S = a[i].F;
            cnt --;
        }
    }
    cout<<ans.size()<<endl;
    for(auto p: ans) {
        cout<<p.F<<" "<<p.S<<endl;
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