#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,k; cin>>n>>m>>k;
    int i = 1; int j = 1;
    vector<vector<pair<int,int>>> ans(k);
    int t = 0;
    while(i<=n) {
        while(j<=m && j>0) {
            ans[t].push_back({i,j});
            if(ans[t].size()==2 && t<k-1) {
                t++;
            }
            if(i&1) j++;
            else j--;
        }
        i++;
        if(i&1) j = 1;
        else j = m;
    }
    for(auto &v: ans) {
        cout<<v.size()<<" ";
        for(auto &p: v) {
            cout<<p.first<<" "<<p.second<<" ";
        }
        cout<<endl;
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