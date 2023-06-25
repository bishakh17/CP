#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<pair<int,int>> segs(m);
    for(int i=0;i<m;i++){
        int l,r; cin>>l>>r;
        segs[i] = {l,r};
    }
    int q; cin>>q;
    vector<int> queries(q);
    for(int i=0;i<q;i++) cin>>queries[i];
    int ans = -1;
    int high = q-1; int low = 0;
    while(low<=high){
        int mid = (low+high)/2;
        vector<int> a(n,0);
        for(int i = 0; i<=mid; i++) a[queries[i]-1] = 1;
        vector<int> pref(n+1,0);
        for(int i = 1; i<=n; i++) pref[i] = pref[i-1] + a[i-1];
        int t = 0;
        for(int i = 0; i<m; i++){
            int l = segs[i].first; int r = segs[i].second;
            int gg = r-l+1;
            if(pref[r] - pref[l-1]>gg/2){
                high = mid-1;
                ans = mid+1;
                t = 1;
                break;
            }
        }
        if(!t)low = mid+1;
    } 
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}