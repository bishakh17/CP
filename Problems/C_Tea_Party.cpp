#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,w; cin>>n>>w;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) cin>>a[i].first, a[i].second = i;
    sort(a.begin(),a.end());
    vector<int> b(n, 0);
    for(int i = 0; i<n; i++){
        int gg = a[i].first/2 + (a[i].first&1);
        if(gg>w) {
            cout(-1);
            return;
        }
        else b[a[i].second] = gg, w-=gg;
    }
    for(int i = n-1; i>=0; i--){
        int gg = a[i].first - b[a[i].second];
        if(gg<=w) b[a[i].second] += gg, w-=gg;
        else b[a[i].second] += w, w=0;
        if(w==0) break;
    }
    for(int i = 0; i < n; i++) cout<<b[i]<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}